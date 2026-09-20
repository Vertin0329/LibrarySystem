#ifndef BOOKBORROWCONFIRMDIALOG_H
#define BOOKBORROWCONFIRMDIALOG_H

#include <QDialog>
#include <QAbstractButton>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDate>

namespace Ui {
class BookBorrowConfirmDialog;
}

class BookBorrowConfirmDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BookBorrowConfirmDialog(QWidget *parent = nullptr);
    ~BookBorrowConfirmDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::BookBorrowConfirmDialog *ui;

};

#endif // BOOKBORROWCONFIRMDIALOG_H
