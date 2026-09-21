#include "bookwindow_student.h"
#include "ui_bookwindow_student.h"
#include "filterdialog.h"
#include "loginwindow.h"
#include "bookborrowconfirmdialog.h"
#include "bookreturndialog.h"
#include "bookrenewdialog.h"
#include "logoutconfirmdialog.h"

BookWindow_Student::BookWindow_Student(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BookWindow_Student)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->comboBox_searchby->setCurrentIndex(0);
    ui->label_bookImage->setScaledContents(true);
    ui->pushButton_borrow->setEnabled(true);
    ui->pushButton_borrow->show();
    ui->pushButton_return->hide();
    ui->pushButton_renew->hide();
    readFileAndDisplayRank();
    readFileAndDisplayTable();
    ui->pushButton_NextPage->setEnabled(false);
    ui->pushButton_PreviousPage->setEnabled(false);
    readFileAndDisplayStatus();

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timeFunction()));
    timer->start(1000);              // set time every 1 sec

    QPixmap userProfilePic(":/img/img/samplephoto_personal.png");
    ui->label_profiePic->setPixmap(
        userProfilePic.scaled(
            300,
            470,
            Qt::KeepAspectRatio,
            Qt::FastTransformation
            )
        );

    ui->label_greeting->setText(
        QString("Welcome back, %1").arg(QString::fromStdString(currentUserName))
        );
}


BookWindow_Student::~BookWindow_Student()
{
    delete ui;
}

void BookWindow_Student::timeFunction()
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

void BookWindow_Student::readFileAndDisplayTable()
{
    ui->tableWidget->setRowCount(0);

    QSqlDatabase dataBase = QSqlDatabase::database("DBConnection");
    dataBase.open();

    QSqlQuery query(dataBase);
    QString str = f_sql_user_data;
    query.prepare(str);
    query.bindValue(":u", QString::fromStdString(currentUserID));
    query.exec();

    ui->tableWidget->setColumnCount(7);
    QStringList labels;                                                                        // set a QStringList variable for labels
    labels << "Title" << "Author" << "Bookshelf" << "Genre" << "Language" << "Book Code" << "Status";
    ui->tableWidget->setHorizontalHeaderLabels(labels);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    int rowCount = 0;
    currentBkBorrowed = 0;
    while (query.next()){
        ui->tableWidget->insertRow(rowCount);
        QTableWidgetItem *book_code = new QTableWidgetItem;
        QTableWidgetItem *book_title = new QTableWidgetItem;
        QTableWidgetItem *author = new QTableWidgetItem;
        QTableWidgetItem *book_status = new QTableWidgetItem;
        QTableWidgetItem *genre = new QTableWidgetItem;
        QTableWidgetItem *language = new QTableWidgetItem;
        QTableWidgetItem *bookshelf = new QTableWidgetItem;

        book_code->setText(query.value(0).toString());
        book_title->setText(query.value(1).toString());
        author->setText(query.value(2).toString());
        language->setText(query.value(4).toString());
        if (query.value(12).toString() == "in display"){
            book_status->setText("Available");
        } else if (query.value(12).toString() == "loan" && query.value(13).toString().toStdString() == currentUserID){
            book_status->setText("Borrowed");
            currentBkBorrowed += 1;
        } else {
            book_status->setText("Unavailable"); }
        genre->setText(query.value(9).toString());
        bookshelf->setText(query.value(10).toString());

        ui->tableWidget->setItem(rowCount, 0, book_title);
        ui->tableWidget->setItem(rowCount, 1, author);
        ui->tableWidget->setItem(rowCount, 2, bookshelf);
        ui->tableWidget->setItem(rowCount, 3, genre);
        ui->tableWidget->setItem(rowCount, 4, language);
        ui->tableWidget->setItem(rowCount, 5, book_code);
        ui->tableWidget->setItem(rowCount, 6, book_status);

        rowCount++;
    }

    ui->label_BookBorrowedCount->setText(QString("Book Borrowed: %1").arg(currentBkBorrowed));
}


void BookWindow_Student::readAndDisplayConfig()
{
    QSqlDatabase dataBase = QSqlDatabase::database("DBConnection");
    dataBase.open();

    QSqlQuery queryConfig(dataBase);
    queryConfig.prepare("SELECT userid, name FROM users WHERE userid = :id");
    queryConfig.bindValue(":id", QString::fromStdString(currentUserID));
    queryConfig.exec();
    queryConfig.next();

    ui->lineEdit_UserID->setPlaceholderText(queryConfig.value(0).toString());
    ui->lineEdit_Name->setPlaceholderText(queryConfig.value(1).toString());
}


