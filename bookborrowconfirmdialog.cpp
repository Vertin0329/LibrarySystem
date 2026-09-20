#include "bookborrowconfirmdialog.h"
#include "ui_bookborrowconfirmdialog.h"

#include "loginwindow.h"
#include "bookwindow_student.h"

BookBorrowConfirmDialog::BookBorrowConfirmDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BookBorrowConfirmDialog)
{
    ui->setupUi(this);
    ui->label->setText("Confirm borrow this book?");
    ui->stackedWidget->setCurrentIndex(0);
}

BookBorrowConfirmDialog::~BookBorrowConfirmDialog()
{
    delete ui;
}


void BookBorrowConfirmDialog::on_pushButton_clicked()
{
    QSqlDatabase dataBase = QSqlDatabase::database("DBConnection");       // use existing connection to database

    if(!dataBase.open()){
        qDebug() << "Database open Error" << dataBase.lastError().text();
        return;
    }

    QSqlQuery queryUser(dataBase);
    queryUser.prepare("UPDATE users "
                      "SET current_br = current_br + 1, "
                      "total_bred = total_bred + 1 "
                      "WHERE userid = :u;");
    queryUser.bindValue(":u", QString::fromStdString(currentUserID));
    queryUser.exec();

    QSqlQuery queryData(dataBase);
    queryData.prepare("UPDATE metadata "
                      "SET status = 'loan', "
                      "    br_id = :u, "
                      "    br_date = :currentDate, "
                      "    return_date = :returnDate, "
                      "    total_borrowed = total_borrowed + 1 "
                      "WHERE bookcode = :c;");
    queryData.bindValue(":u", QString::fromStdString(currentUserID));
    QString s_today = QDate::currentDate().toString("yyyy-MM-dd");
    queryData.bindValue(":currentDate", s_today);
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
    QString returnDate = result.toString("yyyy-MM-dd");
    queryData.bindValue(":returnDate", returnDate);
    queryData.bindValue(":c", selectedBookCode);
    queryData.exec();

    QSqlQuery queryLog(dataBase);
    queryLog.prepare("INSERT INTO borrow_log (userid, bookcode, borrow_date, plan_return_date, act_return_date, status, fine) "
                     "VALUES (:userid, :bookcode, :borrow_date, :return_date, '', 'Borrowed', '0')");
    queryLog.bindValue(":userid", QString::fromStdString(currentUserID));
    queryLog.bindValue(":bookcode", selectedBookCode);
    queryLog.bindValue(":borrow_date", s_today);
    queryLog.bindValue(":return_date", returnDate);
    queryLog.exec();

    ui->stackedWidget->setCurrentIndex(1);

    int *counter = new int(10);
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [=](){
        ui->label_countDown->setText(QString("You have borrowed this book.\n"
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


void BookBorrowConfirmDialog::on_pushButton_2_clicked()
{
    this->close();
}

