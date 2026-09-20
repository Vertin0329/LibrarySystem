/********************************************************************************
** Form generated from reading UI file 'bookwindow_librarian.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKWINDOW_LIBRARIAN_H
#define UI_BOOKWINDOW_LIBRARIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookWindow_Librarian
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_navigationbar;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_date;
    QLabel *label_time;
    QPushButton *pushButton_NavToBookList;
    QPushButton *pushButton_NavToUserList;
    QPushButton *pushButton_NavToBorrowLog;
    QPushButton *pushButton_AddNew;
    QStackedWidget *stackedWidget;
    QWidget *page_BookList;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_searchpage;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_filter_book;
    QComboBox *comboBox_searchby_book;
    QLineEdit *lineEdit_searchinput_book;
    QVBoxLayout *verticalLayout_7;
    QTableWidget *tableWidget_BookList;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_bookImage;
    QLabel *label_discription;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_EditBook;
    QPushButton *pushButton_DeleteBook;
    QPushButton *pushButton_toWeb;
    QWidget *page_UserList;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_filter_user;
    QComboBox *comboBox_searchby_user;
    QLineEdit *lineEdit_searchinput_user;
    QTableWidget *tableWidget_UserList;
    QTableWidget *tableWidget_RankBoard;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BookWindow_Librarian)
    {
        if (BookWindow_Librarian->objectName().isEmpty())
            BookWindow_Librarian->setObjectName("BookWindow_Librarian");
        BookWindow_Librarian->resize(1539, 855);
        centralwidget = new QWidget(BookWindow_Librarian);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_navigationbar = new QGroupBox(centralwidget);
        groupBox_navigationbar->setObjectName("groupBox_navigationbar");
        groupBox_navigationbar->setStyleSheet(QString::fromUtf8("border:2px solid #702963;\n"
"border-radius: 8px;\n"
"background-color: #702963;"));
        verticalLayout_4 = new QVBoxLayout(groupBox_navigationbar);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_date = new QLabel(groupBox_navigationbar);
        label_date->setObjectName("label_date");
        label_date->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_date->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_date);

        label_time = new QLabel(groupBox_navigationbar);
        label_time->setObjectName("label_time");
        label_time->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_time->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(label_time);

        pushButton_NavToBookList = new QPushButton(groupBox_navigationbar);
        pushButton_NavToBookList->setObjectName("pushButton_NavToBookList");
        pushButton_NavToBookList->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"    text-decoration: none;\n"
"}\n"
"QPushButton:hover {\n"
"    text-decoration: underline;\n"
"}"));

        horizontalLayout->addWidget(pushButton_NavToBookList);

        pushButton_NavToUserList = new QPushButton(groupBox_navigationbar);
        pushButton_NavToUserList->setObjectName("pushButton_NavToUserList");
        pushButton_NavToUserList->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    text-decoration: none;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover {\n"
"    text-decoration: underline;\n"
"}"));

        horizontalLayout->addWidget(pushButton_NavToUserList);

        pushButton_NavToBorrowLog = new QPushButton(groupBox_navigationbar);
        pushButton_NavToBorrowLog->setObjectName("pushButton_NavToBorrowLog");
        pushButton_NavToBorrowLog->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"    text-decoration: none;\n"
"}\n"
"QPushButton:hover {\n"
"    text-decoration: underline;\n"
"}"));

        horizontalLayout->addWidget(pushButton_NavToBorrowLog);

        pushButton_AddNew = new QPushButton(groupBox_navigationbar);
        pushButton_AddNew->setObjectName("pushButton_AddNew");
        pushButton_AddNew->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"    text-decoration: none;\n"
"}\n"
"QPushButton:hover {\n"
"    text-decoration: underline;\n"
"}"));

        horizontalLayout->addWidget(pushButton_AddNew);

        horizontalLayout->setStretch(0, 4);
        horizontalLayout->setStretch(1, 4);
        horizontalLayout->setStretch(2, 5);
        horizontalLayout->setStretch(3, 5);
        horizontalLayout->setStretch(4, 5);
        horizontalLayout->setStretch(5, 5);

        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox_navigationbar);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page_BookList = new QWidget();
        page_BookList->setObjectName("page_BookList");
        verticalLayout_2 = new QVBoxLayout(page_BookList);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_searchpage = new QGroupBox(page_BookList);
        groupBox_searchpage->setObjectName("groupBox_searchpage");
        verticalLayout_6 = new QVBoxLayout(groupBox_searchpage);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_filter_book = new QPushButton(groupBox_searchpage);
        pushButton_filter_book->setObjectName("pushButton_filter_book");
        pushButton_filter_book->setMinimumSize(QSize(110, 0));
        pushButton_filter_book->setStyleSheet(QString::fromUtf8("QPushButton{ \n"
"border:2px solid #ca5cdd;\n"
" border-radius:8px;\n"
" padding:5px;\n"
" background-color:#2c3e50;\n"
" border-radius:8px;\n"
" color:white;\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_filter_book);

        comboBox_searchby_book = new QComboBox(groupBox_searchpage);
        comboBox_searchby_book->addItem(QString());
        comboBox_searchby_book->addItem(QString());
        comboBox_searchby_book->addItem(QString());
        comboBox_searchby_book->addItem(QString());
        comboBox_searchby_book->setObjectName("comboBox_searchby_book");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_searchby_book->sizePolicy().hasHeightForWidth());
        comboBox_searchby_book->setSizePolicy(sizePolicy);
        comboBox_searchby_book->setMinimumSize(QSize(110, 0));
        comboBox_searchby_book->setAcceptDrops(true);
        comboBox_searchby_book->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"border:2px solid #ca5cdd;\n"
" border-radius:8px;\n"
" padding:5px;\n"
"}\n"
"QComboBox::drop-down\n"
"{\n"
" border:none;\n"
"}\n"
"QComboBox QAbstractItemView\n"
"{\n"
" background-color:#2c3e50;\n"
" selection-background-color:#3498db;\n"
" border-radius:8px;\n"
" color:white;\n"
"}"));
        comboBox_searchby_book->setSizeAdjustPolicy(QComboBox::SizeAdjustPolicy::AdjustToContentsOnFirstShow);

        horizontalLayout_5->addWidget(comboBox_searchby_book);

        lineEdit_searchinput_book = new QLineEdit(groupBox_searchpage);
        lineEdit_searchinput_book->setObjectName("lineEdit_searchinput_book");
        lineEdit_searchinput_book->setStyleSheet(QString::fromUtf8(" QLineEdit\n"
"{\n"
"border:2px solid #ca5cdd;\n"
"border-radius:8px;\n"
"padding:5px;\n"
"}"));

        horizontalLayout_5->addWidget(lineEdit_searchinput_book);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 10);

        verticalLayout_6->addLayout(horizontalLayout_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        tableWidget_BookList = new QTableWidget(groupBox_searchpage);
        tableWidget_BookList->setObjectName("tableWidget_BookList");
        tableWidget_BookList->setMouseTracking(true);
        tableWidget_BookList->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"alternate-background-color: #606060;\n"
"selection-background-color: #282828;\n"
"border:2px solid #ca5cdd;\n"
"border-radius: 8px;\n"
"padding:1px;\n"
"}"));
        tableWidget_BookList->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableWidget_BookList->setAlternatingRowColors(true);
        tableWidget_BookList->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableWidget_BookList->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableWidget_BookList->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_7->addWidget(tableWidget_BookList);


        verticalLayout_6->addLayout(verticalLayout_7);


        verticalLayout_2->addWidget(groupBox_searchpage);

        stackedWidget->addWidget(page_BookList);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        verticalLayout_9 = new QVBoxLayout(page_2);
        verticalLayout_9->setObjectName("verticalLayout_9");
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_8 = new QVBoxLayout(groupBox_2);
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_bookImage = new QLabel(groupBox_2);
        label_bookImage->setObjectName("label_bookImage");
        label_bookImage->setMinimumSize(QSize(200, 200));
        label_bookImage->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border:2px solid #ca5cdd;\n"
" border-radius:8px;\n"
" padding:5px;\n"
"}"));
        label_bookImage->setFrameShape(QFrame::Shape::Box);
        label_bookImage->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_7->addWidget(label_bookImage);

        label_discription = new QLabel(groupBox_2);
        label_discription->setObjectName("label_discription");
        label_discription->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
" border:2px solid #ca5cdd;\n"
" border-radius:8px;\n"
" padding:5px;\n"
"}"));
        label_discription->setFrameShape(QFrame::Shape::Box);

        horizontalLayout_7->addWidget(label_discription);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 2);

        verticalLayout_8->addLayout(horizontalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_EditBook = new QPushButton(groupBox_2);
        pushButton_EditBook->setObjectName("pushButton_EditBook");
        pushButton_EditBook->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    text-decoration: none;\n"
"}\n"
"QPushButton:hover {\n"
"    text-decoration: underline;\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_EditBook);

        pushButton_DeleteBook = new QPushButton(groupBox_2);
        pushButton_DeleteBook->setObjectName("pushButton_DeleteBook");
        pushButton_DeleteBook->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    text-decoration: none;\n"
"}\n"
"QPushButton:hover {\n"
"    text-decoration: underline;\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_DeleteBook);

        pushButton_toWeb = new QPushButton(groupBox_2);
        pushButton_toWeb->setObjectName("pushButton_toWeb");
        pushButton_toWeb->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    text-decoration: none;\n"
"}\n"
"QPushButton:hover {\n"
"    text-decoration: underline;\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_toWeb);


        verticalLayout_8->addLayout(horizontalLayout_2);

        verticalLayout_8->setStretch(0, 4);

        verticalLayout_9->addWidget(groupBox_2);

        stackedWidget->addWidget(page_2);
        page_UserList = new QWidget();
        page_UserList->setObjectName("page_UserList");
        verticalLayout_3 = new QVBoxLayout(page_UserList);
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox = new QGroupBox(page_UserList);
        groupBox->setObjectName("groupBox");
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pushButton_filter_user = new QPushButton(groupBox);
        pushButton_filter_user->setObjectName("pushButton_filter_user");
        pushButton_filter_user->setMinimumSize(QSize(110, 0));
        pushButton_filter_user->setStyleSheet(QString::fromUtf8("QPushButton{ \n"
" border:2px solid #ca5cdd;\n"
" border-radius:8px;\n"
" padding:5px;\n"
" background-color:#2c3e50;\n"
" border-radius:8px;\n"
" color:white;\n"
"}"));

        horizontalLayout_6->addWidget(pushButton_filter_user);

        comboBox_searchby_user = new QComboBox(groupBox);
        comboBox_searchby_user->addItem(QString());
        comboBox_searchby_user->addItem(QString());
        comboBox_searchby_user->addItem(QString());
        comboBox_searchby_user->setObjectName("comboBox_searchby_user");
        sizePolicy.setHeightForWidth(comboBox_searchby_user->sizePolicy().hasHeightForWidth());
        comboBox_searchby_user->setSizePolicy(sizePolicy);
        comboBox_searchby_user->setMinimumSize(QSize(110, 0));
        comboBox_searchby_user->setAcceptDrops(true);
        comboBox_searchby_user->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
" border:2px solid #ca5cdd;\n"
" border-radius:8px;\n"
" padding:5px;\n"
"}\n"
"QComboBox::drop-down\n"
"{\n"
" border:none;\n"
"}\n"
"QComboBox QAbstractItemView\n"
"{\n"
" background-color:#2c3e50;\n"
" selection-background-color:#3498db;\n"
" border-radius:8px;\n"
" color:white;\n"
"}"));
        comboBox_searchby_user->setSizeAdjustPolicy(QComboBox::SizeAdjustPolicy::AdjustToContentsOnFirstShow);

        horizontalLayout_6->addWidget(comboBox_searchby_user);

        lineEdit_searchinput_user = new QLineEdit(groupBox);
        lineEdit_searchinput_user->setObjectName("lineEdit_searchinput_user");
        lineEdit_searchinput_user->setStyleSheet(QString::fromUtf8(" QLineEdit\n"
"{\n"
" border:2px solid #ca5cdd;\n"
"border-radius:8px;\n"
"padding:5px;\n"
"}"));

        horizontalLayout_6->addWidget(lineEdit_searchinput_user);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 1);
        horizontalLayout_6->setStretch(2, 10);

        verticalLayout_5->addLayout(horizontalLayout_6);

        tableWidget_UserList = new QTableWidget(groupBox);
        tableWidget_UserList->setObjectName("tableWidget_UserList");
        tableWidget_UserList->setMouseTracking(true);
        tableWidget_UserList->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"alternate-background-color: #606060;\n"
"selection-background-color: #282828;\n"
" border:2px solid #ca5cdd;\n"
"border-radius: 8px;\n"
"padding:1px;\n"
"}"));
        tableWidget_UserList->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableWidget_UserList->setAlternatingRowColors(true);
        tableWidget_UserList->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableWidget_UserList->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableWidget_UserList->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_5->addWidget(tableWidget_UserList);

        tableWidget_RankBoard = new QTableWidget(groupBox);
        tableWidget_RankBoard->setObjectName("tableWidget_RankBoard");
        tableWidget_RankBoard->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"alternate-background-color: #606060;\n"
"selection-background-color: #282828;\n"
" border:2px solid #ca5cdd;\n"
"border-radius: 8px;\n"
"padding:1px;\n"
"}"));

        verticalLayout_5->addWidget(tableWidget_RankBoard);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 10);
        verticalLayout_5->setStretch(2, 4);

        verticalLayout_3->addWidget(groupBox);

        stackedWidget->addWidget(page_UserList);

        verticalLayout->addWidget(stackedWidget);

        BookWindow_Librarian->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BookWindow_Librarian);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1539, 24));
        BookWindow_Librarian->setMenuBar(menubar);
        statusbar = new QStatusBar(BookWindow_Librarian);
        statusbar->setObjectName("statusbar");
        BookWindow_Librarian->setStatusBar(statusbar);

        retranslateUi(BookWindow_Librarian);

        stackedWidget->setCurrentIndex(1);
        comboBox_searchby_book->setCurrentIndex(0);
        comboBox_searchby_user->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BookWindow_Librarian);
    } // setupUi

    void retranslateUi(QMainWindow *BookWindow_Librarian)
    {
        BookWindow_Librarian->setWindowTitle(QCoreApplication::translate("BookWindow_Librarian", "MainWindow", nullptr));
        groupBox_navigationbar->setTitle(QString());
        label_date->setText(QString());
        label_time->setText(QString());
        pushButton_NavToBookList->setText(QCoreApplication::translate("BookWindow_Librarian", "Book List", nullptr));
        pushButton_NavToUserList->setText(QCoreApplication::translate("BookWindow_Librarian", "User List", nullptr));
        pushButton_NavToBorrowLog->setText(QCoreApplication::translate("BookWindow_Librarian", "Borrow Log", nullptr));
        pushButton_AddNew->setText(QCoreApplication::translate("BookWindow_Librarian", "Add New", nullptr));
        groupBox_searchpage->setTitle(QString());
        pushButton_filter_book->setText(QCoreApplication::translate("BookWindow_Librarian", "Filter", nullptr));
        comboBox_searchby_book->setItemText(0, QCoreApplication::translate("BookWindow_Librarian", "Search by", nullptr));
        comboBox_searchby_book->setItemText(1, QCoreApplication::translate("BookWindow_Librarian", "Book Name", nullptr));
        comboBox_searchby_book->setItemText(2, QCoreApplication::translate("BookWindow_Librarian", "Book Code", nullptr));
        comboBox_searchby_book->setItemText(3, QCoreApplication::translate("BookWindow_Librarian", "Author", nullptr));

        lineEdit_searchinput_book->setInputMask(QString());
        lineEdit_searchinput_book->setText(QString());
        lineEdit_searchinput_book->setPlaceholderText(QCoreApplication::translate("BookWindow_Librarian", "Search by entering book name", nullptr));
        groupBox_2->setTitle(QString());
        label_bookImage->setText(QCoreApplication::translate("BookWindow_Librarian", "No Image", nullptr));
        label_discription->setText(QString());
        pushButton_EditBook->setText(QCoreApplication::translate("BookWindow_Librarian", "Edit Book", nullptr));
        pushButton_DeleteBook->setText(QCoreApplication::translate("BookWindow_Librarian", "Delete", nullptr));
        pushButton_toWeb->setText(QCoreApplication::translate("BookWindow_Librarian", "To Website", nullptr));
        groupBox->setTitle(QString());
        pushButton_filter_user->setText(QCoreApplication::translate("BookWindow_Librarian", "Filter", nullptr));
        comboBox_searchby_user->setItemText(0, QCoreApplication::translate("BookWindow_Librarian", "Search by", nullptr));
        comboBox_searchby_user->setItemText(1, QCoreApplication::translate("BookWindow_Librarian", "User ID", nullptr));
        comboBox_searchby_user->setItemText(2, QCoreApplication::translate("BookWindow_Librarian", "User Name", nullptr));

        lineEdit_searchinput_user->setInputMask(QString());
        lineEdit_searchinput_user->setText(QString());
        lineEdit_searchinput_user->setPlaceholderText(QCoreApplication::translate("BookWindow_Librarian", "Search by entering exact user ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookWindow_Librarian: public Ui_BookWindow_Librarian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKWINDOW_LIBRARIAN_H