void BookWindow_Student::readFileAndDisplayRank()
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


void BookWindow_Student::closeEvent(QCloseEvent *event){
    event->accept();
    QApplication::quit();
}


void BookWindow_Student::on_pushButton_navtosearch_clicked()
{
    saveCurrentIndex();
    ui->stackedWidget->setCurrentIndex(1);
    readFileAndDisplayTable();
}


void BookWindow_Student::on_pushButton_navtomain_clicked()
{
    saveCurrentIndex();
    ui->stackedWidget->setCurrentIndex(0);
    readFileAndDisplayStatus();
}


void BookWindow_Student::on_pushButton_navtoselfborrowlog_clicked()
{
    saveCurrentIndex();
    ui->stackedWidget->setCurrentIndex(2);
    readFileAndDisplaySelfBorrowLog();
}


void BookWindow_Student::on_tableWidget_cellClicked(int row)
{
    saveCurrentIndex();
    ui->stackedWidget->setCurrentIndex(3);

    QTableWidgetItem *bk_code_item = ui->tableWidget->item(row, 5);
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
                                           "Status: %11\n\n")
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
                                       .arg(queryData.value(12).toString())); // %11

    QTableWidgetItem *bk_status_item = ui->tableWidget->item(row, 6);
    QString bk_status = bk_status_item->text();

    if (bk_status == "Borrowed"){
        ui->pushButton_borrow->setEnabled(false);
        ui->pushButton_return->setEnabled(true);
        ui->pushButton_renew->setEnabled(true);
        ui->pushButton_borrow->hide();
        ui->pushButton_return->show();
        ui->pushButton_renew->show();
    } else if (bk_status == "Unavailable" or currentBkBorrowed == 10){
        ui->pushButton_borrow->setEnabled(false);
        ui->pushButton_return->setEnabled(false);
        ui->pushButton_renew->setEnabled(false);
        ui->pushButton_borrow->show();
        ui->pushButton_return->hide();
        ui->pushButton_renew->hide();
    } else {
        ui->pushButton_borrow->setEnabled(true);
        ui->pushButton_return->setEnabled(false);
        ui->pushButton_renew->setEnabled(false);
        ui->pushButton_borrow->show();
        ui->pushButton_return->hide();
        ui->pushButton_renew->hide();
    }
}


void BookWindow_Student::on_pushButton_toWeb_clicked()
{
    QString bookUrl = QString("https://www.gutenberg.org/ebooks/%1").arg(QString::number(bookRow));

    QDesktopServices::openUrl(QUrl(bookUrl));
}


void BookWindow_Student::on_pushButton_borrow_clicked()
{
    BookBorrowConfirmDialog *bookBorrConfirm = new BookBorrowConfirmDialog;
    bookBorrConfirm->exec();

    ui->pushButton_borrow->setEnabled(false);
    ui->pushButton_borrow->setStyleSheet("background-color: black; color: grey;");
}


void BookWindow_Student::on_pushButton_filter_clicked()
{
    filterDialog filterdialog(this);
    filterdialog.exec();
}


void BookWindow_Student::on_pushButton_backToSearch_clicked()
{
    on_pushButton_navtosearch_clicked();
}


void BookWindow_Student::on_pushButton_return_clicked()
{
    BookReturnDialog *bookReturnDialog = new BookReturnDialog;
    bookReturnDialog->exec();

    ui->pushButton_return->setEnabled(false);
    ui->pushButton_renew->setEnabled(false);
}


void BookWindow_Student::on_pushButton_renew_clicked()
{
    BookRenewDialog *bookRenewDialog = new BookRenewDialog;
    bookRenewDialog->exec();

    ui->pushButton_renew->setEnabled(false);
}


