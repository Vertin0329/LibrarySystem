#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include "bookwindow_librarian.h"
#include "bookwindow_student.h"

#include <QMainWindow>
#include <QtGui>
#include <QSqlDatabase>
#include <QSqlError>

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginWindow;
}
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow() override;

private slots:
    void on_pushButton_Forgotpw_clicked();

    void on_pushButton_Login_clicked();

    void on_lineEdit_Password_returnPressed();

    void on_pushButton_pressed();

    void on_pushButton_released();

private:
    Ui::LoginWindow *ui;

    BookWindow_Student *studentWindow = nullptr;

    BookWindow_Librarian *librarianWindow = nullptr;

protected:
    void closeEvent(QCloseEvent *c_event) override;
};

// Below is global variable for multi files

inline std::string currentUserID;

inline std::string currentUserName;

inline QString accType;

#endif // LOGINWINDOW_H
