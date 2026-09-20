/********************************************************************************
** Form generated from reading UI file 'bookrenewdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKRENEWDIALOG_H
#define UI_BOOKRENEWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookRenewDialog
{
public:
    QVBoxLayout *verticalLayout_7;
    QStackedWidget *stackedWidget;
    QWidget *page_RenewConfirm;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_Renew;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Accept;
    QPushButton *pushButton_Cancel;
    QWidget *page_RenewDetail;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_BookName;
    QLabel *label_ReturnDate;
    QLabel *label_CurrentDate;
    QLabel *label_NewReturnDate;
    QLabel *label_FineDetail;
    QPushButton *pushButton_Renew;
    QWidget *page_Fine;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_QRCode;
    QLabel *label_ScanHere;
    QPushButton *pushButton_Paid;
    QWidget *page_RenewReject;
    QVBoxLayout *verticalLayout_8;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_ForceReturnBook;
    QWidget *page_RenewDone;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_countDown;
    QWidget *page_ReturnDone;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_CountDownReturn;

    void setupUi(QDialog *BookRenewDialog)
    {
        if (BookRenewDialog->objectName().isEmpty())
            BookRenewDialog->setObjectName("BookRenewDialog");
        BookRenewDialog->resize(954, 362);
        verticalLayout_7 = new QVBoxLayout(BookRenewDialog);
        verticalLayout_7->setObjectName("verticalLayout_7");
        stackedWidget = new QStackedWidget(BookRenewDialog);
        stackedWidget->setObjectName("stackedWidget");
        page_RenewConfirm = new QWidget();
        page_RenewConfirm->setObjectName("page_RenewConfirm");
        verticalLayout_3 = new QVBoxLayout(page_RenewConfirm);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_Renew = new QLabel(page_RenewConfirm);
        label_Renew->setObjectName("label_Renew");
        label_Renew->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft JhengHei UI\";"));

        verticalLayout->addWidget(label_Renew);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_Accept = new QPushButton(page_RenewConfirm);
        pushButton_Accept->setObjectName("pushButton_Accept");

        horizontalLayout->addWidget(pushButton_Accept);

        pushButton_Cancel = new QPushButton(page_RenewConfirm);
        pushButton_Cancel->setObjectName("pushButton_Cancel");

        horizontalLayout->addWidget(pushButton_Cancel);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 1);

        verticalLayout_3->addLayout(verticalLayout);

        stackedWidget->addWidget(page_RenewConfirm);
        page_RenewDetail = new QWidget();
        page_RenewDetail->setObjectName("page_RenewDetail");
        verticalLayout_5 = new QVBoxLayout(page_RenewDetail);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_BookName = new QLabel(page_RenewDetail);
        label_BookName->setObjectName("label_BookName");

        verticalLayout_5->addWidget(label_BookName);

        label_ReturnDate = new QLabel(page_RenewDetail);
        label_ReturnDate->setObjectName("label_ReturnDate");

        verticalLayout_5->addWidget(label_ReturnDate);

        label_CurrentDate = new QLabel(page_RenewDetail);
        label_CurrentDate->setObjectName("label_CurrentDate");

        verticalLayout_5->addWidget(label_CurrentDate);

        label_NewReturnDate = new QLabel(page_RenewDetail);
        label_NewReturnDate->setObjectName("label_NewReturnDate");

        verticalLayout_5->addWidget(label_NewReturnDate);

        label_FineDetail = new QLabel(page_RenewDetail);
        label_FineDetail->setObjectName("label_FineDetail");

        verticalLayout_5->addWidget(label_FineDetail);

        pushButton_Renew = new QPushButton(page_RenewDetail);
        pushButton_Renew->setObjectName("pushButton_Renew");

        verticalLayout_5->addWidget(pushButton_Renew);

        stackedWidget->addWidget(page_RenewDetail);
        page_Fine = new QWidget();
        page_Fine->setObjectName("page_Fine");
        verticalLayout_2 = new QVBoxLayout(page_Fine);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_QRCode = new QLabel(page_Fine);
        label_QRCode->setObjectName("label_QRCode");
        label_QRCode->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_QRCode);

        label_ScanHere = new QLabel(page_Fine);
        label_ScanHere->setObjectName("label_ScanHere");
        label_ScanHere->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_ScanHere);

        pushButton_Paid = new QPushButton(page_Fine);
        pushButton_Paid->setObjectName("pushButton_Paid");

        verticalLayout_6->addWidget(pushButton_Paid);

        verticalLayout_6->setStretch(0, 5);
        verticalLayout_6->setStretch(1, 1);

        verticalLayout_2->addLayout(verticalLayout_6);

        stackedWidget->addWidget(page_Fine);
        page_RenewReject = new QWidget();
        page_RenewReject->setObjectName("page_RenewReject");
        verticalLayout_8 = new QVBoxLayout(page_RenewReject);
        verticalLayout_8->setObjectName("verticalLayout_8");
        label = new QLabel(page_RenewReject);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 700 22pt \"Microsoft JhengHei UI\";\n"
"color: rgb(170, 0, 0);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_8->addWidget(label);

        label_2 = new QLabel(page_RenewReject);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 22pt \"Microsoft JhengHei UI\";\n"
"color: rgb(170, 0, 0);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_8->addWidget(label_2);

        pushButton_ForceReturnBook = new QPushButton(page_RenewReject);
        pushButton_ForceReturnBook->setObjectName("pushButton_ForceReturnBook");

        verticalLayout_8->addWidget(pushButton_ForceReturnBook);

        stackedWidget->addWidget(page_RenewReject);
        page_RenewDone = new QWidget();
        page_RenewDone->setObjectName("page_RenewDone");
        verticalLayout_4 = new QVBoxLayout(page_RenewDone);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_countDown = new QLabel(page_RenewDone);
        label_countDown->setObjectName("label_countDown");
        label_countDown->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 700 20pt \"Microsoft JhengHei UI\";\n"
"rgb(0, 170, 0)\n"
"}"));
        label_countDown->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_countDown);

        stackedWidget->addWidget(page_RenewDone);
        page_ReturnDone = new QWidget();
        page_ReturnDone->setObjectName("page_ReturnDone");
        verticalLayout_9 = new QVBoxLayout(page_ReturnDone);
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_CountDownReturn = new QLabel(page_ReturnDone);
        label_CountDownReturn->setObjectName("label_CountDownReturn");
        label_CountDownReturn->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft JhengHei UI\";"));

        verticalLayout_9->addWidget(label_CountDownReturn);

        stackedWidget->addWidget(page_ReturnDone);

        verticalLayout_7->addWidget(stackedWidget);


        retranslateUi(BookRenewDialog);

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(BookRenewDialog);
    } // setupUi

    void retranslateUi(QDialog *BookRenewDialog)
    {
        BookRenewDialog->setWindowTitle(QCoreApplication::translate("BookRenewDialog", "Renew", nullptr));
        label_Renew->setText(QCoreApplication::translate("BookRenewDialog", "Are you sure you want to renew this book?", nullptr));
        pushButton_Accept->setText(QCoreApplication::translate("BookRenewDialog", "Yes, I want to", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("BookRenewDialog", "No, leave me alone", nullptr));
        label_BookName->setText(QCoreApplication::translate("BookRenewDialog", "TextLabel", nullptr));
        label_ReturnDate->setText(QCoreApplication::translate("BookRenewDialog", "TextLabel", nullptr));
        label_CurrentDate->setText(QCoreApplication::translate("BookRenewDialog", "TextLabel", nullptr));
        label_NewReturnDate->setText(QCoreApplication::translate("BookRenewDialog", "TextLabel", nullptr));
        label_FineDetail->setText(QCoreApplication::translate("BookRenewDialog", "TextLabel", nullptr));
        pushButton_Renew->setText(QCoreApplication::translate("BookRenewDialog", "Renew", nullptr));
        label_QRCode->setText(QString());
        label_ScanHere->setText(QCoreApplication::translate("BookRenewDialog", "Scan the QRCode to pay. The fine will be $0.", nullptr));
        pushButton_Paid->setText(QCoreApplication::translate("BookRenewDialog", "Paid", nullptr));
        label->setText(QCoreApplication::translate("BookRenewDialog", "You have reached your maximum renew.", nullptr));
        label_2->setText(QCoreApplication::translate("BookRenewDialog", "Please return the book.", nullptr));
        pushButton_ForceReturnBook->setText(QCoreApplication::translate("BookRenewDialog", "Return the book", nullptr));
        label_countDown->setText(QCoreApplication::translate("BookRenewDialog", "<html><head/><body><p>You have borrowed this book. </p><p>Closing in 10 seconds...</p></body></html>", nullptr));
        label_CountDownReturn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BookRenewDialog: public Ui_BookRenewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKRENEWDIALOG_H
