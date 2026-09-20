#include "deletebookdialog.h"
#include "ui_deletebookdialog.h"
#include "bookwindow_librarian.h"
#include "bookwindow_student.h"

DeleteBookDialog::DeleteBookDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DeleteBookDialog)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    QPixmap warningIcon(":/img/img/png-clipart-symbol-computer-icons-unicode-notice-miscellaneous-angle.png");
    ui->label_WarningIcon->setPixmap(
        warningIcon.scaled(
            20,
            20,
            Qt::KeepAspectRatio,
            Qt::FastTransformation)
        );
}

DeleteBookDialog::~DeleteBookDialog()
{
    delete ui;
}


void DeleteBookDialog::on_pushButton_Cancel_clicked()
{
    this->close();
}


void DeleteBookDialog::on_pushButton_Confirm_2_clicked()
{
    QSqlDatabase dataBase = QSqlDatabase::database("DBConnection");
    dataBase.open();

    QSqlQuery queryDelete(dataBase);
    queryDelete.prepare("DELETE FROM metadata WHERE bookcode = :bkcode");
    queryDelete.bindValue(":bkcode", selectedBookCode);
    queryDelete.exec();

    ui->stackedWidget->setCurrentIndex(1);

    BookWindow_Librarian *parentWindow = qobject_cast<BookWindow_Librarian*>(parent());
    parentWindow->readFileAndDisplayBookList();

    QTimer::singleShot(5000, this, &DeleteBookDialog::close);
}

