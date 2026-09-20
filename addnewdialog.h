#ifndef ADDNEWDIALOG_H
#define ADDNEWDIALOG_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QRandomGenerator>

namespace Ui {
class AddNewDialog;
}

class AddNewDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddNewDialog(QWidget *parent = nullptr);
    ~AddNewDialog();

    void generateUserID();

    QString generatePassword(int length);

private slots:
    void on_radioButton_AddBook_clicked();

    void on_radioButton_AddUser_clicked();

    void on_pushButton_clicked();

private:
    Ui::AddNewDialog *ui;
};

inline QString userID;

inline QString password;

inline QString newAccType;

#endif // ADDNEWDIALOG_H
