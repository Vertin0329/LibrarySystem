#include "bookrenewdialog.h"
#include "ui_bookrenewdialog.h"
#include "bookwindow_student.h"
#include "bookreturndialog.h"
#include "qrcodegenerator.h"
#include "loginwindow.h"

BookRenewDialog::BookRenewDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BookRenewDialog)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->label_countDown->setText("");
}


BookRenewDialog::~BookRenewDialog()
{
    delete ui;
}


void BookRenewDialog::showPaymentQRCode()
{
    QString url = QString("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
    QImage qrCode = generateQR(url);

    ui->label_QRCode->setPixmap(QPixmap::fromImage(qrCode).scaled(250, 250, Qt::KeepAspectRatio));
}


void BookRenewDialog::on_pushButton_Accept_clicked()
{
    QSqlDatabase dataBase = QSqlDatabase::database("DBConnection");

    if(!dataBase.open()){
        qDebug() << "Database open Error" << dataBase.lastError().text();
        return;
    }

    QSqlQuery queryLog(dataBase);
    queryLog.prepare("SELECT renew_time "
                     "FROM borrow_log "
                     "WHERE userid = :user AND bookcode = :bookcode AND status = 'Borrowed' "
                     "LIMIT = 1");
    queryLog.bindValue(":user", QString::fromStdString(currentUserID));
    queryLog.bindValue(":bookcode", selectedBookCode);
    queryLog.exec();
    queryLog.next();

    int renewTime = queryLog.value(0).toInt();
    if (renewTime < 3){
        forceReturn = false;

        ui->stackedWidget->setCurrentIndex(1);

        QSqlQuery queryData(dataBase);
        queryData.prepare("SELECT title, br_date, return_date "
                          "FROM metadata "
                          "WHERE bookcode = :bkcode "
                          "LIMIT 1");
        queryData.bindValue(":bkcode", selectedBookCode);
        queryData.exec();
        queryData.next();

        QString s_today = QDate::currentDate().toString("yyyy-MM-dd");
        ui->label_BookName->setText(QString("Book name: %1").arg(queryData.value(0).toString()));
        ui->label_CurrentDate->setText(QString("Today's date: %1").arg(s_today));
        ui->label_ReturnDate->setText(QString("Return date: %1").arg(queryData.value(2).toString()));
        int daysToAdd = 14;
        int added = 0;
        QDate today = QDate::currentDate();
        QDate result = today;
        while (added < daysToAdd) {
            result = result.addDays(1);
            int dow = result.dayOfWeek();      // For Qt, Monday will be index 1
            if (dow != 6 && dow != 7) {       // Skip Saturday(6) and Sunday(7)
                added++;
            }
        }
        newReturnDate = result.toString("yyyy-MM-dd");
        ui->label_NewReturnDate->setText(QString("New return date: %1").arg(newReturnDate));

        QDate returnDate = QDate::fromString(queryData.value(2).toString(), "yyyy-MM-dd");
        QDate currentDate = QDate::currentDate();
        if (currentDate > returnDate){
            QDate temp = returnDate;
            int overDays = 0;
            int diff = returnDate.daysTo(currentDate);
            while (overDays < diff){
                temp = temp.addDays(1);
                int dow = temp.dayOfWeek();
                if (dow != 6 && dow != 7){
                    overDays++;
                }
            }

            fine = overDays * 0.5;
            ui->label_FineDetail->setText(QString("Fine: $%1").arg(fine, 0, 'f', 2));
        } else {
            fine = 0;
            ui->label_FineDetail->setText(QString("Fine: $0"));
        }
    } else {                                 // Cannot renew due to max renew reached
        forceReturn = true;

        ui->stackedWidget->setCurrentIndex(3);
    }
}


void BookRenewDialog::on_pushButton_Cancel_clicked()
{
    this->close();
}


void BookRenewDialog::on_pushButton_Renew_clicked()
{
    if (fine == 0){
        ui->stackedWidget->setCurrentIndex(4);
        renewToTable();
        showCountDown();
    } else {
        ui->stackedWidget->setCurrentIndex(2);
        showPaymentQRCode();
    }
}


void BookRenewDialog::showCountDown()
{
    int *counter = new int(10);
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [=](){
        ui->label_countDown->setText(QString("You have renewed this book.\n"
                                             "\n"
                                             "Closing in %1 seconds...").arg(*counter));
        (*counter)--;

        if (*counter < 0){
            timer->stop();
            this->close();
        }
    });

    timer->start(1000);
}


void BookRenewDialog::on_pushButton_Paid_clicked()
{
    if (forceReturn){
        returnTheBook();
        ui->stackedWidget->setCurrentIndex(5);
        showReturnCountDown();
    } else {
        ui->stackedWidget->setCurrentIndex(4);
        renewToTable();
        showCountDown();
    }
}


