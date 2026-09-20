#ifndef DELETEBOOKDIALOG_H
#define DELETEBOOKDIALOG_H

#include <QDialog>
#include <QAbstractButton>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class DeleteBookDialog;
}

class DeleteBookDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteBookDialog(QWidget *parent = nullptr);
    ~DeleteBookDialog();

private slots:

    void on_pushButton_Cancel_clicked();

    void on_pushButton_Confirm_2_clicked();

private:
    Ui::DeleteBookDialog *ui;
};

#endif // DELETEBOOKDIALOG_H
