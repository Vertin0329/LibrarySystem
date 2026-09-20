/********************************************************************************
** Form generated from reading UI file 'editprofiledialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFILEDIALOG_H
#define UI_EDITPROFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditProfileDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_UserID;
    QLabel *label_Name;
    QLabel *label_CurrentPW;
    QLabel *label_NewPW;
    QLabel *label_ConfirmPW;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_UserID;
    QLineEdit *lineEdit_Name;
    QLineEdit *lineEdit_CurrentPW;
    QLineEdit *lineEdit_NewPW;
    QLineEdit *lineEdit_ConfirmPW;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditProfileDialog)
    {
        if (EditProfileDialog->objectName().isEmpty())
            EditProfileDialog->setObjectName("EditProfileDialog");
        EditProfileDialog->resize(654, 465);
        verticalLayout_4 = new QVBoxLayout(EditProfileDialog);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_UserID = new QLabel(EditProfileDialog);
        label_UserID->setObjectName("label_UserID");

        verticalLayout_2->addWidget(label_UserID);

        label_Name = new QLabel(EditProfileDialog);
        label_Name->setObjectName("label_Name");

        verticalLayout_2->addWidget(label_Name);

        label_CurrentPW = new QLabel(EditProfileDialog);
        label_CurrentPW->setObjectName("label_CurrentPW");

        verticalLayout_2->addWidget(label_CurrentPW);

        label_NewPW = new QLabel(EditProfileDialog);
        label_NewPW->setObjectName("label_NewPW");

        verticalLayout_2->addWidget(label_NewPW);

        label_ConfirmPW = new QLabel(EditProfileDialog);
        label_ConfirmPW->setObjectName("label_ConfirmPW");

        verticalLayout_2->addWidget(label_ConfirmPW);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lineEdit_UserID = new QLineEdit(EditProfileDialog);
        lineEdit_UserID->setObjectName("lineEdit_UserID");

        verticalLayout->addWidget(lineEdit_UserID);

        lineEdit_Name = new QLineEdit(EditProfileDialog);
        lineEdit_Name->setObjectName("lineEdit_Name");

        verticalLayout->addWidget(lineEdit_Name);

        lineEdit_CurrentPW = new QLineEdit(EditProfileDialog);
        lineEdit_CurrentPW->setObjectName("lineEdit_CurrentPW");

        verticalLayout->addWidget(lineEdit_CurrentPW);

        lineEdit_NewPW = new QLineEdit(EditProfileDialog);
        lineEdit_NewPW->setObjectName("lineEdit_NewPW");

        verticalLayout->addWidget(lineEdit_NewPW);

        lineEdit_ConfirmPW = new QLineEdit(EditProfileDialog);
        lineEdit_ConfirmPW->setObjectName("lineEdit_ConfirmPW");

        verticalLayout->addWidget(lineEdit_ConfirmPW);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(EditProfileDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_3->addWidget(buttonBox);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(EditProfileDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EditProfileDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EditProfileDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EditProfileDialog);
    } // setupUi

    void retranslateUi(QDialog *EditProfileDialog)
    {
        EditProfileDialog->setWindowTitle(QCoreApplication::translate("EditProfileDialog", "Dialog", nullptr));
        label_UserID->setText(QCoreApplication::translate("EditProfileDialog", "User ID:", nullptr));
        label_Name->setText(QCoreApplication::translate("EditProfileDialog", "Name:", nullptr));
        label_CurrentPW->setText(QCoreApplication::translate("EditProfileDialog", "Current Password:", nullptr));
        label_NewPW->setText(QCoreApplication::translate("EditProfileDialog", "New Password:", nullptr));
        label_ConfirmPW->setText(QCoreApplication::translate("EditProfileDialog", "Confirm Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditProfileDialog: public Ui_EditProfileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROFILEDIALOG_H
