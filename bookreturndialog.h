#ifndef BOOKRETURNDIALOG_H
#define BOOKRETURNDIALOG_H

#include <QDialog>
#include <QDate>
#include <QImage>
#include <QPixmap>

namespace Ui {
class BookReturnDialog;
}

class BookReturnDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BookReturnDialog(QWidget *parent = nullptr);
    ~BookReturnDialog();

private slots:

    void on_pushButton_Return_clicked();

    void on_pushButton_Accept_clicked();

    void on_pushButton_Cancel_clicked();

    void showCountDown();

    void showPaymentQRCode();

    void on_pushButton_paid_clicked();

    void returnBook();

private:
    Ui::BookReturnDialog *ui;
};

inline float fine;

#endif // BOOKRETURNDIALOG_H
