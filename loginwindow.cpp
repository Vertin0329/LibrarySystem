#include "loginwindow.h"
#include "ui_loginwindow.h"

#include <QFile>
#include <string>

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::pressed, this, &LoginWindow::on_pushButton_pressed);

    connect(ui->pushButton, &QPushButton::released, this, &LoginWindow::on_pushButton_released);

    QPixmap defaultPixmap(":/img/img/hidepw.png");
    ui->pushButton->setIcon(QIcon(defaultPixmap));
    ui->pushButton->setIconSize(QSize(56,27));
    ui->lineEdit_Username->setStyleSheet("border:2px solid #ca5cdd; border-radius:8px; padding:5px;");
    ui->lineEdit_Password->setStyleSheet("border:2px solid #ca5cdd; border-radius:8px; padding:5px;");
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButton_Forgotpw_clicked()
{

}

void LoginWindow::on_pushButton_Login_clicked()
{
    QString q_username = ui->lineEdit_Username->text();
    std::string username = q_username.toStdString();    // convert from qstring to std string
    QString q_password = ui->lineEdit_Password->text();
    std::string password = q_password.toStdString();

    QString dbPath = QCoreApplication::applicationDirPath() + "/data.sqlite";

    QSqlDatabase dataBase;
    if (QSqlDatabase::contains("DBConnection")) {
        dataBase = QSqlDatabase::database("DBConnection");
    } else {
        dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
        dataBase.setDatabaseName(dbPath);
    }

    if(!dataBase.open()){
        qDebug() << "Database open Error" << dataBase.lastError().text();
        return;
    }

    // build index for userFile for easier access

    if (username == ""){
        ui->label_LoginStatus->setStyleSheet("color: red;");
        ui->label_LoginStatus->setText("Please enter your username");
        ui->lineEdit_Username->setStyleSheet("border:2px solid #ff0f0f; border-radius:8px; padding:5px;");
        ui->lineEdit_Password->setStyleSheet("border:2px solid #ca5cdd; border-radius:8px; padding:5px;");
    } else if (password == ""){
        ui->label_LoginStatus->setStyleSheet("color: red;");
        ui->label_LoginStatus->setText("Please enter your password");
        ui->lineEdit_Username->setStyleSheet("border:2px solid #ca5cdd; border-radius:8px; padding:5px;");
        ui->lineEdit_Password->setStyleSheet("border:2px solid #ff0f0f; border-radius:8px; padding:5px;");
    } else if (username == "" && password == "") {
        ui->label_LoginStatus->setStyleSheet("color: red;");
        ui->label_LoginStatus->setText("Please enter your username & password");
        ui->lineEdit_Username->setStyleSheet("border:2px solid #ff0f0f; border-radius:8px; padding:5px;");
        ui->lineEdit_Password->setStyleSheet("border:2px solid #ff0f0f; border-radius:8px; padding:5px;");
    } else if (username == "username" && password == "password"){
        ui->label_LoginStatus->setStyleSheet("color: red;");
        ui->label_LoginStatus->setText("Warning: User or Password incorrect");
        return;
    } else {

        // User have input both lineEdit

        QSqlQuery query(dataBase);
        query.prepare("SELECT userid, password, name, current_br, acc_type FROM users WHERE userid = :u LIMIT 1");
        query.bindValue(":u", q_username);

        if(query.exec() && query.next()){
            QString pwInDb = query.value(1).toString();

            if (pwInDb == q_password) {
                currentUserID = username;
                currentUserName = query.value(2).toString().toStdString();
                currentBkBorrowed = query.value(3).toInt();
                accType = query.value(4).toString();

                if (accType == "user"){
                    studentWindow = new BookWindow_Student();
                    studentWindow->setAttribute(Qt::WA_DeleteOnClose);
                    studentWindow->show();                                // show student book window
                } else {
                    librarianWindow = new BookWindow_Librarian();
                    librarianWindow->setAttribute(Qt::WA_DeleteOnClose);
                    librarianWindow->show();
                }
                this->setAttribute(Qt::WA_DeleteOnClose);
                this->deleteLater();
            } else {
                ui->label_LoginStatus->setStyleSheet("color: red;");
                ui->label_LoginStatus->setText("Warning: User or Password incorrect");
                return;
            }
        } else {
            ui->label_LoginStatus->setStyleSheet("color: red;");
            ui->label_LoginStatus->setText("Warning: User or Password incorrect");
            return;
        }
    }
}


void LoginWindow::on_lineEdit_Password_returnPressed()
{
    on_pushButton_Login_clicked();
}


void LoginWindow::closeEvent(QCloseEvent *event)
{
    event->accept();
    QApplication::quit();
}


void LoginWindow::on_pushButton_pressed()
{
    QPixmap pixmap(":/img/img/showpw.png");
    ui->lineEdit_Password->setEchoMode(QLineEdit::Normal);
    ui->pushButton->setIcon(QIcon(pixmap));
    ui->pushButton->setIconSize(QSize(56,27));
}


void LoginWindow::on_pushButton_released()
{
    QPixmap pixmap(":/img/img/hidepw.png");
    ui->lineEdit_Password->setEchoMode(QLineEdit::Password);
    ui->pushButton->setIcon(QIcon(pixmap));
    ui->pushButton->setIconSize(QSize(56,27));
}

