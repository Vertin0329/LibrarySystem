#include "logoutconfirmdialog.h"
#include "ui_logoutconfirmdialog.h"
#include "bookwindow_librarian.h"
#include "loginwindow.h"

LogoutConfirmDialog::LogoutConfirmDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LogoutConfirmDialog)
{
    ui->setupUi(this);

    QPixmap warningIcon(":/img/img/png-clipart-symbol-computer-icons-unicode-notice-miscellaneous-angle.png");
    ui->label_WarningIcon->setPixmap(
        warningIcon.scaled(
            20,
            20,
            Qt::KeepAspectRatio,
            Qt::FastTransformation)
        );
}

LogoutConfirmDialog::~LogoutConfirmDialog()
{
    delete ui;
}


void LogoutConfirmDialog::on_buttonBox_accepted()
{
    if (accType == "admin"){
        BookWindow_Librarian *parentWindow = qobject_cast<BookWindow_Librarian*>(parent());
        parentWindow->logOut();
    } else {
        BookWindow_Student *parentWindow = qobject_cast<BookWindow_Student*>(parent());
        parentWindow->logOut();
    }
}


void LogoutConfirmDialog::on_buttonBox_rejected()
{
    return;
}

