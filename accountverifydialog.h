#ifndef ACCOUNTVERIFYDIALOG_H
#define ACCOUNTVERIFYDIALOG_H

#include <QDialog>

namespace Ui {
class AccountVerifyDialog;
}

class AccountVerifyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AccountVerifyDialog(QWidget *parent = nullptr);
    ~AccountVerifyDialog();

private:
    Ui::AccountVerifyDialog *ui;
};

#endif // ACCOUNTVERIFYDIALOG_H
