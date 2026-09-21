/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Username;
    QLineEdit *lineEdit_Username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Password;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton;
    QPushButton *pushButton_Login;
    QPushButton *pushButton_Forgotpw;
    QLabel *label_LoginStatus;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->setEnabled(true);
        LoginWindow->resize(640, 400);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginWindow->sizePolicy().hasHeightForWidth());
        LoginWindow->setSizePolicy(sizePolicy);
        LoginWindow->setMinimumSize(QSize(0, 0));
        LoginWindow->setMaximumSize(QSize(16777215, 16777215));
        LoginWindow->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        LoginWindow->setAutoFillBackground(false);
        LoginWindow->setStyleSheet(QString::fromUtf8("color:rgb(31, 31, 31)"));
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_Username = new QLabel(centralwidget);
        label_Username->setObjectName("label_Username");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_Username->sizePolicy().hasHeightForWidth());
        label_Username->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_Username);

        lineEdit_Username = new QLineEdit(centralwidget);
        lineEdit_Username->setObjectName("lineEdit_Username");
        lineEdit_Username->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(lineEdit_Username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_Password = new QLabel(centralwidget);
        label_Password->setObjectName("label_Password");
        sizePolicy1.setHeightForWidth(label_Password->sizePolicy().hasHeightForWidth());
        label_Password->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_Password);

        lineEdit_Password = new QLineEdit(centralwidget);
        lineEdit_Password->setObjectName("lineEdit_Password");
        lineEdit_Password->setStyleSheet(QString::fromUtf8(""));
        lineEdit_Password->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_2->addWidget(lineEdit_Password);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 31, 31);"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_Login = new QPushButton(centralwidget);
        pushButton_Login->setObjectName("pushButton_Login");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_Login->sizePolicy().hasHeightForWidth());
        pushButton_Login->setSizePolicy(sizePolicy2);
        pushButton_Login->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_Login->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 40, 40);"));
        pushButton_Login->setAutoDefault(true);
        pushButton_Login->setFlat(false);

        verticalLayout->addWidget(pushButton_Login);

        pushButton_Forgotpw = new QPushButton(centralwidget);
        pushButton_Forgotpw->setObjectName("pushButton_Forgotpw");
        sizePolicy2.setHeightForWidth(pushButton_Forgotpw->sizePolicy().hasHeightForWidth());
        pushButton_Forgotpw->setSizePolicy(sizePolicy2);
        QFont font;
        font.setWeight(QFont::DemiBold);
        font.setItalic(true);
        font.setUnderline(true);
        pushButton_Forgotpw->setFont(font);
        pushButton_Forgotpw->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_Forgotpw->setFocusPolicy(Qt::FocusPolicy::TabFocus);
        pushButton_Forgotpw->setAutoFillBackground(false);
        pushButton_Forgotpw->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 31, 31);"));
        pushButton_Forgotpw->setCheckable(false);
        pushButton_Forgotpw->setFlat(true);

        verticalLayout->addWidget(pushButton_Forgotpw);

        label_LoginStatus = new QLabel(centralwidget);
        label_LoginStatus->setObjectName("label_LoginStatus");
        sizePolicy2.setHeightForWidth(label_LoginStatus->sizePolicy().hasHeightForWidth());
        label_LoginStatus->setSizePolicy(sizePolicy2);
        label_LoginStatus->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_LoginStatus);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(verticalLayout);

        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 640, 24));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName("statusbar");
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);

        pushButton_Login->setDefault(false);


        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        label_Username->setText(QCoreApplication::translate("LoginWindow", " UserID     ", nullptr));
        label_Password->setText(QCoreApplication::translate("LoginWindow", " Password", nullptr));
        pushButton->setText(QString());
        pushButton_Login->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        pushButton_Forgotpw->setText(QCoreApplication::translate("LoginWindow", "Forgot password? Click here", nullptr));
        label_LoginStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