void BookWindow_Student::on_lineEdit_searchinput_returnPressed()
{
    int searchBy = ui->comboBox_searchby->currentIndex();
    f_sql_user_data = sql_user_data;

    if (ui->lineEdit_searchinput->text().isEmpty()){
        readFileAndDisplayTable();
    } else {
        QString searchInput = ui->lineEdit_searchinput->text().trimmed();

        switch(searchBy){
            default:
                f_sql_user_data += " AND title LIKE '%" + searchInput + "%'";
                break;
            case 1:     // search by book name
                f_sql_user_data += " AND title LIKE '%" + searchInput + "%'";
                break;
            case 2:     // search by book code
                f_sql_user_data += " AND bookcode LIKE '%" + searchInput + "%'";
                break;
            case 3:     // search by author
                f_sql_user_data += " AND author LIKE '%" + searchInput + "%'";
                break;
        }
        readFileAndDisplayTable();
    }
}


void BookWindow_Student::on_comboBox_searchby_currentIndexChanged(int index)
{
    if (index == 2){
        ui->lineEdit_searchinput->setPlaceholderText("Search by entering book code");
    } else if (index == 3){
        ui->lineEdit_searchinput->setPlaceholderText("Search by entering author");
    } else {
        ui->lineEdit_searchinput->setPlaceholderText("Search by entering book name");
    }
}


void BookWindow_Student::on_pushButton_EditProfile_clicked()
{
    saveCurrentIndex();
    ui->stackedWidget->setCurrentIndex(4);
    readAndDisplayConfig();
    resetEditConfigPageLabel();
}


void BookWindow_Student::on_pushButton_ChangeConfig_clicked()
{
    resetEditConfigPageLabel();
    QString updatedData = "";

    QSqlDatabase dataBase = QSqlDatabase::database("DBConnection");
    dataBase.open();

    if (!(ui->lineEdit_Name->text().isEmpty())){   // lineEdit_Name have text
        QString newName = ui->lineEdit_Name->text().trimmed();
        bool nameValid = true;

        for (int i = 0; i < newName.size(); i++){
            QChar newNameChar = newName[i];
            if (!(newNameChar.isLetter() || newNameChar == " ")){
                nameValid = false;
                break;
            }
        }

        if (nameValid == true){
            QSqlQuery queryName(dataBase);
            queryName.prepare("UPDATE users SET name = :name WHERE userid = :id;");
            queryName.bindValue(":name", ui->lineEdit_Name->text().trimmed());
            queryName.bindValue(":id", QString::fromStdString(currentUserID));
            queryName.exec();
            currentUserName = ui->lineEdit_Name->text().trimmed().toStdString();
            ui->lineEdit_Name->setText("");
            ui->lineEdit_Name->setPlaceholderText(QString::fromStdString(currentUserName));
        } else {
            ui->label_StatusUserName->setStyleSheet("color: red;");
            ui->label_StatusUserName->setText("Your name should only consist letter and space");
        }
    }

    if (!(ui->lineEdit_UserID->text().isEmpty())){    // lineEdit_UserID have text
        QSqlQuery queryCheck(dataBase);
        queryCheck.prepare("SELECT COUNT(*) FROM users WHERE userid = :id");
        queryCheck.bindValue(":id", ui->lineEdit_UserID->text().trimmed());
        queryCheck.exec();
        queryCheck.next();
        int repeat = queryCheck.value(0).toInt();
        if (repeat > 0){
            ui->label_StatusUserID->setStyleSheet("color: red;");
            ui->label_StatusUserID->setText("Update failed, id is already in used");
        } else {
            QSqlQuery queryID(dataBase);
            queryID.prepare("UPDATE users SET userid = :nid WHERE userid = :oid");
            queryID.bindValue(":nid", ui->lineEdit_UserID->text().trimmed());
            queryID.bindValue(":oid", QString::fromStdString(currentUserID));
            queryID.exec();
        }
    }

    if (!(ui->lineEdit_CurrentPW->text().isEmpty()) && !(ui->lineEdit_NewPW->text().isEmpty()) && !(ui->lineEdit_ConfirmPW->text().isEmpty())){

        // user entered current, new and confirm pasword lineEdit

        QSqlQuery queryPW(dataBase);
        queryPW.prepare("SELECT password FROM users WHERE userid = :id");
        queryPW.bindValue(":id", QString::fromStdString(currentUserID));
        queryPW.exec();
        if ((ui->lineEdit_CurrentPW->text()) == queryPW.value(0).toString()){    // current pw correct
            if ((ui->lineEdit_NewPW->text()) == (ui->lineEdit_ConfirmPW->text())){
                QSqlQuery queryUpPW(dataBase);
                queryUpPW.prepare("UPDATE users SET password = :pw WHERE userid = :id");
                queryUpPW.bindValue(":pw", ui->label_ConfirmPW->text());
                queryUpPW.bindValue("id", QString::fromStdString(currentUserID));
                queryUpPW.exec();

                ui->label_StatusNewAndConfirmPW->setStyleSheet("color: green;");
                ui->label_StatusNewAndConfirmPW->setText("Password changed!");
            } else {
                ui->label_StatusNewAndConfirmPW->setStyleSheet("color: red;");
                ui->label_StatusNewAndConfirmPW->setText("Confirm password should be same as new password");
            }
        } else {
            ui->label_StatusCurrentPW->setStyleSheet("color: red;");
            ui->label_StatusCurrentPW->setText("Current password incorrect");
        }
    }
}


