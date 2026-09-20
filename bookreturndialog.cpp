#include "bookreturndialog.h"
#include "ui_bookreturndialog.h"
#include "bookwindow_student.h"
#include "loginwindow.h"
#include "qrcodegenerator.h"

BookReturnDialog::BookReturnDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BookReturnDialog)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->label_countDown->setText("");
}


BookReturnDialog::~BookReturnDialog()
{
    delete ui;
}


void BookReturnDialog::on_pushButton_Accept_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

    QSqlDatabase dataBase = QSqlDatabase::database("DBConnection");

    if(!dataBase.open()){
        qDebug() << "Database open Error" << dataBase.lastError().text();
        return;
    }

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
}


void BookReturnDialog::on_pushButton_Return_clicked()
{
    if (fine == 0){
        returnBook();
        ui->stackedWidget->setCurrentIndex(3);
        showCountDown();
    } else {
        ui->stackedWidget->setCurrentIndex(2);
        showPaymentQRCode();
    }
}


void BookReturnDialog::on_pushButton_Cancel_clicked()
{
    this->close();
}


void BookReturnDialog::showCountDown()
{
    int *counter = new int(10);
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [=](){
        ui->label_countDown->setText(QString("You have returned this book.\n"
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


void BookReturnDialog::showPaymentQRCode()
{
    QString url = QString("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
    QImage qrCode = generateQR(url);

    ui->label_QRCode->setPixmap(QPixmap::fromImage(qrCode).scaled(250, 250, Qt::KeepAspectRatio));
}


void BookReturnDialog::on_pushButton_paid_clicked()
{
    returnBook();
    ui->stackedWidget->setCurrentIndex(3);
    showCountDown();
}


void BookReturnDialog::returnBook()
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

