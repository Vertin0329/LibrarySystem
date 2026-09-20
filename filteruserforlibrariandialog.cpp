#include "filteruserforlibrariandialog.h"
#include "ui_filteruserforlibrariandialog.h"
#include "bookwindow_librarian.h"

FilterUserForLibrarianDialog::FilterUserForLibrarianDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FilterUserForLibrarianDialog)
{
    ui->setupUi(this);
}

FilterUserForLibrarianDialog::~FilterUserForLibrarianDialog()
{
    delete ui;
}

void FilterUserForLibrarianDialog::on_buttonBox_clicked(QAbstractButton *button)
{
    if (QDialogButtonBox::Ok){
        sql_librarian_user = "SELECT * FROM users WHERE userid IS NOT NULL AND userid != ''";

        if (ui->radioButton_Admin->isChecked()){
            sql_librarian_user += " AND acc_type = 'admin'";
        } else if (ui->radioButton_User->isChecked()){
            sql_librarian_user += " AND acc_type = 'user'";
        }

        BookWindow_Librarian *parentWindow = qobject_cast<BookWindow_Librarian*>(parent());
        f_sql_librarian_user = sql_librarian_user;
        parentWindow->readFileAndDisplayUserList();
        this->close();
    } else {
        return;
    }
}