void BookWindow_Student::resetEditConfigPageLabel()
{
    ui->label_StatusCurrentPW->setText("");
    ui->label_StatusNewAndConfirmPW->setText("");
    ui->label_StatusUserID->setText("");
    ui->label_StatusUserName->setText("");
    ui->label_Warning->setText("");
}


void BookWindow_Student::on_pushButton_LogOut_clicked()
{
    LogoutConfirmDialog logoutConfirmDialog(this);
    logoutConfirmDialog.exec();
}


void BookWindow_Student::logOut()
{
    loginWindow = new LoginWindow();
    loginWindow->setAttribute(Qt::WA_DeleteOnClose);
    loginWindow->show();
    this->deleteLater();
}


void BookWindow_Student::saveCurrentIndex()
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


void BookWindow_Student::readFileAndDisplayStatus()
{
    ui->tableWidget_Status->setRowCount(0);

    QSqlDatabase dataBase = QSqlDatabase::database("DBConnection");
    dataBase.open();

    QSqlQuery queryLog(dataBase);
    queryLog.prepare("SELECT * FROM borrow_log "
                     "WHERE userid = :id AND STATUS <> 'Returned'");
    queryLog.bindValue(":id", QString::fromStdString(currentUserID));
    queryLog.exec();

    ui->tableWidget_Status->setColumnCount(4);
    QStringList labels;
    labels << "Book Code" << "Book Name" << "Borrow Date" << "Return Date";
    ui->tableWidget_Status->setHorizontalHeaderLabels(labels);
    ui->tableWidget_Status->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    QSqlQuery queryData(dataBase);
    int rowCount = 0;
    while (queryLog.next()){
        queryData.prepare("SELECT title FROM metadata "
                          "WHERE bookcode = :bkcode LIMIT 1");
        queryData.bindValue(":bkcode", queryLog.value(2).toString());
        queryData.exec();
        queryData.next();
        QString bookTitle = queryData.value(0).toString();

        ui->tableWidget_Status->insertRow(rowCount);

        QTableWidgetItem *bookcode = new QTableWidgetItem;
        QTableWidgetItem *bookname = new QTableWidgetItem;
        QTableWidgetItem *borrow_date = new QTableWidgetItem;
        QTableWidgetItem *return_date = new QTableWidgetItem;

        bookcode->setText(queryLog.value(2).toString());
        bookname->setText(bookTitle);
        borrow_date->setText(queryLog.value(3).toString());
        return_date->setText(queryLog.value(4).toString());

        ui->tableWidget_Status->setItem(rowCount, 0, bookcode);
        ui->tableWidget_Status->setItem(rowCount, 1, bookname);
        ui->tableWidget_Status->setItem(rowCount, 2, borrow_date);
        ui->tableWidget_Status->setItem(rowCount, 3, return_date);

        rowCount++;
    }
}


