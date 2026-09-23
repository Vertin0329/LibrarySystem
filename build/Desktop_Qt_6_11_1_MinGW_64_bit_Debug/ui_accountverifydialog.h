/********************************************************************************
** Form generated from reading UI file 'accountverifydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTVERIFYDIALOG_H
#define UI_ACCOUNTVERIFYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountVerifyDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_UserID;
    QLineEdit *lineEdit_UserID;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Name;
    QLineEdit *lineEdit_Name;
    QPushButton *pushButton_Verify;
    QLabel *label_Warning;
    QWidget *page_Correct;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_PasswordInfo;

    void setupUi(QDialog *AccountVerifyDialog)
    {
        if (AccountVerifyDialog->objectName().isEmpty())
            AccountVerifyDialog->setObjectName("AccountVerifyDialog");
        AccountVerifyDialog->resize(456, 223);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AccountVerifyDialog->sizePolicy().hasHeightForWidth());
        AccountVerifyDialog->setSizePolicy(sizePolicy);
        AccountVerifyDialog->setStyleSheet(QString::fromUtf8("color:rgb(31, 31, 31)"));
        verticalLayout_3 = new QVBoxLayout(AccountVerifyDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        stackedWidget = new QStackedWidget(AccountVerifyDialog);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_4 = new QVBoxLayout(page);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_UserID = new QLabel(page);
        label_UserID->setObjectName("label_UserID");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_UserID->sizePolicy().hasHeightForWidth());
        label_UserID->setSizePolicy(sizePolicy1);
        label_UserID->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        label_UserID->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_UserID);

        lineEdit_UserID = new QLineEdit(page);
        lineEdit_UserID->setObjectName("lineEdit_UserID");
        lineEdit_UserID->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(31, 31, 31); \n"
"border:2px solid #ca5cdd;\n"
" border-radius:8px;\n"
" padding:5px;"));

        horizontalLayout->addWidget(lineEdit_UserID);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_Name = new QLabel(page);
        label_Name->setObjectName("label_Name");
        sizePolicy1.setHeightForWidth(label_Name->sizePolicy().hasHeightForWidth());
        label_Name->setSizePolicy(sizePolicy1);
        label_Name->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        label_Name->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label_Name);

        lineEdit_Name = new QLineEdit(page);
        lineEdit_Name->setObjectName("lineEdit_Name");
        lineEdit_Name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(31, 31, 31); \n"
"border:2px solid #ca5cdd;\n"
" border-radius:8px;\n"
" padding:5px;"));

        horizontalLayout_3->addWidget(lineEdit_Name);


        verticalLayout_2->addLayout(horizontalLayout_3);

        pushButton_Verify = new QPushButton(page);
        pushButton_Verify->setObjectName("pushButton_Verify");
        sizePolicy.setHeightForWidth(pushButton_Verify->sizePolicy().hasHeightForWidth());
        pushButton_Verify->setSizePolicy(sizePolicy);
        pushButton_Verify->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(pushButton_Verify);

        label_Warning = new QLabel(page);
        label_Warning->setObjectName("label_Warning");
        sizePolicy.setHeightForWidth(label_Warning->sizePolicy().hasHeightForWidth());
        label_Warning->setSizePolicy(sizePolicy);
        label_Warning->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        label_Warning->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_Warning);

        verticalLayout_2->setStretch(0, 5);
        verticalLayout_2->setStretch(1, 5);
        verticalLayout_2->setStretch(2, 1);
        verticalLayout_2->setStretch(3, 1);

        verticalLayout_4->addLayout(verticalLayout_2);

        stackedWidget->addWidget(page);
        page_Correct = new QWidget();
        page_Correct->setObjectName("page_Correct");
        horizontalLayout_2 = new QHBoxLayout(page_Correct);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_PasswordInfo = new QLabel(page_Correct);
        label_PasswordInfo->setObjectName("label_PasswordInfo");
        label_PasswordInfo->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(label_PasswordInfo);

        stackedWidget->addWidget(page_Correct);

        verticalLayout_3->addWidget(stackedWidget);


        retranslateUi(AccountVerifyDialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AccountVerifyDialog);
    } // setupUi

    void retranslateUi(QDialog *AccountVerifyDialog)
    {
        AccountVerifyDialog->setWindowTitle(QCoreApplication::translate("AccountVerifyDialog", "Account Recovery Window", nullptr));
        label_UserID->setText(QCoreApplication::translate("AccountVerifyDialog", "UsernID    ", nullptr));
        label_Name->setText(QCoreApplication::translate("AccountVerifyDialog", "Name       ", nullptr));
        pushButton_Verify->setText(QCoreApplication::translate("AccountVerifyDialog", "Verify", nullptr));
        label_Warning->setText(QString());
        label_PasswordInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AccountVerifyDialog: public Ui_AccountVerifyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTVERIFYDIALOG_H
