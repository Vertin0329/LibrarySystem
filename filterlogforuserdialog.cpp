#include "filterlogforuserdialog.h"
#include "ui_filterlogforuserdialog.h"
#include "bookwindow_student.h"

FilterLogForUserDialog::FilterLogForUserDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FilterLogForUserDialog)
{
    ui->setupUi(this);
}

FilterLogForUserDialog::~FilterLogForUserDialog()
{
    delete ui;
}


void FilterLogForUserDialog::on_buttonBox_accepted()
{
    filterLogQuery = "SELECT * FROM borrow_log WHERE userid = :id";

    if (ui->radioButton_Borrowing->isChecked()){
        filterLogQuery += " AND status = 'Borrowed'";
    } else if (ui->radioButton_Returned->isChecked()){
        filterLogQuery += " AND status = 'Returned'";
    }

    if (ui->radioButton_NoFine->isChecked()){
        filterLogQuery += " AND fine == '0'";
    } else if (ui->radioButton_Fined->isChecked()){
        filterLogQuery += " AND fine != '0'";
    }

    BookWindow_Student *parentWindow = qobject_cast<BookWindow_Student*>(parent());
    parentWindow->readFileAndDisplaySelfBorrowLog();
}

