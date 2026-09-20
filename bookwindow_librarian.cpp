#include "bookwindow_librarian.h"
#include "ui_bookwindow_librarian.h"
#include "addnewdialog.h"
#include "bookwindow_student.h"
#include "filteruserforlibrariandialog.h"
#include "filterbookforlibrariandialog.h"
#include "deletebookdialog.h"
#include "logoutconfirmdialog.h"
#include "loginwindow.h"

BookWindow_Librarian::BookWindow_Librarian(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BookWindow_Librarian)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->comboBox_searchby_book->setCurrentIndex(0);
    ui->comboBox_searchby_user->setCurrentIndex(0);
    ui->pushButton_PreviousPage->setEnabled(false);
    ui->pushButton_NextPage->setEnabled(false);

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timeFunction()));
    timer->start(1000);

    readFileAndDisplayBookList();
    readFileAndDisplayRank();
}


BookWindow_Librarian::~BookWindow_Librarian()
{
    delete ui;
}


void BookWindow_Librarian::closeEvent(QCloseEvent *event)
{
    event->accept();
    QApplication::quit();
}


void BookWindow_Librarian::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        QPoint clickPos = event->pos();

        if (ui->titleBarWidget->geometry().contains(clickPos)) {

            isDragging = true;
            dragPosition = event->globalPosition().toPoint() - frameGeometry().topLeft();
            event->accept();
        }
    }
}


void BookWindow_Librarian::mouseMoveEvent(QMouseEvent *event)
{
    if (isDragging && (event->buttons() & Qt::LeftButton)) {
        move(event->globalPosition().toPoint() - dragPosition);
        event->accept();
    }
}


void BookWindow_Librarian::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        isDragging = false;
        event->accept();
    }
}


void BookWindow_Librarian::timeFunction()
{
    QTime time = QTime::currentTime();
    QDate date = QDate::currentDate();
    QString qs_date = date.toString("yyyy/MM/dd");
    QString qs_time = time.toString("hh : mm : ss");
    if ((time.second() % 2) == 0){
        qs_time[3] = ' ';
        qs_time[8] = ' ';
    }
    ui->label_time->setText(qs_time);
    ui->label_date->setText(qs_date);
}


void BookWindow_Librarian::readFileAndDisplayRank()
{
    ui->tableWidget_RankBoard->setRowCount(0);

    QSqlDatabase dataBase = QSqlDatabase::database("DBConnection");
    dataBase.open();

    QSqlQuery queryGetNum(dataBase);
    queryGetNum.prepare("SELECT userid, total_bred FROM users");
    queryGetNum.exec();

    struct UserInfo {
        QString userid;
        int total_borrow;
    };
    QVector<UserInfo> info;
    while(queryGetNum.next()){
        UserInfo u;
        u.userid = queryGetNum.value(0).toString();
        u.total_borrow = queryGetNum.value(1).toInt();
        info.append(u);
    }

    for (int i = 0; i < info.size() - 1; i++){
        for (int j = 0; j < info.size() - i - 1; j++){
            // Bubble sort for borrow rank
            if (info[j].total_borrow < info[j+1].total_borrow){
                std::swap(info[j], info[j+1]);
            }
        }
    }

    QSqlQuery queryRank(dataBase);
    queryRank.exec("DROP TABLE IF EXISTS rank");
    queryRank.exec("CREATE TABLE rank (userid TEXT, book_borrowed INTEGER)");
    for (const UserInfo &uI : info){
        queryRank.prepare("INSERT INTO rank (userid, book_borrowed) "
                          "SELECT :userid, :numBook "
                          "WHERE :numBook != 0");
        queryRank.bindValue(":userid", uI.userid);
        queryRank.bindValue(":numBook", uI.total_borrow);
        queryRank.exec();
    }

    ui->tableWidget_RankBoard->setColumnCount(2);
    QStringList labels;
    labels << "Name" << "No. of Books";
    ui->tableWidget_RankBoard->setHorizontalHeaderLabels(labels);
    ui->tableWidget_RankBoard->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    int rowCount = 0;
    QSqlQuery queryRankTable(dataBase);
    queryRankTable.exec("SELECT * FROM rank");
    while (queryRankTable.next()){
        ui->tableWidget_RankBoard->insertRow(rowCount);
        QTableWidgetItem *user = new QTableWidgetItem;
        QTableWidgetItem *no_book = new QTableWidgetItem;

        user->setText(queryRankTable.value(0).toString());
        no_book->setText(queryRankTable.value(1).toString());

        user->setTextAlignment(Qt::AlignCenter);
        no_book->setTextAlignment(Qt::AlignCenter);

        ui->tableWidget_RankBoard->setItem(rowCount, 0, user);
        ui->tableWidget_RankBoard->setItem(rowCount, 1, no_book);

        rowCount++;
    }
}


