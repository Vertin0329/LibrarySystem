#include "accountverifydialog.h"
#include "ui_accountverifydialog.h"

AccountVerifyDialog::AccountVerifyDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AccountVerifyDialog)
{
    ui->setupUi(this);
}

AccountVerifyDialog::~AccountVerifyDialog()
{
    delete ui;
}
