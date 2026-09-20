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

QT_BEGIN_NAMESPACE

class Ui_AccountVerifyDialog
{
public:

    void setupUi(QDialog *AccountVerifyDialog)
    {
        if (AccountVerifyDialog->objectName().isEmpty())
            AccountVerifyDialog->setObjectName("AccountVerifyDialog");
        AccountVerifyDialog->resize(400, 300);

        retranslateUi(AccountVerifyDialog);

        QMetaObject::connectSlotsByName(AccountVerifyDialog);
    } // setupUi

    void retranslateUi(QDialog *AccountVerifyDialog)
    {
        AccountVerifyDialog->setWindowTitle(QCoreApplication::translate("AccountVerifyDialog", "Reset Password Window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AccountVerifyDialog: public Ui_AccountVerifyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTVERIFYDIALOG_H
