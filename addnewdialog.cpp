#include "addnewdialog.h"
#include "ui_addnewdialog.h"
#include "bookwindow_librarian.h"

AddNewDialog::AddNewDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddNewDialog)
{
    ui->setupUi(this);
    ui->stackedWidget_AddNew->setCurrentIndex(0);
}

AddNewDialog::~AddNewDialog()
{
    delete ui;
}


void AddNewDialog::generateUserID()
{
    int num = QRandomGenerator::global()->bounded(1, 1000000);

    QSqlDatabase dataBase = QSqlDatabase::database("DBConnection");
    QSqlQuery queryCheck(dataBase);
    queryCheck.prepare("SELECT COUNT(*) FROM users WHERE userid = :id");
    queryCheck.bindValue(":id", userID + QString::number(num));
    queryCheck.exec();
    queryCheck.next();
    int repeat = queryCheck.value(0).toInt();
    if (repeat > 0){
        generateUserID();
    } else {
        userID += QString::number(num);
        password = generatePassword(12);
    }
}


QString AddNewDialog::generatePassword(int length)
{
    const QString chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                          "abcdefghijklmnopqrstuvwxyz"
                          "0123456789"
                          "%@#?!";

    QString result;
    result.reserve(length);

    for (int i = 0; i < length; ++i) {
        int index = QRandomGenerator::global()->bounded(chars.length());
        result.append(chars.at(index));
    }

    return result;
}


void AddNewDialog::on_radioButton_AddBook_clicked()
{
    ui->stackedWidget_AddNew->setCurrentIndex(0);
}


void AddNewDialog::on_radioButton_AddUser_clicked()
{
    ui->stackedWidget_AddNew->setCurrentIndex(1);
}


void AddNewDialog::on_pushButton_clicked()
{
    int currentIdx = ui->stackedWidget_AddNew->currentIndex();

    if (currentIdx == 0){     // Add new book
        int languageIndex = ui->comboBox_Language->currentIndex();
        QString lan;
        QString lan_code;

        switch (languageIndex){
            default:
                lan = ui->comboBox_Language->currentText();
                lan_code = "en";
                break;
            case 1:
                lan = ui->comboBox_Language->currentText();
                lan_code = "de";
                break;
            case 2:
                lan = ui->comboBox_Language->currentText();
                lan_code = "fr";
                break;
            case 3:
                lan = ui->comboBox_Language->currentText();
                lan_code = "nl";
                break;
            case 4:
                lan = ui->comboBox_Language->currentText();
                lan_code = "it";
                break;
            case 5:
                lan = ui->comboBox_Language->currentText();
                lan_code = "es";
                break;
            case 6:
                lan = ui->comboBox_Language->currentText();
                lan_code = "fi";
                break;
            case 7:
                lan = ui->comboBox_Language->currentText();
                lan_code = "hu";
                break;
            case 8:
                lan = ui->comboBox_Language->currentText();
                lan_code = "pt";
                break;
            case 9:
                lan = ui->comboBox_Language->currentText();
                lan_code = "eo";
                break;
            case 10:
                lan = ui->comboBox_Language->currentText();
                lan_code = "la";
                break;
            case 11:
                lan = ui->comboBox_Language->currentText();
                lan_code = "no";
                break;
            case 12:
                lan = ui->comboBox_Language->currentText();
                lan_code = "af";
                break;
        }

        QSqlDatabase dataBase = QSqlDatabase::database("DBConnection");
        QSqlQuery queryAddBook(dataBase);
        queryAddBook.prepare("INSERT INTO metadata (title, author, language_code, language, issued_date, primary_subject, locc_classification, locc_area, genre, bookshelf, url, status) "
                             "VALUES (:title, :author, :lan_code, :lan, :date, :subject, :locc_class, :locc_area, :genre, :bookshelf, :url, 'in display')");
        queryAddBook.bindValue(":title", ui->lineEdit_Title->text().trimmed());
        queryAddBook.bindValue(":author", ui->lineEdit_Author->text().trimmed());
        queryAddBook.bindValue(":lan_code", lan_code);
        queryAddBook.bindValue(":lan", lan);
        queryAddBook.bindValue(":date", ui->lineEdit_IssueDate->text().trimmed());
        queryAddBook.bindValue(":subject", ui->lineEdit_PrimartSubject->text().trimmed());
        queryAddBook.bindValue(":locc_class", ui->lineEdit_LoccClassification->text().trimmed());
        queryAddBook.bindValue(":locc_area", ui->lineEdit_LoccArea->text().trimmed());
        queryAddBook.bindValue(":genre", ui->comboBox_Genre->currentText());
        queryAddBook.bindValue(":bookshelf", ui->lineEdit_Bookshelf->text().trimmed());
        queryAddBook.bindValue(":url", ui->lineEdit_URL->text().trimmed());
        queryAddBook.exec();

        QSqlQuery queryLast("SELECT last_insert_rowid()");
        queryLast.next();
        int rowid = queryLast.value(0).toInt();
        QString up_lan_code = lan_code.toUpper();
        QString date = ui->lineEdit_IssueDate->text().trimmed().left(4);
        QString genre = ui->comboBox_Genre->currentText().left(3).toUpper();
        QString bookcode = up_lan_code + "-" + date + "-" + genre + "-" + QString("%1").arg(rowid, 5, 10, QChar('0'));

        QSqlQuery queryUpdate(dataBase);
        queryUpdate.prepare("UPDATE metadata SET bookcode = :bkcode WHERE rowid = :rowid");
        queryUpdate.bindValue(":bkcode", bookcode);
        queryUpdate.bindValue(":rowid", rowid);
        queryUpdate.exec();

        BookWindow_Librarian *parentWindow = qobject_cast<BookWindow_Librarian*>(parent());
        parentWindow->readFileAndDisplayBookList();
        close();
    } else {        // Add new account
        int accTypeIdx = ui->comboBox_AccType->currentIndex();

        if (accTypeIdx == 0){
            userID += "user_";
            newAccType = "user";
            generateUserID();
        } else {
            userID += "admin_";
            newAccType = "admin";
            generateUserID();
        }

        QSqlDatabase dataBase = QSqlDatabase::database("DBConnection");
        QSqlQuery queryUser(dataBase);
        queryUser.prepare("INSERT INTO users (userid, password, acc_type, name) "
                          "VALUES (:id, :pw, :acc_type, :name)");
        queryUser.bindValue(":id", userID);
        queryUser.bindValue(":pw", password);
        queryUser.bindValue(":acc_type", newAccType);
        queryUser.bindValue(":name", ui->lineEdit_UserName->text().trimmed());
        queryUser.exec();

        ui->stackedWidget_AddNew->setCurrentIndex(2);
        ui->pushButton->hide();
        ui->radioButton_AddBook->hide();
        ui->radioButton_AddUser->hide();
        ui->label_AccData->setText(QString("Account ID: %1\n\n"
                                           "Password: %2\n\n"
                                           "Account Type: %3").arg(userID)
                                                              .arg(password)
                                                              .arg(newAccType));
    }
}

