/********************************************************************************
** Form generated from reading UI file 'logoutconfirmdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGOUTCONFIRMDIALOG_H
#define UI_LOGOUTCONFIRMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LogoutConfirmDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_WarningIcon;
    QLabel *label_WarningText;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LogoutConfirmDialog)
    {
        if (LogoutConfirmDialog->objectName().isEmpty())
            LogoutConfirmDialog->setObjectName("LogoutConfirmDialog");
        LogoutConfirmDialog->resize(404, 89);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/png-clipart-symbol-computer-icons-unicode-notice-miscellaneous-angle.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        LogoutConfirmDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(LogoutConfirmDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_WarningIcon = new QLabel(LogoutConfirmDialog);
        label_WarningIcon->setObjectName("label_WarningIcon");
        label_WarningIcon->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_WarningIcon);

        label_WarningText = new QLabel(LogoutConfirmDialog);
        label_WarningText->setObjectName("label_WarningText");

        horizontalLayout->addWidget(label_WarningText);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 9);

        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(LogoutConfirmDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LogoutConfirmDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LogoutConfirmDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LogoutConfirmDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LogoutConfirmDialog);
    } // setupUi

    void retranslateUi(QDialog *LogoutConfirmDialog)
    {
        LogoutConfirmDialog->setWindowTitle(QCoreApplication::translate("LogoutConfirmDialog", "Warning", nullptr));
        label_WarningIcon->setText(QString());
        label_WarningText->setText(QCoreApplication::translate("LogoutConfirmDialog", "Are you sure you want to log out?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogoutConfirmDialog: public Ui_LogoutConfirmDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGOUTCONFIRMDIALOG_H
