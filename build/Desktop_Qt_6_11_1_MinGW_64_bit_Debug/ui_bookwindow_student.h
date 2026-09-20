/********************************************************************************
** Form generated from reading UI file 'bookwindow_student.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKWINDOW_STUDENT_H
#define UI_BOOKWINDOW_STUDENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
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

class Ui_BookWindow_Student
{
public:
    QAction *actionRedo;
    QAction *actionUndo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_PreviousPage;
    QPushButton *pushButton_NextPage;
    QPushButton *pushButton_Reload;
    QLabel *label_Space;
    QPushButton *pushButton_LogOut;
    QGroupBox *groupBox_navigationbar;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_date;
    QLabel *label_time;
    QPushButton *pushButton_navtomain;
    QPushButton *pushButton_navtosearch;
    QPushButton *pushButton_navtoaboutus;
    QPushButton *pushButton_EditProfile;
    QStackedWidget *stackedWidget;
    QWidget *page_home;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_greeting;
    QLabel *label_profiePic;
    QLabel *label_userState;
    QTableWidget *tableWidget_RankBoard;
    QWidget *page_search;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_searchpage;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_filter;
    QComboBox *comboBox_searchby;
    QLineEdit *lineEdit_searchinput;
    QLabel *label_BookBorrowedCount;
    QVBoxLayout *verticalLayout_7;
    QTableWidget *tableWidget;
    QWidget *page_aboutus;
    QWidget *page_bookdetails;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_bookImage;
    QLabel *label_discription;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_backToSearch;
    QPushButton *pushButton_borrow;
    QPushButton *pushButton_return;
    QPushButton *pushButton_renew;
    QPushButton *pushButton_toWeb;
    QWidget *page_EditConfig;
    QVBoxLayout *verticalLayout_14;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_UserID;
    QLabel *label_Name;
    QLabel *label_CurrentPW;
    QLabel *label_NewPW;
    QLabel *label_ConfirmPW;
    QVBoxLayout *verticalLayout_12;
    QLineEdit *lineEdit_UserID;
    QLabel *label_StatusUserID;
    QLineEdit *lineEdit_Name;
    QLabel *label_StatusUserName;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit_CurrentPW;
    QPushButton *pushButton_ShowHidePW;
    QLabel *label_StatusCurrentPW;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *lineEdit_NewPW;
    QPushButton *pushButton_ShowHidePW2;
    QLabel *label_StatusNewAndConfirmPW;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *lineEdit_ConfirmPW;
    QPushButton *pushButton_ShowHidePW3;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_ReturnMain;
    QLabel *label_Warning;
    QPushButton *pushButton_ChangeConfig;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BookWindow_Student)
    {
        if (BookWindow_Student->objectName().isEmpty())
            BookWindow_Student->setObjectName("BookWindow_Student");
        BookWindow_Student->resize(1499, 912);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/flat-design-library-logo-design_23-2149324476.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        BookWindow_Student->setWindowIcon(icon);
        BookWindow_Student->setStyleSheet(QString::fromUtf8(""));
        actionRedo = new QAction(BookWindow_Student);
        actionRedo->setObjectName("actionRedo");
        actionUndo = new QAction(BookWindow_Student);
        actionUndo->setObjectName("actionUndo");
        actionCut = new QAction(BookWindow_Student);
        actionCut->setObjectName("actionCut");
        actionCopy = new QAction(BookWindow_Student);
        actionCopy->setObjectName("actionCopy");
        actionPaste = new QAction(BookWindow_Student);
        actionPaste->setObjectName("actionPaste");
        centralwidget = new QWidget(BookWindow_Student);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        verticalLayout_15 = new QVBoxLayout(widget);
        verticalLayout_15->setObjectName("verticalLayout_15");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        pushButton_PreviousPage = new QPushButton(widget);
        pushButton_PreviousPage->setObjectName("pushButton_PreviousPage");
        pushButton_PreviousPage->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 30);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 50);\n"
"}"));

        horizontalLayout_9->addWidget(pushButton_PreviousPage);

        pushButton_NextPage = new QPushButton(widget);
        pushButton_NextPage->setObjectName("pushButton_NextPage");
        pushButton_NextPage->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    border-radius: 4px; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 30); \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 50); \n"
"}"));

        horizontalLayout_9->addWidget(pushButton_NextPage);

        pushButton_Reload = new QPushButton(widget);
        pushButton_Reload->setObjectName("pushButton_Reload");
        pushButton_Reload->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    border-radius: 4px; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 30); \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 50); \n"
"}"));

        horizontalLayout_9->addWidget(pushButton_Reload);

        label_Space = new QLabel(widget);
        label_Space->setObjectName("label_Space");

        horizontalLayout_9->addWidget(label_Space);

        pushButton_LogOut = new QPushButton(widget);
        pushButton_LogOut->setObjectName("pushButton_LogOut");
        pushButton_LogOut->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    border-radius: 4px; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 30); \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 50); \n"
"}"));

        horizontalLayout_9->addWidget(pushButton_LogOut);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 1);
        horizontalLayout_9->setStretch(2, 1);
        horizontalLayout_9->setStretch(3, 40);

        verticalLayout_15->addLayout(horizontalLayout_9);


        verticalLayout_3->addWidget(widget);

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
        label_time->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_time);

        pushButton_navtomain = new QPushButton(groupBox_navigationbar);
        pushButton_navtomain->setObjectName("pushButton_navtomain");
        pushButton_navtomain->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"    text-decoration: none;\n"
"}\n"
"QPushButton:hover {\n"
"    text-decoration: underline;\n"
"}"));

        horizontalLayout->addWidget(pushButton_navtomain);

        pushButton_navtosearch = new QPushButton(groupBox_navigationbar);
        pushButton_navtosearch->setObjectName("pushButton_navtosearch");
        pushButton_navtosearch->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"    text-decoration: none;\n"
"}\n"
"QPushButton:hover {\n"
"    text-decoration: underline;\n"
"}"));

        horizontalLayout->addWidget(pushButton_navtosearch);

        pushButton_navtoaboutus = new QPushButton(groupBox_navigationbar);
        pushButton_navtoaboutus->setObjectName("pushButton_navtoaboutus");
        pushButton_navtoaboutus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"    text-decoration: none;\n"
"}\n"
"QPushButton:hover {\n"
"    text-decoration: underline;\n"
"}"));

        horizontalLayout->addWidget(pushButton_navtoaboutus);

        pushButton_EditProfile = new QPushButton(groupBox_navigationbar);
        pushButton_EditProfile->setObjectName("pushButton_EditProfile");
        pushButton_EditProfile->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"    text-decoration: none;\n"
"}\n"
"QPushButton:hover {\n"
"    text-decoration: underline;\n"
"}"));

        horizontalLayout->addWidget(pushButton_EditProfile);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 2);
        horizontalLayout->setStretch(3, 2);
        horizontalLayout->setStretch(4, 2);
        horizontalLayout->setStretch(5, 2);

        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(groupBox_navigationbar);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        page_home = new QWidget();
        page_home->setObjectName("page_home");
        verticalLayout = new QVBoxLayout(page_home);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_2 = new QGroupBox(page_home);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout_4 = new QHBoxLayout(groupBox_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_greeting = new QLabel(groupBox_2);
        label_greeting->setObjectName("label_greeting");
        label_greeting->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 28pt \"Microsoft JhengHei UI\";"));

        verticalLayout_9->addWidget(label_greeting);

        label_profiePic = new QLabel(groupBox_2);
        label_profiePic->setObjectName("label_profiePic");
        label_profiePic->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_9->addWidget(label_profiePic);

        verticalLayout_9->setStretch(0, 2);
        verticalLayout_9->setStretch(1, 10);

        horizontalLayout_3->addLayout(verticalLayout_9);

        label_userState = new QLabel(groupBox_2);
        label_userState->setObjectName("label_userState");

        horizontalLayout_3->addWidget(label_userState);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 5);

        verticalLayout_10->addLayout(horizontalLayout_3);

        tableWidget_RankBoard = new QTableWidget(groupBox_2);
        tableWidget_RankBoard->setObjectName("tableWidget_RankBoard");
        tableWidget_RankBoard->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"alternate-background-color: #606060;\n"
"selection-background-color: #282828;\n"
"border:2px solid #ca5cdd;\n"
"border-radius: 8px;\n"
"padding:1px;\n"
"}"));
        tableWidget_RankBoard->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);

        verticalLayout_10->addWidget(tableWidget_RankBoard);

        verticalLayout_10->setStretch(0, 2);
        verticalLayout_10->setStretch(1, 1);

        horizontalLayout_4->addLayout(verticalLayout_10);


        verticalLayout->addWidget(groupBox_2);

        stackedWidget->addWidget(page_home);
        page_search = new QWidget();
        page_search->setObjectName("page_search");
        verticalLayout_2 = new QVBoxLayout(page_search);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_searchpage = new QGroupBox(page_search);
        groupBox_searchpage->setObjectName("groupBox_searchpage");
        verticalLayout_6 = new QVBoxLayout(groupBox_searchpage);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_filter = new QPushButton(groupBox_searchpage);
        pushButton_filter->setObjectName("pushButton_filter");
        pushButton_filter->setMinimumSize(QSize(110, 0));
        pushButton_filter->setStyleSheet(QString::fromUtf8("QPushButton{ \n"
"border:2px solid #ca5cdd;\n"
" border-radius:8px;\n"
" padding:5px;\n"
" background-color:#2c3e50;\n"
" border-radius:8px;\n"
" color:white;\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_filter);

        comboBox_searchby = new QComboBox(groupBox_searchpage);
        comboBox_searchby->addItem(QString());
        comboBox_searchby->addItem(QString());
        comboBox_searchby->addItem(QString());
        comboBox_searchby->addItem(QString());
        comboBox_searchby->setObjectName("comboBox_searchby");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_searchby->sizePolicy().hasHeightForWidth());
        comboBox_searchby->setSizePolicy(sizePolicy);
        comboBox_searchby->setMinimumSize(QSize(110, 0));
        comboBox_searchby->setAcceptDrops(true);
        comboBox_searchby->setStyleSheet(QString::fromUtf8("QComboBox\n"
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
        comboBox_searchby->setSizeAdjustPolicy(QComboBox::SizeAdjustPolicy::AdjustToContentsOnFirstShow);

        horizontalLayout_5->addWidget(comboBox_searchby);

        lineEdit_searchinput = new QLineEdit(groupBox_searchpage);
        lineEdit_searchinput->setObjectName("lineEdit_searchinput");
        lineEdit_searchinput->setStyleSheet(QString::fromUtf8(" QLineEdit\n"
"{\n"
"border:2px solid #ca5cdd;\n"
"border-radius:8px;\n"
"padding:5px;\n"
"}"));

        horizontalLayout_5->addWidget(lineEdit_searchinput);

        label_BookBorrowedCount = new QLabel(groupBox_searchpage);
        label_BookBorrowedCount->setObjectName("label_BookBorrowedCount");

        horizontalLayout_5->addWidget(label_BookBorrowedCount);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 10);
        horizontalLayout_5->setStretch(3, 1);

        verticalLayout_6->addLayout(horizontalLayout_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        tableWidget = new QTableWidget(groupBox_searchpage);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setMouseTracking(true);
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"alternate-background-color: #606060;\n"
"selection-background-color: #282828;\n"
"border:2px solid #ca5cdd;\n"
"border-radius: 8px;\n"
"padding:1px;\n"
"}"));
        tableWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_7->addWidget(tableWidget);


        verticalLayout_6->addLayout(verticalLayout_7);


        verticalLayout_2->addWidget(groupBox_searchpage);

        stackedWidget->addWidget(page_search);
        page_aboutus = new QWidget();
        page_aboutus->setObjectName("page_aboutus");
        stackedWidget->addWidget(page_aboutus);
        page_bookdetails = new QWidget();
        page_bookdetails->setObjectName("page_bookdetails");
        verticalLayout_5 = new QVBoxLayout(page_bookdetails);
        verticalLayout_5->setObjectName("verticalLayout_5");
        groupBox = new QGroupBox(page_bookdetails);
        groupBox->setObjectName("groupBox");
        verticalLayout_8 = new QVBoxLayout(groupBox);
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_bookImage = new QLabel(groupBox);
        label_bookImage->setObjectName("label_bookImage");
        label_bookImage->setMinimumSize(QSize(200, 200));
        label_bookImage->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
" border:2px solid #ca5cdd;\n"
" border-radius:8px;\n"
" padding:5px;\n"
"}"));
        label_bookImage->setFrameShape(QFrame::Shape::Box);
        label_bookImage->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_6->addWidget(label_bookImage);

        label_discription = new QLabel(groupBox);
        label_discription->setObjectName("label_discription");
        label_discription->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
" border:2px solid #ca5cdd;\n"
" border-radius:8px;\n"
" padding:5px;\n"
"}"));
        label_discription->setFrameShape(QFrame::Shape::Box);

        horizontalLayout_6->addWidget(label_discription);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 2);

        verticalLayout_8->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_backToSearch = new QPushButton(groupBox);
        pushButton_backToSearch->setObjectName("pushButton_backToSearch");

        horizontalLayout_2->addWidget(pushButton_backToSearch);

        pushButton_borrow = new QPushButton(groupBox);
        pushButton_borrow->setObjectName("pushButton_borrow");
        pushButton_borrow->setEnabled(true);

        horizontalLayout_2->addWidget(pushButton_borrow);

        pushButton_return = new QPushButton(groupBox);
        pushButton_return->setObjectName("pushButton_return");

        horizontalLayout_2->addWidget(pushButton_return);

        pushButton_renew = new QPushButton(groupBox);
        pushButton_renew->setObjectName("pushButton_renew");

        horizontalLayout_2->addWidget(pushButton_renew);

        pushButton_toWeb = new QPushButton(groupBox);
        pushButton_toWeb->setObjectName("pushButton_toWeb");

        horizontalLayout_2->addWidget(pushButton_toWeb);


        verticalLayout_8->addLayout(horizontalLayout_2);

        verticalLayout_8->setStretch(0, 4);

        verticalLayout_5->addWidget(groupBox);

        stackedWidget->addWidget(page_bookdetails);
        page_EditConfig = new QWidget();
        page_EditConfig->setObjectName("page_EditConfig");
        verticalLayout_14 = new QVBoxLayout(page_EditConfig);
        verticalLayout_14->setObjectName("verticalLayout_14");
        groupBox_3 = new QGroupBox(page_EditConfig);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_13 = new QVBoxLayout(groupBox_3);
        verticalLayout_13->setObjectName("verticalLayout_13");
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(77);
        verticalLayout_11->setObjectName("verticalLayout_11");
        label_UserID = new QLabel(groupBox_3);
        label_UserID->setObjectName("label_UserID");
        label_UserID->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));

        verticalLayout_11->addWidget(label_UserID);

        label_Name = new QLabel(groupBox_3);
        label_Name->setObjectName("label_Name");
        label_Name->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));

        verticalLayout_11->addWidget(label_Name);

        label_CurrentPW = new QLabel(groupBox_3);
        label_CurrentPW->setObjectName("label_CurrentPW");

        verticalLayout_11->addWidget(label_CurrentPW);

        label_NewPW = new QLabel(groupBox_3);
        label_NewPW->setObjectName("label_NewPW");

        verticalLayout_11->addWidget(label_NewPW);

        label_ConfirmPW = new QLabel(groupBox_3);
        label_ConfirmPW->setObjectName("label_ConfirmPW");

        verticalLayout_11->addWidget(label_ConfirmPW);


        horizontalLayout_12->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(33);
        verticalLayout_12->setObjectName("verticalLayout_12");
        lineEdit_UserID = new QLineEdit(groupBox_3);
        lineEdit_UserID->setObjectName("lineEdit_UserID");

        verticalLayout_12->addWidget(lineEdit_UserID);

        label_StatusUserID = new QLabel(groupBox_3);
        label_StatusUserID->setObjectName("label_StatusUserID");
        label_StatusUserID->setMaximumSize(QSize(16777215, 20));

        verticalLayout_12->addWidget(label_StatusUserID);

        lineEdit_Name = new QLineEdit(groupBox_3);
        lineEdit_Name->setObjectName("lineEdit_Name");

        verticalLayout_12->addWidget(lineEdit_Name);

        label_StatusUserName = new QLabel(groupBox_3);
        label_StatusUserName->setObjectName("label_StatusUserName");
        label_StatusUserName->setMaximumSize(QSize(16777215, 20));

        verticalLayout_12->addWidget(label_StatusUserName);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        horizontalLayout_7->setContentsMargins(-1, 0, -1, -1);
        lineEdit_CurrentPW = new QLineEdit(groupBox_3);
        lineEdit_CurrentPW->setObjectName("lineEdit_CurrentPW");

        horizontalLayout_7->addWidget(lineEdit_CurrentPW);

        pushButton_ShowHidePW = new QPushButton(groupBox_3);
        pushButton_ShowHidePW->setObjectName("pushButton_ShowHidePW");

        horizontalLayout_7->addWidget(pushButton_ShowHidePW);


        verticalLayout_12->addLayout(horizontalLayout_7);

        label_StatusCurrentPW = new QLabel(groupBox_3);
        label_StatusCurrentPW->setObjectName("label_StatusCurrentPW");
        label_StatusCurrentPW->setMaximumSize(QSize(16777215, 20));

        verticalLayout_12->addWidget(label_StatusCurrentPW);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        lineEdit_NewPW = new QLineEdit(groupBox_3);
        lineEdit_NewPW->setObjectName("lineEdit_NewPW");

        horizontalLayout_10->addWidget(lineEdit_NewPW);

        pushButton_ShowHidePW2 = new QPushButton(groupBox_3);
        pushButton_ShowHidePW2->setObjectName("pushButton_ShowHidePW2");

        horizontalLayout_10->addWidget(pushButton_ShowHidePW2);


        verticalLayout_12->addLayout(horizontalLayout_10);

        label_StatusNewAndConfirmPW = new QLabel(groupBox_3);
        label_StatusNewAndConfirmPW->setObjectName("label_StatusNewAndConfirmPW");
        label_StatusNewAndConfirmPW->setMaximumSize(QSize(16777215, 20));

        verticalLayout_12->addWidget(label_StatusNewAndConfirmPW);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        lineEdit_ConfirmPW = new QLineEdit(groupBox_3);
        lineEdit_ConfirmPW->setObjectName("lineEdit_ConfirmPW");

        horizontalLayout_11->addWidget(lineEdit_ConfirmPW);

        pushButton_ShowHidePW3 = new QPushButton(groupBox_3);
        pushButton_ShowHidePW3->setObjectName("pushButton_ShowHidePW3");

        horizontalLayout_11->addWidget(pushButton_ShowHidePW3);


        verticalLayout_12->addLayout(horizontalLayout_11);


        horizontalLayout_12->addLayout(verticalLayout_12);


        verticalLayout_13->addLayout(horizontalLayout_12);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        pushButton_ReturnMain = new QPushButton(groupBox_3);
        pushButton_ReturnMain->setObjectName("pushButton_ReturnMain");

        horizontalLayout_8->addWidget(pushButton_ReturnMain);

        label_Warning = new QLabel(groupBox_3);
        label_Warning->setObjectName("label_Warning");
        label_Warning->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_8->addWidget(label_Warning);

        pushButton_ChangeConfig = new QPushButton(groupBox_3);
        pushButton_ChangeConfig->setObjectName("pushButton_ChangeConfig");

        horizontalLayout_8->addWidget(pushButton_ChangeConfig);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 5);
        horizontalLayout_8->setStretch(2, 1);

        verticalLayout_13->addLayout(horizontalLayout_8);

        verticalLayout_13->setStretch(0, 10);
        verticalLayout_13->setStretch(1, 1);

        verticalLayout_14->addWidget(groupBox_3);

        stackedWidget->addWidget(page_EditConfig);

        verticalLayout_3->addWidget(stackedWidget);

        BookWindow_Student->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BookWindow_Student);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1499, 24));
        BookWindow_Student->setMenuBar(menubar);
        statusbar = new QStatusBar(BookWindow_Student);
        statusbar->setObjectName("statusbar");
        BookWindow_Student->setStatusBar(statusbar);

        retranslateUi(BookWindow_Student);

        stackedWidget->setCurrentIndex(4);
        comboBox_searchby->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BookWindow_Student);
    } // setupUi

    void retranslateUi(QMainWindow *BookWindow_Student)
    {
        BookWindow_Student->setWindowTitle(QCoreApplication::translate("BookWindow_Student", "Main Window", nullptr));
        actionRedo->setText(QCoreApplication::translate("BookWindow_Student", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("BookWindow_Student", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("BookWindow_Student", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("BookWindow_Student", "Ctrl+Shift+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("BookWindow_Student", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("BookWindow_Student", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("BookWindow_Student", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("BookWindow_Student", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("BookWindow_Student", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("BookWindow_Student", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_PreviousPage->setText(QCoreApplication::translate("BookWindow_Student", "\342\206\220", nullptr));
        pushButton_NextPage->setText(QCoreApplication::translate("BookWindow_Student", "\342\206\222", nullptr));
        pushButton_Reload->setText(QCoreApplication::translate("BookWindow_Student", "\342\237\263", nullptr));
        label_Space->setText(QString());
        pushButton_LogOut->setText(QCoreApplication::translate("BookWindow_Student", "Log out", nullptr));
        groupBox_navigationbar->setTitle(QString());
        label_date->setText(QString());
        label_time->setText(QString());
        pushButton_navtomain->setText(QCoreApplication::translate("BookWindow_Student", "Home", nullptr));
        pushButton_navtosearch->setText(QCoreApplication::translate("BookWindow_Student", "Search", nullptr));
        pushButton_navtoaboutus->setText(QCoreApplication::translate("BookWindow_Student", "About Us", nullptr));
        pushButton_EditProfile->setText(QCoreApplication::translate("BookWindow_Student", "Edit Profile", nullptr));
        groupBox_2->setTitle(QString());
        label_greeting->setText(QCoreApplication::translate("BookWindow_Student", "TextLabel", nullptr));
        label_profiePic->setText(QCoreApplication::translate("BookWindow_Student", "No Image", nullptr));
        label_userState->setText(QCoreApplication::translate("BookWindow_Student", "TextLabel", nullptr));
        groupBox_searchpage->setTitle(QString());
        pushButton_filter->setText(QCoreApplication::translate("BookWindow_Student", "Filter", nullptr));
        comboBox_searchby->setItemText(0, QCoreApplication::translate("BookWindow_Student", "Search by", nullptr));
        comboBox_searchby->setItemText(1, QCoreApplication::translate("BookWindow_Student", "Book Name", nullptr));
        comboBox_searchby->setItemText(2, QCoreApplication::translate("BookWindow_Student", "Book Code", nullptr));
        comboBox_searchby->setItemText(3, QCoreApplication::translate("BookWindow_Student", "Authur", nullptr));

        lineEdit_searchinput->setInputMask(QString());
        lineEdit_searchinput->setText(QString());
        lineEdit_searchinput->setPlaceholderText(QCoreApplication::translate("BookWindow_Student", "Search by entering book name", nullptr));
        label_BookBorrowedCount->setText(QCoreApplication::translate("BookWindow_Student", "Book Borrowed: ", nullptr));
        groupBox->setTitle(QString());
        label_bookImage->setText(QCoreApplication::translate("BookWindow_Student", "No Image", nullptr));
        label_discription->setText(QString());
        pushButton_backToSearch->setText(QCoreApplication::translate("BookWindow_Student", "Back to Search", nullptr));
        pushButton_borrow->setText(QCoreApplication::translate("BookWindow_Student", "Borrow Book", nullptr));
        pushButton_return->setText(QCoreApplication::translate("BookWindow_Student", "Return Book", nullptr));
        pushButton_renew->setText(QCoreApplication::translate("BookWindow_Student", "Renew Book", nullptr));
        pushButton_toWeb->setText(QCoreApplication::translate("BookWindow_Student", "For more information about the book, cick here...", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("BookWindow_Student", "Edit Profile Page", nullptr));
        label_UserID->setText(QCoreApplication::translate("BookWindow_Student", "User ID:", nullptr));
        label_Name->setText(QCoreApplication::translate("BookWindow_Student", "Name:", nullptr));
        label_CurrentPW->setText(QCoreApplication::translate("BookWindow_Student", "Current Password:", nullptr));
        label_NewPW->setText(QCoreApplication::translate("BookWindow_Student", "New Password:", nullptr));
        label_ConfirmPW->setText(QCoreApplication::translate("BookWindow_Student", "Confirm Password:", nullptr));
        label_StatusUserID->setText(QString());
        label_StatusUserName->setText(QString());
        pushButton_ShowHidePW->setText(QCoreApplication::translate("BookWindow_Student", "PushButton", nullptr));
        label_StatusCurrentPW->setText(QString());
        pushButton_ShowHidePW2->setText(QCoreApplication::translate("BookWindow_Student", "PushButton", nullptr));
        label_StatusNewAndConfirmPW->setText(QString());
        pushButton_ShowHidePW3->setText(QCoreApplication::translate("BookWindow_Student", "PushButton", nullptr));
        pushButton_ReturnMain->setText(QCoreApplication::translate("BookWindow_Student", "Return To Main", nullptr));
        label_Warning->setText(QString());
        pushButton_ChangeConfig->setText(QCoreApplication::translate("BookWindow_Student", "Confirm Change", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookWindow_Student: public Ui_BookWindow_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKWINDOW_STUDENT_H