void BookWindow_Student::readFileAndDisplaySelfBorrowLog()
{
    ui->tableWidget_SelfBorrowLog->setRowCount(0);

    QSqlDatabase dataBase = QSqlDatabase::database("DBConnection");
    dataBase.open();

    QSqlQuery queryLog(dataBase);
    queryLog.prepare("SELECT * FROM borrow_log "
                     "WHERE userid = :id");
    queryLog.bindValue(":id", QString::fromStdString(currentUserID));
    queryLog.exec();

    ui->tableWidget_SelfBorrowLog->setColumnCount(9);
    QStringList labels;
    labels << "Book Code" << "Book Name" << "Author" << "Borrow Date" << "System Return Date" << "Actual Return Date" << "Status" << "Fine" << "Renew Times";
    ui->tableWidget_SelfBorrowLog->setHorizontalHeaderLabels(labels);
    ui->tableWidget_SelfBorrowLog->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    QSqlQuery queryData(dataBase);
    int rowCount = 0;
    while (queryLog.next()){
        queryData.prepare("SELECT title, author FROM metadata "
                          "WHERE bookcode = :bkcode LIMIT 1");
        queryData.bindValue(":bkcode", queryLog.value(2).toString());
        queryData.exec();
        queryData.next();
        QString bookTitle = queryData.value(0).toString();
        QString bookAuthor = queryData.value(1).toString();

        ui->tableWidget_SelfBorrowLog->insertRow(rowCount);

        QTableWidgetItem *bookcode = new QTableWidgetItem;
        QTableWidgetItem *bookname = new QTableWidgetItem;
        QTableWidgetItem *author = new QTableWidgetItem;
        QTableWidgetItem *borrowdate = new QTableWidgetItem;
        QTableWidgetItem *planreturndate = new QTableWidgetItem;
        QTableWidgetItem *actreturndate = new QTableWidgetItem;
        QTableWidgetItem *status = new QTableWidgetItem;
        QTableWidgetItem *fine = new QTableWidgetItem;
        QTableWidgetItem *renewtime = new QTableWidgetItem;

        bookcode->setText(queryLog.value(2).toString());
        bookname->setText(bookTitle);
        author->setText(bookAuthor);
        borrowdate->setText(queryLog.value(3).toString());
        planreturndate->setText(queryLog.value(4).toString());
        actreturndate->setText(queryLog.value(5).toString());
        status->setText(queryLog.value(6).toString());
        fine->setText(queryLog.value(7).toString());
        if (queryLog.value(8).isNull()){
            renewtime->setText("0");
        } else {
            renewtime->setText(queryLog.value(8).toString());
        }

        ui->tableWidget_SelfBorrowLog->setItem(rowCount, 0, bookcode);
        ui->tableWidget_SelfBorrowLog->setItem(rowCount, 1, bookname);
        ui->tableWidget_SelfBorrowLog->setItem(rowCount, 2, author);
        ui->tableWidget_SelfBorrowLog->setItem(rowCount, 3, borrowdate);
        ui->tableWidget_SelfBorrowLog->setItem(rowCount, 4, planreturndate);
        ui->tableWidget_SelfBorrowLog->setItem(rowCount, 5, actreturndate);
        ui->tableWidget_SelfBorrowLog->setItem(rowCount, 6, status);
        ui->tableWidget_SelfBorrowLog->setItem(rowCount, 7, fine);
        ui->tableWidget_SelfBorrowLog->setItem(rowCount, 8, renewtime);

        rowCount++;
    }
}


void BookWindow_Student::on_pushButton_PreviousPage_clicked()
{
    ui->pushButton_NextPage->setEnabled(true);
    nextPage.push(ui->stackedWidget->currentIndex());

    int previousIndex = pageHistory.pop();
    ui->stackedWidget->setCurrentIndex(previousIndex);

    if (pageHistory.size() == 0){
        ui->pushButton_PreviousPage->setEnabled(false);
    }
}


void BookWindow_Student::on_pushButton_NextPage_clicked()
{
    ui->pushButton_PreviousPage->setEnabled(true);
    pageHistory.push(ui->stackedWidget->currentIndex());

    int nextIndex = nextPage.pop();
    ui->stackedWidget->setCurrentIndex(nextIndex);

    if (nextPage.size() == 0){
        ui->pushButton_NextPage->setEnabled(false);
    }
}


void BookWindow_Student::on_pushButton_Reload_clicked()
{
    int currentIndex = ui->stackedWidget->currentIndex();

    switch (currentIndex){
    default:
        readFileAndDisplayRank();
        break;
    case 1:
        readFileAndDisplayTable();
        break;
    case 2:
        break;
    case 3:
        on_tableWidget_cellClicked(selectedBookRow);
        break;
    case 4:
        on_pushButton_EditProfile_clicked();
    }
}


