#ifndef ACCOUNTVERIFYDIALOG_H
#define ACCOUNTVERIFYDIALOG_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class AccountVerifyDialog;
}

class AccountVerifyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AccountVerifyDialog(QWidget *parent = nullptr);
    ~AccountVerifyDialog();

private slots:
    void on_pushButton_Verify_clicked();

private:
    Ui::AccountVerifyDialog *ui;
};

#endif // ACCOUNTVERIFYDIALOG_H