void BookWindow_Librarian::readFileAndDisplayBookList()
{
    ui->tableWidget_BookList->setRowCount(0);

    QSqlDatabase dataBase = QSqlDatabase::database("DBConnection");

    if(!dataBase.open()){
        qDebug() << "Database open Error" << dataBase.lastError().text();
        return;
    }

    QSqlQuery query(dataBase);
    QString str = f_sql_librarian_data;
    if(!query.exec(str)){
        qDebug() << "Query execution failed";
        return;
    }

    ui->tableWidget_BookList->setColumnCount(6);
    QStringList labels;
    labels << "Book code" << "Title" << "Status" << "Borrower" << "Borrow date" << "Return date";
    ui->tableWidget_BookList->setHorizontalHeaderLabels(labels);
    ui->tableWidget_BookList->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    int rowCount = 0;
    bookBorrowed = 0;
    while (query.next()){
        ui->tableWidget_BookList->insertRow(rowCount);
        QTableWidgetItem *book_code = new QTableWidgetItem;
        QTableWidgetItem *title = new QTableWidgetItem;
        QTableWidgetItem *status = new QTableWidgetItem;
        QTableWidgetItem *borrower = new QTableWidgetItem;
        QTableWidgetItem *borrow_date = new QTableWidgetItem;
        QTableWidgetItem *return_date = new QTableWidgetItem;

        book_code->setText(query.value(0).toString());
        title->setText(query.value(1).toString());
        status->setText(query.value(12).toString());
        borrower->setText(query.value(13).toString());
        borrow_date->setText(query.value(14).toString());
        return_date->setText(query.value(15).toString());

        ui->tableWidget_BookList->setItem(rowCount, 0, book_code);
        ui->tableWidget_BookList->setItem(rowCount, 1, title);
        ui->tableWidget_BookList->setItem(rowCount, 2, status);
        ui->tableWidget_BookList->setItem(rowCount, 3, borrower);
        ui->tableWidget_BookList->setItem(rowCount, 4, borrow_date);
        ui->tableWidget_BookList->setItem(rowCount, 5, return_date);

        rowCount++;
    }
}


void BookWindow_Librarian::on_pushButton_NavToBookList_clicked()
{
    saveCurrentIndex();
    ui->stackedWidget->setCurrentIndex(0);
    readFileAndDisplayBookList();
}


void BookWindow_Librarian::on_pushButton_AddNew_clicked()
{
    AddNewDialog addNewDialog(this);
    addNewDialog.exec();
}


void BookWindow_Librarian::readFileAndDisplayUserList()
{
    ui->tableWidget_UserList->setRowCount(0);
    QSqlDatabase dataBase = QSqlDatabase::database("DBConnection");

    if(!dataBase.open()){
        qDebug() << "Database open Error" << dataBase.lastError().text();
        return;
    }

    QSqlQuery queryUser(dataBase);
    QString str = f_sql_librarian_user;
    if(!queryUser.exec(str)){
        qDebug() << "Query execution failed";
        return;
    }

    ui->tableWidget_UserList->setColumnCount(5);
    QStringList labels;
    labels << "User ID" << "User Name" << "Total Book Borrowed" << "Current Borrowing" << "Account Type";
    ui->tableWidget_UserList->setHorizontalHeaderLabels(labels);
    ui->tableWidget_UserList->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    int rowCount = 0;
    while (queryUser.next()){
        ui->tableWidget_UserList->insertRow(rowCount);

        QTableWidgetItem *userID = new QTableWidgetItem;
        QTableWidgetItem *user_name = new QTableWidgetItem;
        QTableWidgetItem *total_borrowed = new QTableWidgetItem;
        QTableWidgetItem *current_borrow = new QTableWidgetItem;
        QTableWidgetItem *acc_type = new QTableWidgetItem;

        userID->setText(queryUser.value(0).toString());
        user_name->setText(queryUser.value(3).toString());
        total_borrowed->setText(queryUser.value(4).toString());
        current_borrow->setText(queryUser.value(5).toString());
        acc_type->setText(queryUser.value(2).toString());

        ui->tableWidget_UserList->setItem(rowCount, 0, userID);
        ui->tableWidget_UserList->setItem(rowCount, 1, user_name);
        ui->tableWidget_UserList->setItem(rowCount, 2, total_borrowed);
        ui->tableWidget_UserList->setItem(rowCount, 3, current_borrow);
        ui->tableWidget_UserList->setItem(rowCount, 4, acc_type);
    }
}


void BookWindow_Librarian::on_pushButton_NavToUserList_clicked()
{
    saveCurrentIndex();
    ui->stackedWidget->setCurrentIndex(2);
    readFileAndDisplayUserList();
    readFileAndDisplayRank();
}


void BookWindow_Librarian::on_tableWidget_BookList_cellClicked(int row)
{
    saveCurrentIndex();
    ui->stackedWidget->setCurrentIndex(1);

    QTableWidgetItem *bk_code_item = ui->tableWidget_BookList->item(row, 0);
    selectedBookCode = bk_code_item->text();
    selectedBookRow = row;

    bookRow = selectedBookCode.right(5).toInt();
    QString picUrl = QString("https://www.gutenberg.org/cache/epub/%1/pg%1.cover.medium.jpg").arg(QString::number(bookRow));

    QNetworkAccessManager *manager = new QNetworkAccessManager(this);

    connect(manager, &QNetworkAccessManager::finished, this, [this](QNetworkReply *reply){

        if (reply->error() == QNetworkReply::NoError){
            QByteArray data = reply->readAll();
            QPixmap pix;
            pix.loadFromData(data);

            ui->label_bookImage->setPixmap(
                pix.scaled(
                    450,
                    620,
                    Qt::KeepAspectRatio,
                    Qt::FastTransformation
                    )
                );
        } else {
            ui->label_bookImage->setStyleSheet("colour: red;");
            ui->label_bookImage->setText("Error: Failed to load image");
        }

        reply->deleteLater();
    });

    manager->get(QNetworkRequest(QUrl(picUrl)));

    QSqlDatabase dataBase = QSqlDatabase::database("DBConnection");
    QSqlQuery queryData(dataBase);
    queryData.prepare("SELECT * FROM metadata WHERE bookcode = :bkcode LIMIT 1");
    queryData.bindValue(":bkcode", selectedBookCode);
    queryData.exec();
    queryData.next();

    ui->label_discription->setText(QString("Book Code: %1\n\n"
                                    "Book Title: %2\n\n"
                                    "Author: %3\n\n"
                                    "Language: %4\n\n"
                                    "Issued Date: %5\n\n"
                                    "Primary Subject: %6\n\n"
                                    "Locc Classification: %7\n\n"
                                    "Locc Area: %8\n\n"
                                    "Genre: %9\n\n"
                                    "Bookshelf: %10\n\n"
                                    "Status: %11\n\n"
                                    "Borrower: %12\n\n"
                                    "Borrow Date: %13\n\n"
                                    "Return Date: %14\n\n"
                                    "Total borrowed for %15 times")
                                    .arg(queryData.value(0).toString()) // %1
                                    .arg(queryData.value(1).toString()) // %2
                                    .arg(queryData.value(2).toString()) // %3
                                    .arg(queryData.value(4).toString()) // %4
                                    .arg(queryData.value(5).toString()) // %5
                                    .arg(queryData.value(6).toString()) // %6
                                    .arg(queryData.value(7).toString()) // %7
                                    .arg(queryData.value(8).toString()) // %8
                                    .arg(queryData.value(9).toString()) // %9
                                    .arg(queryData.value(10).toString()) // %10
                                    .arg(queryData.value(12).toString()) // %11
                                    .arg(queryData.value(13).toString()) // %12
                                    .arg(queryData.value(14).toString()) // %13
                                    .arg(queryData.value(15).toString()) // %14
                                    .arg(queryData.value(16).toString())); // %15
}


void BookWindow_Librarian::on_pushButton_filter_user_clicked()
{
    FilterUserForLibrarianDialog librarianUserFilter(this);
    librarianUserFilter.exec();
}


