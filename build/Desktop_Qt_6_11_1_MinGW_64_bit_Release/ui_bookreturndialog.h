/********************************************************************************
** Form generated from reading UI file 'bookreturndialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKRETURNDIALOG_H
#define UI_BOOKRETURNDIALOG_H

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

class Ui_BookReturnDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page_reConfirm;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_return;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Accept;
    QPushButton *pushButton_Cancel;
    QWidget *page_reDetail;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_BookName;
    QLabel *label_ReturnDate;
    QLabel *label_CurrentDate;
    QLabel *label_FineDetail;
    QPushButton *pushButton_Return;
    QWidget *page_fine;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_QRCode;
    QLabel *label_ScanHere;
    QPushButton *pushButton_paid;
    QWidget *page_reDone;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_countDown;

    void setupUi(QDialog *BookReturnDialog)
    {
        if (BookReturnDialog->objectName().isEmpty())
            BookReturnDialog->setObjectName("BookReturnDialog");
        BookReturnDialog->resize(703, 300);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BookReturnDialog->sizePolicy().hasHeightForWidth());
        BookReturnDialog->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(BookReturnDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        stackedWidget = new QStackedWidget(BookReturnDialog);
        stackedWidget->setObjectName("stackedWidget");
        page_reConfirm = new QWidget();
        page_reConfirm->setObjectName("page_reConfirm");
        verticalLayout_3 = new QVBoxLayout(page_reConfirm);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_return = new QLabel(page_reConfirm);
        label_return->setObjectName("label_return");
        label_return->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft JhengHei UI\";"));

        verticalLayout->addWidget(label_return);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_Accept = new QPushButton(page_reConfirm);
        pushButton_Accept->setObjectName("pushButton_Accept");

        horizontalLayout->addWidget(pushButton_Accept);

        pushButton_Cancel = new QPushButton(page_reConfirm);
        pushButton_Cancel->setObjectName("pushButton_Cancel");

        horizontalLayout->addWidget(pushButton_Cancel);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 5);
        verticalLayout->setStretch(1, 1);

        verticalLayout_3->addLayout(verticalLayout);

        stackedWidget->addWidget(page_reConfirm);
        page_reDetail = new QWidget();
        page_reDetail->setObjectName("page_reDetail");
        verticalLayout_5 = new QVBoxLayout(page_reDetail);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_BookName = new QLabel(page_reDetail);
        label_BookName->setObjectName("label_BookName");

        verticalLayout_5->addWidget(label_BookName);

        label_ReturnDate = new QLabel(page_reDetail);
        label_ReturnDate->setObjectName("label_ReturnDate");

        verticalLayout_5->addWidget(label_ReturnDate);

        label_CurrentDate = new QLabel(page_reDetail);
        label_CurrentDate->setObjectName("label_CurrentDate");

        verticalLayout_5->addWidget(label_CurrentDate);

        label_FineDetail = new QLabel(page_reDetail);
        label_FineDetail->setObjectName("label_FineDetail");

        verticalLayout_5->addWidget(label_FineDetail);

        pushButton_Return = new QPushButton(page_reDetail);
        pushButton_Return->setObjectName("pushButton_Return");

        verticalLayout_5->addWidget(pushButton_Return);

        stackedWidget->addWidget(page_reDetail);
        page_fine = new QWidget();
        page_fine->setObjectName("page_fine");
        horizontalLayout_2 = new QHBoxLayout(page_fine);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_QRCode = new QLabel(page_fine);
        label_QRCode->setObjectName("label_QRCode");
        label_QRCode->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_QRCode);

        label_ScanHere = new QLabel(page_fine);
        label_ScanHere->setObjectName("label_ScanHere");
        label_ScanHere->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_ScanHere);

        pushButton_paid = new QPushButton(page_fine);
        pushButton_paid->setObjectName("pushButton_paid");

        verticalLayout_6->addWidget(pushButton_paid);

        verticalLayout_6->setStretch(0, 5);
        verticalLayout_6->setStretch(1, 1);

        horizontalLayout_2->addLayout(verticalLayout_6);

        stackedWidget->addWidget(page_fine);
        page_reDone = new QWidget();
        page_reDone->setObjectName("page_reDone");
        verticalLayout_4 = new QVBoxLayout(page_reDone);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_countDown = new QLabel(page_reDone);
        label_countDown->setObjectName("label_countDown");
        label_countDown->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 700 20pt \"Microsoft JhengHei UI\";\n"
"rgb(0, 170, 0)\n"
"}"));
        label_countDown->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_countDown);

        stackedWidget->addWidget(page_reDone);

        verticalLayout_2->addWidget(stackedWidget);


        retranslateUi(BookReturnDialog);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(BookReturnDialog);
    } // setupUi

    void retranslateUi(QDialog *BookReturnDialog)
    {
        BookReturnDialog->setWindowTitle(QCoreApplication::translate("BookReturnDialog", "Dialog", nullptr));
        label_return->setText(QCoreApplication::translate("BookReturnDialog", "Are you sure you want to return this book?", nullptr));
        pushButton_Accept->setText(QCoreApplication::translate("BookReturnDialog", "Yes, I want to", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("BookReturnDialog", "No, leave me alone", nullptr));
        label_BookName->setText(QCoreApplication::translate("BookReturnDialog", "TextLabel", nullptr));
        label_ReturnDate->setText(QCoreApplication::translate("BookReturnDialog", "TextLabel", nullptr));
        label_CurrentDate->setText(QCoreApplication::translate("BookReturnDialog", "TextLabel", nullptr));
        label_FineDetail->setText(QCoreApplication::translate("BookReturnDialog", "TextLabel", nullptr));
        pushButton_Return->setText(QCoreApplication::translate("BookReturnDialog", "Return", nullptr));
        label_QRCode->setText(QString());
        label_ScanHere->setText(QCoreApplication::translate("BookReturnDialog", "Scan the QRCode to pay.", nullptr));
        pushButton_paid->setText(QCoreApplication::translate("BookReturnDialog", "Paid", nullptr));
        label_countDown->setText(QCoreApplication::translate("BookReturnDialog", "<html><head/><body><p>You have borrowed this book. </p><p>Closing in 10 seconds...</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookReturnDialog: public Ui_BookReturnDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKRETURNDIALOG_H
