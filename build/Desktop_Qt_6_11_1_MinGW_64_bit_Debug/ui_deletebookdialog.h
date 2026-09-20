/********************************************************************************
** Form generated from reading UI file 'deletebookdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEBOOKDIALOG_H
#define UI_DELETEBOOKDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteBookDialog
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_WarningIcon;
    QLabel *label_WarningText;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_Confirm_2;
    QPushButton *pushButton_Cancel;
    QDialogButtonBox *buttonBox;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_Deleted;

    void setupUi(QDialog *DeleteBookDialog)
    {
        if (DeleteBookDialog->objectName().isEmpty())
            DeleteBookDialog->setObjectName("DeleteBookDialog");
        DeleteBookDialog->resize(407, 128);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DeleteBookDialog->sizePolicy().hasHeightForWidth());
        DeleteBookDialog->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/png-clipart-symbol-computer-icons-unicode-notice-miscellaneous-angle.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        DeleteBookDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DeleteBookDialog);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(DeleteBookDialog);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_WarningIcon = new QLabel(page);
        label_WarningIcon->setObjectName("label_WarningIcon");
        label_WarningIcon->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_WarningIcon);

        label_WarningText = new QLabel(page);
        label_WarningText->setObjectName("label_WarningText");

        horizontalLayout->addWidget(label_WarningText);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 9);

        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_Confirm_2 = new QPushButton(page);
        pushButton_Confirm_2->setObjectName("pushButton_Confirm_2");

        horizontalLayout_2->addWidget(pushButton_Confirm_2);

        pushButton_Cancel = new QPushButton(page);
        pushButton_Cancel->setObjectName("pushButton_Cancel");

        horizontalLayout_2->addWidget(pushButton_Cancel);


        verticalLayout_2->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(page);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::NoButton);

        verticalLayout_2->addWidget(buttonBox);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        verticalLayout_3 = new QVBoxLayout(page_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_Deleted = new QLabel(page_2);
        label_Deleted->setObjectName("label_Deleted");
        label_Deleted->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_Deleted);

        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(DeleteBookDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DeleteBookDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DeleteBookDialog, qOverload<>(&QDialog::reject));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DeleteBookDialog);
    } // setupUi

    void retranslateUi(QDialog *DeleteBookDialog)
    {
        DeleteBookDialog->setWindowTitle(QCoreApplication::translate("DeleteBookDialog", "Delete Book", nullptr));
        label_WarningIcon->setText(QString());
        label_WarningText->setText(QCoreApplication::translate("DeleteBookDialog", "Are you sure you want to delete this book?", nullptr));
        pushButton_Confirm_2->setText(QCoreApplication::translate("DeleteBookDialog", "Confirm", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("DeleteBookDialog", "Cancel", nullptr));
        label_Deleted->setText(QCoreApplication::translate("DeleteBookDialog", "Book Deleted!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteBookDialog: public Ui_DeleteBookDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEBOOKDIALOG_H
