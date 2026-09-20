/********************************************************************************
** Form generated from reading UI file 'filteruserforlibrariandialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERUSERFORLIBRARIANDIALOG_H
#define UI_FILTERUSERFORLIBRARIANDIALOG_H

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

class Ui_FilterUserForLibrarianDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_AccType;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_Admin;
    QRadioButton *radioButton_User;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FilterUserForLibrarianDialog)
    {
        if (FilterUserForLibrarianDialog->objectName().isEmpty())
            FilterUserForLibrarianDialog->setObjectName("FilterUserForLibrarianDialog");
        FilterUserForLibrarianDialog->resize(413, 173);
        verticalLayout_2 = new QVBoxLayout(FilterUserForLibrarianDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        groupBox_AccType = new QGroupBox(FilterUserForLibrarianDialog);
        groupBox_AccType->setObjectName("groupBox_AccType");
        horizontalLayout = new QHBoxLayout(groupBox_AccType);
        horizontalLayout->setObjectName("horizontalLayout");
        radioButton_Admin = new QRadioButton(groupBox_AccType);
        radioButton_Admin->setObjectName("radioButton_Admin");

        horizontalLayout->addWidget(radioButton_Admin);

        radioButton_User = new QRadioButton(groupBox_AccType);
        radioButton_User->setObjectName("radioButton_User");

        horizontalLayout->addWidget(radioButton_User);


        verticalLayout_4->addWidget(groupBox_AccType);

        label = new QLabel(FilterUserForLibrarianDialog);
        label->setObjectName("label");

        verticalLayout_4->addWidget(label);

        buttonBox = new QDialogButtonBox(FilterUserForLibrarianDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_4->addWidget(buttonBox);

        verticalLayout_4->setStretch(0, 2);

        verticalLayout_2->addLayout(verticalLayout_4);


        retranslateUi(FilterUserForLibrarianDialog);

        QMetaObject::connectSlotsByName(FilterUserForLibrarianDialog);
    } // setupUi

    void retranslateUi(QDialog *FilterUserForLibrarianDialog)
    {
        FilterUserForLibrarianDialog->setWindowTitle(QCoreApplication::translate("FilterUserForLibrarianDialog", "Filter", nullptr));
        groupBox_AccType->setTitle(QCoreApplication::translate("FilterUserForLibrarianDialog", "Account Type", nullptr));
        radioButton_Admin->setText(QCoreApplication::translate("FilterUserForLibrarianDialog", "Admin", nullptr));
        radioButton_User->setText(QCoreApplication::translate("FilterUserForLibrarianDialog", "User", nullptr));
        label->setText(QCoreApplication::translate("FilterUserForLibrarianDialog", "Leave blank to show full list", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FilterUserForLibrarianDialog: public Ui_FilterUserForLibrarianDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERUSERFORLIBRARIANDIALOG_H