void BookWindow_Librarian::on_comboBox_searchby_user_currentIndexChanged(int index)
{
    if (index == 2){
        ui->lineEdit_searchinput_user->setPlaceholderText("Search by entering user name");
    } else {
        ui->lineEdit_searchinput_user->setPlaceholderText("Search by entering exact user ID");
    }
}


void BookWindow_Librarian::on_lineEdit_searchinput_user_returnPressed()
{
    int userSearchBy = ui->comboBox_searchby_user->currentIndex();
    f_sql_librarian_user = sql_librarian_user;

    if (ui->lineEdit_searchinput_user->text().isEmpty()){
        readFileAndDisplayUserList();
    } else {
        QString userSearchInput = ui->lineEdit_searchinput_user->text().trimmed();

        switch(userSearchBy){
            default:
                f_sql_librarian_user += " AND userid =" + userSearchInput;
                break;
            case 1:
                f_sql_librarian_user += " AND userid =" + userSearchInput;
                break;
            case 2:
                f_sql_librarian_user += " AND name LIKE '%" + userSearchInput + "%'";
                break;
        }
        readFileAndDisplayUserList();
    }
}


void BookWindow_Librarian::on_pushButton_filter_book_clicked()
{
    FilterBookForLibrarianDialog librarianBookFilter(this);
    librarianBookFilter.exec();
}


void BookWindow_Librarian::on_comboBox_searchby_book_currentIndexChanged(int index)
{
    if (index == 2){
        ui->lineEdit_searchinput_book->setPlaceholderText("Search by entering book code");
    } else if (index == 3){
        ui->lineEdit_searchinput_book->setPlaceholderText("Search by entering author");
    } else {
        ui->lineEdit_searchinput_book->setPlaceholderText("Search by entering book name");
    }
}


void BookWindow_Librarian::on_lineEdit_searchinput_book_returnPressed()
{
    int bookSearchBy = ui->comboBox_searchby_book->currentIndex();
    f_sql_librarian_data = sql_librarian_data;

    if (ui->lineEdit_searchinput_book->text().isEmpty()){
        readFileAndDisplayBookList();
    } else {
        QString bookSearchInput = ui->lineEdit_searchinput_book->text().trimmed();

        switch(bookSearchBy){
            default:
                f_sql_librarian_data += " AND title LIKE '%" + bookSearchInput + "%'";
                break;
            case 1:     // search by book name
                f_sql_librarian_data += " AND title LIKE '%" + bookSearchInput + "%'";
                break;
            case 2:     // search by book code
                f_sql_librarian_data += " AND bookcode LIKE '%" + bookSearchInput + "%'";
                break;
            case 3:     // search by author
                f_sql_librarian_data += " AND author LIKE '%" + bookSearchInput + "%'";
                break;
        }
        readFileAndDisplayBookList();
    }
}


void BookWindow_Librarian::on_pushButton_DeleteBook_clicked()
{
    DeleteBookDialog deleteBookDialog(this);
    deleteBookDialog.exec();

    ui->pushButton_DeleteBook->setEnabled(false);
    ui->pushButton_toWeb->setEnabled(false);
    ui->stackedWidget->setCurrentIndex(0);
}


void BookWindow_Librarian::on_pushButton_LogOut_clicked()
{
    LogoutConfirmDialog logoutConfirmDialog(this);
    logoutConfirmDialog.exec();
}


void BookWindow_Librarian::logOut()
{
    loginWindow = new LoginWindow();
    loginWindow->setAttribute(Qt::WA_DeleteOnClose);
    loginWindow->show();
    this->deleteLater();
}


void BookWindow_Librarian::on_pushButton_NavToBorrowLog_clicked()
{
    saveCurrentIndex();
    ui->stackedWidget->setCurrentIndex(3);
    readFileAndDisplayBorrowLog();
}


