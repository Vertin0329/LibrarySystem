#ifndef LOGOUTCONFIRMDIALOG_H
#define LOGOUTCONFIRMDIALOG_H

#include <QDialog>

namespace Ui {
class LogoutConfirmDialog;
}

class LogoutConfirmDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LogoutConfirmDialog(QWidget *parent = nullptr);
    ~LogoutConfirmDialog();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::LogoutConfirmDialog *ui;
};

#endif // LOGOUTCONFIRMDIALOG_H
