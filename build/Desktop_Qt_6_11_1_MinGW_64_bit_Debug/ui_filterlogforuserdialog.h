/********************************************************************************
** Form generated from reading UI file 'filterlogforuserdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERLOGFORUSERDIALOG_H
#define UI_FILTERLOGFORUSERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FilterLogForUserDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_Borrowing;
    QRadioButton *radioButton_Returned;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_NoFine;
    QRadioButton *radioButton_Fined;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FilterLogForUserDialog)
    {
        if (FilterLogForUserDialog->objectName().isEmpty())
            FilterLogForUserDialog->setObjectName("FilterLogForUserDialog");
        FilterLogForUserDialog->resize(390, 240);
        verticalLayout_2 = new QVBoxLayout(FilterLogForUserDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(FilterLogForUserDialog);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        radioButton_Borrowing = new QRadioButton(groupBox);
        radioButton_Borrowing->setObjectName("radioButton_Borrowing");

        horizontalLayout->addWidget(radioButton_Borrowing);

        radioButton_Returned = new QRadioButton(groupBox);
        radioButton_Returned->setObjectName("radioButton_Returned");

        horizontalLayout->addWidget(radioButton_Returned);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(FilterLogForUserDialog);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        radioButton_NoFine = new QRadioButton(groupBox_2);
        radioButton_NoFine->setObjectName("radioButton_NoFine");

        horizontalLayout_2->addWidget(radioButton_NoFine);

        radioButton_Fined = new QRadioButton(groupBox_2);
        radioButton_Fined->setObjectName("radioButton_Fined");

        horizontalLayout_2->addWidget(radioButton_Fined);


        verticalLayout->addWidget(groupBox_2);

        label = new QLabel(FilterLogForUserDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 2);

        verticalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(FilterLogForUserDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(FilterLogForUserDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FilterLogForUserDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FilterLogForUserDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FilterLogForUserDialog);
    } // setupUi

    void retranslateUi(QDialog *FilterLogForUserDialog)
    {
        FilterLogForUserDialog->setWindowTitle(QCoreApplication::translate("FilterLogForUserDialog", "Filter", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FilterLogForUserDialog", "Status", nullptr));
        radioButton_Borrowing->setText(QCoreApplication::translate("FilterLogForUserDialog", "Borrowing", nullptr));
        radioButton_Returned->setText(QCoreApplication::translate("FilterLogForUserDialog", "Returned", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("FilterLogForUserDialog", "Fine", nullptr));
        radioButton_NoFine->setText(QCoreApplication::translate("FilterLogForUserDialog", "No Fine", nullptr));
        radioButton_Fined->setText(QCoreApplication::translate("FilterLogForUserDialog", "Fined", nullptr));
        label->setText(QCoreApplication::translate("FilterLogForUserDialog", "Leave blank to show full list", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FilterLogForUserDialog: public Ui_FilterLogForUserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERLOGFORUSERDIALOG_H
