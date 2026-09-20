#ifndef BOOKWINDOW_LIBRARIAN_H
#define BOOKWINDOW_LIBRARIAN_H

#include <QMainWindow>
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
#include <QStack>

namespace Ui {
class BookWindow_Librarian;
}

class LoginWindow;

class BookWindow_Librarian : public QMainWindow
{
    Q_OBJECT

public:
    explicit BookWindow_Librarian(QWidget *parent = nullptr);

    ~BookWindow_Librarian();

    void readFileAndDisplayBookList();

    void readFileAndDisplayUserList();

    void logOut();

    void readFileAndDisplayBorrowLog();

    void saveCurrentIndex();

private:
    Ui::BookWindow_Librarian *ui;

    QTimer *timer;

    LoginWindow *loginWindow = nullptr;

    QPoint dragPosition;

    QStack<int> pageHistory;

    QStack<int> nextPage;

protected:
    void closeEvent(QCloseEvent *c_event) override;

    void mousePressEvent(QMouseEvent *event) override;

    void mouseMoveEvent(QMouseEvent *event) override;

    void mouseReleaseEvent(QMouseEvent *event) override;

private slots:
    void timeFunction();

    void on_pushButton_NavToBookList_clicked();

    void on_pushButton_AddNew_clicked();

    void on_pushButton_NavToUserList_clicked();

    void on_pushButton_filter_user_clicked();

    void on_comboBox_searchby_book_currentIndexChanged(int index);

    void on_comboBox_searchby_user_currentIndexChanged(int index);

    void on_lineEdit_searchinput_user_returnPressed();

    void on_pushButton_filter_book_clicked();

    void on_lineEdit_searchinput_book_returnPressed();

    void readFileAndDisplayRank();

    void on_pushButton_DeleteBook_clicked();

    void on_pushButton_LogOut_clicked();

    void on_pushButton_NavToBorrowLog_clicked();

    void on_pushButton_PreviousPage_clicked();

    void on_pushButton_NextPage_clicked();

    void on_pushButton_Reload_clicked();

    void on_tableWidget_BookList_cellClicked(int row);
};

inline int bookBorrowed;

inline int selectedBookRow;

inline QString selectedUserID;

inline QString f_sql_librarian_user = "SELECT * FROM users WHERE userid IS NOT NULL AND userid != ''";

inline QString f_sql_librarian_data = "SELECT * FROM metadata WHERE bookcode IS NOT NULL AND bookcode != ''";

inline bool isDragging;

#endif // BOOKWINDOW_LIBRARIAN_H
