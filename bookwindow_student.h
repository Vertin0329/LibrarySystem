#ifndef BOOKWINDOW_STUDENT_H
#define BOOKWINDOW_STUDENT_H

#include <QMainWindow>
#include <QTimer>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlquery>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QFile>
#include <QDebug>
#include <QTextStream>
#include <QStringList>
#include <QString>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QPixmap>
#include <QDesktopServices>
#include <QPushButton>
#include <QDateTime>
#include <QStandardPaths>
#include <QDir>
#include <QStack>

namespace Ui {
class BookWindow_Student;
}

class LoginWindow;

class BookWindow_Student : public QMainWindow
{
    Q_OBJECT

public:
    explicit BookWindow_Student(QWidget *parent = nullptr);
    ~BookWindow_Student();

    void readFileAndDisplayTable();

    void readAndDisplayConfig();

    void resetEditConfigPageLabel();

    void logOut();

    void saveCurrentIndex();

    void readFileAndDisplayStatus();

private:
    Ui::BookWindow_Student *ui;

    void readFileAndDisplayRank();

    QTimer *timer;

    LoginWindow *loginWindow = nullptr;

    QStack<int> pageHistory;

    QStack<int> nextPage;

protected:
    void closeEvent(QCloseEvent *c_event) override;

private slots:
    void on_pushButton_navtosearch_clicked();

    void on_pushButton_navtomain_clicked();

    void on_pushButton_navtoaboutus_clicked();

    void on_tableWidget_cellClicked(int row);

    void on_pushButton_toWeb_clicked();

    void on_pushButton_borrow_clicked();

    void on_pushButton_filter_clicked();

    void timeFunction();

    void on_pushButton_backToSearch_clicked();

    void on_pushButton_return_clicked();

    void on_pushButton_renew_clicked();

    void on_lineEdit_searchinput_returnPressed();

    void on_comboBox_searchby_currentIndexChanged(int index);

    void on_pushButton_EditProfile_clicked();

    void on_pushButton_ChangeConfig_clicked();

    void on_pushButton_LogOut_clicked();

    void on_pushButton_PreviousPage_clicked();

    void on_pushButton_NextPage_clicked();

    void on_pushButton_Reload_clicked();

    void on_tableWidget_Status_cellClicked(int row);
    void on_pushButton_ShowHidePW_pressed();
    void on_pushButton_ShowHidePW_released();
    void on_pushButton_ShowHidePW2_pressed();
    void on_pushButton_ShowHidePW2_released();
    void on_pushButton_ShowHidePW3_pressed();
    void on_pushButton_ShowHidePW3_released();
};

inline int bookRow;

inline QString selectedBookCode;

inline int currentBkBorrowed;

inline QString f_sql_user_data = "SELECT * FROM metadata WHERE bookcode IS NOT NULL AND bookcode != ''";

#endif // BOOKWINDOW_STUDENT_H
