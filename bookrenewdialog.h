#ifndef BOOKRENEWDIALOG_H
#define BOOKRENEWDIALOG_H

#include <QDialog>
#include <QDate>
#include <QImage>
#include <QPixmap>
#include <QSqlQuery>

namespace Ui {
class BookRenewDialog;
}

class BookRenewDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BookRenewDialog(QWidget *parent = nullptr);
    ~BookRenewDialog();

private slots:
    void on_pushButton_Accept_clicked();

    void on_pushButton_Cancel_clicked();

    void on_pushButton_Renew_clicked();

    void showCountDown();

    void showPaymentQRCode();

    void on_pushButton_Paid_clicked();

    void renewToTable();

    void on_pushButton_ForceReturnBook_clicked();

    void returnTheBook();

    void showReturnCountDown();

private:
    Ui::BookRenewDialog *ui;
};

inline QString newReturnDate;

inline bool forceReturn = false;

#endif // BOOKRENEWDIALOG_H
