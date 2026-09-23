#include "accountverifydialog.h"
#include "ui_accountverifydialog.h"

AccountVerifyDialog::AccountVerifyDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AccountVerifyDialog)
{
    ui->setupUi(this);

    ui->label_Warning->setText("");
}


AccountVerifyDialog::~AccountVerifyDialog()
{
    delete ui;
}


void AccountVerifyDialog::on_pushButton_Verify_clicked()
{
    QString q_name = ui->lineEdit_Name->text();
    QString q_userid = ui->lineEdit_UserID->text();

    QSqlDatabase dataBase = QSqlDatabase::database("DBConnection");
    dataBase.open();

    if (ui->lineEdit_Name->text().isEmpty() or ui->lineEdit_UserID->text().isEmpty()){
        ui->label_Warning->setText("Warning: Please enter your name and account ID");
    } else {
        QSqlQuery queryUser(dataBase);
        queryUser.prepare("SELECT userid, password, name "
                          "FROM users "
                          "WHERE userid = :id LIMIT 1");
        queryUser.bindValue(":id", ui->lineEdit_UserID->text());
        if (queryUser.exec() && queryUser.next()){
            QString idInDb = queryUser.value(0).toString();
            QString pwInDb = queryUser.value(1).toString();
            QString nameInDb = queryUser.value(2).toString();

            if (ui->lineEdit_Name->text() == nameInDb && ui->lineEdit_UserID->text() == idInDb){
                ui->stackedWidget->setCurrentIndex(1);

                ui->label_PasswordInfo->setText(QString("Your password is %1").arg(pwInDb));
            } else {
                ui->label_Warning->setText("Warning: Name or ID incorrect");
                return;
            }
        } else {
            ui->label_Warning->setText("Warning: Name or ID incorrect");
            return;
        }
    }
}