void BookWindow_Student::on_tableWidget_Status_cellClicked(int row)
{
    saveCurrentIndex();
    ui->stackedWidget->setCurrentIndex(3);

    QTableWidgetItem *bk_code_item = ui->tableWidget_Status->item(row, 0);
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
                                           "Status: %11\n\n")
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
                                       .arg(queryData.value(12).toString())); // %11

    ui->pushButton_borrow->setEnabled(false);
    ui->pushButton_return->setEnabled(true);
    ui->pushButton_renew->setEnabled(true);
    ui->pushButton_borrow->hide();
    ui->pushButton_return->show();
    ui->pushButton_renew->show();
}


void BookWindow_Student::on_pushButton_ShowHidePW_pressed()
{
    QPixmap pixmap(":/img/img/showpw.png");
    ui->lineEdit_CurrentPW->setEchoMode(QLineEdit::Normal);
    ui->pushButton_ShowHidePW->setIcon(QIcon(pixmap));
    ui->pushButton_ShowHidePW->setIconSize(QSize(56,27));
}


void BookWindow_Student::on_pushButton_ShowHidePW_released()
{
    QPixmap pixmap(":/img/img/hidepw.png");
    ui->lineEdit_CurrentPW->setEchoMode(QLineEdit::Password);
    ui->pushButton_ShowHidePW->setIcon(QIcon(pixmap));
    ui->pushButton_ShowHidePW->setIconSize(QSize(56,27));
}


void BookWindow_Student::on_pushButton_ShowHidePW2_pressed()
{
    QPixmap pixmap(":/img/img/showpw.png");
    ui->lineEdit_NewPW->setEchoMode(QLineEdit::Normal);
    ui->pushButton_ShowHidePW2->setIcon(QIcon(pixmap));
    ui->pushButton_ShowHidePW2->setIconSize(QSize(56,27));
}


void BookWindow_Student::on_pushButton_ShowHidePW2_released()
{
    QPixmap pixmap(":/img/img/hidepw.png");
    ui->lineEdit_NewPW->setEchoMode(QLineEdit::Normal);
    ui->pushButton_ShowHidePW2->setIcon(QIcon(pixmap));
    ui->pushButton_ShowHidePW2->setIconSize(QSize(56,27));
}


void BookWindow_Student::on_pushButton_ShowHidePW3_pressed()
{
    QPixmap pixmap(":/img/img/showpw.png");
    ui->lineEdit_ConfirmPW->setEchoMode(QLineEdit::Normal);
    ui->pushButton_ShowHidePW3->setIcon(QIcon(pixmap));
    ui->pushButton_ShowHidePW3->setIconSize(QSize(56,27));
}


void BookWindow_Student::on_pushButton_ShowHidePW3_released()
{
    QPixmap pixmap(":/img/img/showpw.png");
    ui->lineEdit_ConfirmPW->setEchoMode(QLineEdit::Normal);
    ui->pushButton_ShowHidePW3->setIcon(QIcon(pixmap));
    ui->pushButton_ShowHidePW3->setIconSize(QSize(56,27));
}


void BookWindow_Student::on_tableWidget_SelfBorrowLog_cellClicked(int row)
{
    saveCurrentIndex();
    ui->stackedWidget->setCurrentIndex(3);

    QTableWidgetItem *bk_code_item = ui->tableWidget_SelfBorrowLog->item(row, 0);
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
                                           "Status: %11\n\n")
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
                                       .arg(queryData.value(12).toString())); // %11

    QTableWidgetItem *bk_status_item = ui->tableWidget_SelfBorrowLog->item(row, 6);
    QString bk_status = bk_status_item->text();

    if (bk_status == "Borrowed"){
        ui->pushButton_borrow->setEnabled(false);
        ui->pushButton_return->setEnabled(true);
        ui->pushButton_renew->setEnabled(true);
        ui->pushButton_borrow->hide();
        ui->pushButton_return->show();
        ui->pushButton_renew->show();
    } else {
        if (queryData.value(12).toString() == "in display"){
            ui->pushButton_borrow->setEnabled(true);
            ui->pushButton_return->setEnabled(false);
            ui->pushButton_renew->setEnabled(false);
            ui->pushButton_borrow->show();
            ui->pushButton_return->hide();
            ui->pushButton_renew->hide();
        } else {
            ui->pushButton_borrow->setEnabled(false);
            ui->pushButton_return->setEnabled(false);
            ui->pushButton_renew->setEnabled(false);
            ui->pushButton_borrow->show();
            ui->pushButton_return->hide();
            ui->pushButton_renew->hide();
        }
    }
}