void BookWindow_Librarian::readFileAndDisplayBorrowLog()
{
    ui->tableWidget_BorrowLog->setRowCount(0);

    QSqlDatabase dataBase = QSqlDatabase::database("DBConnection");
    dataBase.open();

    QSqlQuery queryLog(dataBase);
    queryLog.prepare("SELECT * FROM borrow_log");
    queryLog.exec();

    ui->tableWidget_BorrowLog->setColumnCount(9);
    QStringList labels;
    labels << "log_id" << "user_id" << "bookcode" << "borrow_date" << "return_date" << "act_return_date" << "status" << "fine" << "renew_times";
    ui->tableWidget_BorrowLog->setHorizontalHeaderLabels(labels);
    ui->tableWidget_BorrowLog->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    int rowCount = 0;
    while (queryLog.next()){
        ui->tableWidget_BorrowLog->insertRow(rowCount);
        QTableWidgetItem *log_id = new QTableWidgetItem;
        QTableWidgetItem *user_id = new QTableWidgetItem;
        QTableWidgetItem *bookcode = new QTableWidgetItem;
        QTableWidgetItem *borrow_date = new QTableWidgetItem;
        QTableWidgetItem *return_date = new QTableWidgetItem;
        QTableWidgetItem *act_return_date = new QTableWidgetItem;
        QTableWidgetItem *status = new QTableWidgetItem;
        QTableWidgetItem *fine = new QTableWidgetItem;
        QTableWidgetItem *renew_times = new QTableWidgetItem;

        log_id->setText(queryLog.value(0).toString());
        user_id->setText(queryLog.value(1).toString());
        bookcode->setText(queryLog.value(2).toString());
        borrow_date->setText(queryLog.value(3).toString());
        return_date->setText(queryLog.value(4).toString());
        act_return_date->setText(queryLog.value(5).toString());
        status->setText(queryLog.value(6).toString());
        fine->setText(queryLog.value(7).toString());
        renew_times->setText(queryLog.value(8).toString());

        ui->tableWidget_BorrowLog->setItem(rowCount, 0, log_id);
        ui->tableWidget_BorrowLog->setItem(rowCount, 1, user_id);
        ui->tableWidget_BorrowLog->setItem(rowCount, 2, bookcode);
        ui->tableWidget_BorrowLog->setItem(rowCount, 3, borrow_date);
        ui->tableWidget_BorrowLog->setItem(rowCount, 4, return_date);
        ui->tableWidget_BorrowLog->setItem(rowCount, 5, act_return_date);
        ui->tableWidget_BorrowLog->setItem(rowCount, 6, status);
        ui->tableWidget_BorrowLog->setItem(rowCount, 7, fine);
        ui->tableWidget_BorrowLog->setItem(rowCount, 8, renew_times);

        rowCount++;
    }
}


void BookWindow_Librarian::saveCurrentIndex()
{
    if (!pageHistory.isEmpty()){
        if (pageHistory.size() > 9){
            pageHistory.removeFirst();
        }

        if (pageHistory.last() != (ui->stackedWidget->currentIndex())){
            pageHistory.push(ui->stackedWidget->currentIndex());
        }
    } else {
        pageHistory.push(ui->stackedWidget->currentIndex());
    }

    ui->pushButton_PreviousPage->setEnabled(true);

    if (ui->pushButton_NextPage->isEnabled()){
        ui->pushButton_NextPage->setEnabled(false);
    }

    nextPage.clear();
}


void BookWindow_Librarian::on_pushButton_PreviousPage_clicked()
{
    ui->pushButton_NextPage->setEnabled(true);
    nextPage.push(ui->stackedWidget->currentIndex());

    int previousIndex = pageHistory.pop();
    ui->stackedWidget->setCurrentIndex(previousIndex);

    if (pageHistory.size() == 0){
        ui->pushButton_PreviousPage->setEnabled(false);
    }
}


void BookWindow_Librarian::on_pushButton_NextPage_clicked()
{
    ui->pushButton_PreviousPage->setEnabled(true);
    pageHistory.push(ui->stackedWidget->currentIndex());

    int nextIndex = nextPage.pop();
    ui->stackedWidget->setCurrentIndex(nextIndex);

    if (nextPage.size() == 0){
        ui->pushButton_NextPage->setEnabled(false);
    }
}


void BookWindow_Librarian::on_pushButton_Reload_clicked()
{
    int currentIndex = ui->stackedWidget->currentIndex();

    switch (currentIndex){
    default:
        readFileAndDisplayBookList();
        break;
    case 1:
        on_tableWidget_BookList_cellClicked(selectedBookRow);
        break;
    case 2:
        readFileAndDisplayRank();
        readFileAndDisplayUserList();
        break;
    case 3:
        readFileAndDisplayBorrowLog();
        break;
    }
}