void BookRenewDialog::renewToTable()
{
    QSqlDatabase dataBase = QSqlDatabase::database("DBConnection");       // use existing connection to database

    if(!dataBase.open()){
        qDebug() << "Database open Error" << dataBase.lastError().text();
        return;
    }

    QSqlQuery queryUser(dataBase);
    queryUser.prepare("UPDATE users "
                      "SET total_bred = total_bred + 1 "
                      "WHERE userid = :u;");
    queryUser.bindValue(":u", QString::fromStdString(currentUserID));
    queryUser.exec();

    QSqlQuery queryData(dataBase);
    queryData.prepare("UPDATE metadata "
                      "SET return_date = :returnDate, "
                      "    total_borrowed = total_borrowed + 1 "
                      "WHERE bookcode = :c;");
    queryData.bindValue(":return_date", newReturnDate);
    queryData.bindValue(":c", selectedBookCode);
    queryData.exec();

    QSqlQuery queryLog(dataBase);
    queryLog.prepare("UPDATE borrow_log "
                     "SET plan_return_date = :newReturnDate, "
                     "    fine = fine + :fine, "
                     "    renew_time = renew_time + 1 "
                     "WHERE userid = :user AND status = 'Borrowed';");
    queryLog.bindValue(":newReturnDate", newReturnDate);
    queryLog.bindValue(":user", QString::fromStdString(currentUserID));
    queryLog.exec();
}


void BookRenewDialog::on_pushButton_ForceReturnBook_clicked()
{
    QSqlDatabase dataBase = QSqlDatabase::database("DBConnection");       // use existing connection to database

    if(!dataBase.open()){
        qDebug() << "Database open Error" << dataBase.lastError().text();
        return;
    }

    QSqlQuery queryData(dataBase);
    queryData.prepare("SELECT return_date "
                      "FROM metadata "
                      "WHERE bookcode = :bkcode "
                      "LIMIT 1");
    queryData.bindValue(":bkcode", selectedBookCode);
    queryData.exec();
    queryData.next();

    QDate returnDate = QDate::fromString(queryData.value(0).toString(), "yyyy-MM-dd");
    QDate currentDate = QDate::currentDate();
    if (currentDate > returnDate){
        QDate temp = returnDate;
        int overDays = 0;
        int diff = returnDate.daysTo(currentDate);
        while (overDays < diff){
            temp = temp.addDays(1);
            int dow = temp.dayOfWeek();
            if (dow != 6 && dow != 7){
                overDays++;
            }
        }

        fine = overDays * 0.5;
        ui->stackedWidget->setCurrentIndex(2);
        showPaymentQRCode();
        ui->label_ScanHere->setText(QString("Scan the QRCode to pay. The fine will be $%1.").arg(fine, 0, 'f', 2));
    } else {
        fine = 0;
        returnTheBook();
        ui->stackedWidget->setCurrentIndex(5);
        showReturnCountDown();
    }
}


void BookRenewDialog::returnTheBook()
{
    QSqlDatabase dataBase = QSqlDatabase::database("DBConnection");

    if(!dataBase.open()){
        qDebug() << "Database open Error" << dataBase.lastError().text();
        return;
    }

    QSqlQuery queryLog(dataBase);
    queryLog.prepare("UPDATE borrow_log "
                     "SET act_return_date = :currentDate, "
                     "    status = 'Returned', "
                     "    fine = fine + :fine "
                     "WHERE bookcode = :c AND status = 'Borrowed';");
    QString s_today = QDate::currentDate().toString("yyyy-MM-dd");
    queryLog.bindValue(":currentDate", s_today);
    queryLog.bindValue(":fine", QString::number(fine, 'f', 2));
    queryLog.bindValue(":c", selectedBookCode);
    queryLog.exec();

    QSqlQuery queryData(dataBase);
    queryData.prepare("UPDATE metadata "
                      "SET status = 'in display', "
                      "    br_id = '', "
                      "    br_date = '', "
                      "    return_date = '' "
                      "WHERE bookcode = :c;");
    queryData.bindValue(":c", selectedBookCode);
    queryData.exec();

    QSqlQuery queryUser(dataBase);
    queryUser.prepare("UPDATE users "
                      "SET current_br = current_br - 1 "
                      "WHERE userid = :u;");
    queryUser.bindValue(":u", QString::fromStdString(currentUserID));
    queryUser.exec();
}


void BookRenewDialog::showReturnCountDown()
{
    int *counter = new int(10);
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [=](){
        ui->label_CountDownReturn->setText(QString("You have returned this book.\n"
                                             "\n"
                                             "Closing in %1 seconds...").arg(*counter));
        (*counter)--;

        if (*counter < 0){
            timer->stop();
            this->close();
        }
    });

    timer->start(1000);
}

