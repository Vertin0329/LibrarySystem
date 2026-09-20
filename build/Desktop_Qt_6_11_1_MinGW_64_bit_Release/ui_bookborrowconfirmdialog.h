/********************************************************************************
** Form generated from reading UI file 'bookborrowconfirmdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKBORROWCONFIRMDIALOG_H
#define UI_BOOKBORROWCONFIRMDIALOG_H

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

class Ui_BookBorrowConfirmDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page_brConfirm;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *page_brDone;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_countDown;

    void setupUi(QDialog *BookBorrowConfirmDialog)
    {
        if (BookBorrowConfirmDialog->objectName().isEmpty())
            BookBorrowConfirmDialog->setObjectName("BookBorrowConfirmDialog");
        BookBorrowConfirmDialog->resize(404, 188);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BookBorrowConfirmDialog->sizePolicy().hasHeightForWidth());
        BookBorrowConfirmDialog->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(BookBorrowConfirmDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        stackedWidget = new QStackedWidget(BookBorrowConfirmDialog);
        stackedWidget->setObjectName("stackedWidget");
        page_brConfirm = new QWidget();
        page_brConfirm->setObjectName("page_brConfirm");
        verticalLayout_3 = new QVBoxLayout(page_brConfirm);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(page_brConfirm);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft JhengHei UI\";"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(page_brConfirm);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(page_brConfirm);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout);

        stackedWidget->addWidget(page_brConfirm);
        page_brDone = new QWidget();
        page_brDone->setObjectName("page_brDone");
        verticalLayout_4 = new QVBoxLayout(page_brDone);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_countDown = new QLabel(page_brDone);
        label_countDown->setObjectName("label_countDown");
        label_countDown->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 700 20pt \"Microsoft JhengHei UI\";\n"
"rgb(0, 170, 0)\n"
"}"));
        label_countDown->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_countDown);

        stackedWidget->addWidget(page_brDone);

        verticalLayout_2->addWidget(stackedWidget);


        retranslateUi(BookBorrowConfirmDialog);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(BookBorrowConfirmDialog);
    } // setupUi

    void retranslateUi(QDialog *BookBorrowConfirmDialog)
    {
        BookBorrowConfirmDialog->setWindowTitle(QCoreApplication::translate("BookBorrowConfirmDialog", "Dialog", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("BookBorrowConfirmDialog", "Yes, I want to", nullptr));
        pushButton_2->setText(QCoreApplication::translate("BookBorrowConfirmDialog", "No, leave me alone", nullptr));
        label_countDown->setText(QCoreApplication::translate("BookBorrowConfirmDialog", "<html><head/><body><p>You have borrowed this book. </p><p>Closing in 10 seconds...</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookBorrowConfirmDialog: public Ui_BookBorrowConfirmDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKBORROWCONFIRMDIALOG_H
