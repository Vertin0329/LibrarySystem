/********************************************************************************
** Form generated from reading UI file 'filterbookforlibrariandialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERBOOKFORLIBRARIANDIALOG_H
#define UI_FILTERBOOKFORLIBRARIANDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FilterBookForLibrarianDialog
{
public:
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_Status;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_InDisplay;
    QRadioButton *radioButton_Missing;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton_Loan;
    QRadioButton *radioButton_Damaged;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *radioButton_Withdrawn;
    QRadioButton *radioButton_SuspectedMissing;
    QGroupBox *groupBox_Language;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox_Language;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_7;
    QComboBox *comboBox_Genre;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FilterBookForLibrarianDialog)
    {
        if (FilterBookForLibrarianDialog->objectName().isEmpty())
            FilterBookForLibrarianDialog->setObjectName("FilterBookForLibrarianDialog");
        FilterBookForLibrarianDialog->resize(629, 442);
        verticalLayout_6 = new QVBoxLayout(FilterBookForLibrarianDialog);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        groupBox_Status = new QGroupBox(FilterBookForLibrarianDialog);
        groupBox_Status->setObjectName("groupBox_Status");
        horizontalLayout = new QHBoxLayout(groupBox_Status);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        radioButton_InDisplay = new QRadioButton(groupBox_Status);
        radioButton_InDisplay->setObjectName("radioButton_InDisplay");

        verticalLayout_2->addWidget(radioButton_InDisplay);

        radioButton_Missing = new QRadioButton(groupBox_Status);
        radioButton_Missing->setObjectName("radioButton_Missing");

        verticalLayout_2->addWidget(radioButton_Missing);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        radioButton_Loan = new QRadioButton(groupBox_Status);
        radioButton_Loan->setObjectName("radioButton_Loan");

        verticalLayout_3->addWidget(radioButton_Loan);

        radioButton_Damaged = new QRadioButton(groupBox_Status);
        radioButton_Damaged->setObjectName("radioButton_Damaged");

        verticalLayout_3->addWidget(radioButton_Damaged);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        radioButton_Withdrawn = new QRadioButton(groupBox_Status);
        radioButton_Withdrawn->setObjectName("radioButton_Withdrawn");

        verticalLayout_5->addWidget(radioButton_Withdrawn);

        radioButton_SuspectedMissing = new QRadioButton(groupBox_Status);
        radioButton_SuspectedMissing->setObjectName("radioButton_SuspectedMissing");

        verticalLayout_5->addWidget(radioButton_SuspectedMissing);


        horizontalLayout_2->addLayout(verticalLayout_5);


        horizontalLayout->addLayout(horizontalLayout_2);


        verticalLayout_4->addWidget(groupBox_Status);

        groupBox_Language = new QGroupBox(FilterBookForLibrarianDialog);
        groupBox_Language->setObjectName("groupBox_Language");
        verticalLayout = new QVBoxLayout(groupBox_Language);
        verticalLayout->setObjectName("verticalLayout");
        comboBox_Language = new QComboBox(groupBox_Language);
        comboBox_Language->addItem(QString());
        comboBox_Language->addItem(QString());
        comboBox_Language->addItem(QString());
        comboBox_Language->addItem(QString());
        comboBox_Language->addItem(QString());
        comboBox_Language->addItem(QString());
        comboBox_Language->addItem(QString());
        comboBox_Language->addItem(QString());
        comboBox_Language->addItem(QString());
        comboBox_Language->addItem(QString());
        comboBox_Language->addItem(QString());
        comboBox_Language->addItem(QString());
        comboBox_Language->addItem(QString());
        comboBox_Language->addItem(QString());
        comboBox_Language->setObjectName("comboBox_Language");

        verticalLayout->addWidget(comboBox_Language);


        verticalLayout_4->addWidget(groupBox_Language);

        groupBox = new QGroupBox(FilterBookForLibrarianDialog);
        groupBox->setObjectName("groupBox");
        verticalLayout_7 = new QVBoxLayout(groupBox);
        verticalLayout_7->setObjectName("verticalLayout_7");
        comboBox_Genre = new QComboBox(groupBox);
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->addItem(QString());
        comboBox_Genre->setObjectName("comboBox_Genre");

        verticalLayout_7->addWidget(comboBox_Genre);


        verticalLayout_4->addWidget(groupBox);

        label = new QLabel(FilterBookForLibrarianDialog);
        label->setObjectName("label");

        verticalLayout_4->addWidget(label);

        buttonBox = new QDialogButtonBox(FilterBookForLibrarianDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_4->addWidget(buttonBox);

        verticalLayout_4->setStretch(0, 2);
        verticalLayout_4->setStretch(1, 2);
        verticalLayout_4->setStretch(2, 2);

        verticalLayout_6->addLayout(verticalLayout_4);


        retranslateUi(FilterBookForLibrarianDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FilterBookForLibrarianDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FilterBookForLibrarianDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FilterBookForLibrarianDialog);
    } // setupUi

    void retranslateUi(QDialog *FilterBookForLibrarianDialog)
    {
        FilterBookForLibrarianDialog->setWindowTitle(QCoreApplication::translate("FilterBookForLibrarianDialog", "Dialog", nullptr));
        groupBox_Status->setTitle(QCoreApplication::translate("FilterBookForLibrarianDialog", "Status", nullptr));
        radioButton_InDisplay->setText(QCoreApplication::translate("FilterBookForLibrarianDialog", "In Display", nullptr));
        radioButton_Missing->setText(QCoreApplication::translate("FilterBookForLibrarianDialog", "Missing", nullptr));
        radioButton_Loan->setText(QCoreApplication::translate("FilterBookForLibrarianDialog", "Loan", nullptr));
        radioButton_Damaged->setText(QCoreApplication::translate("FilterBookForLibrarianDialog", "Damaged", nullptr));
        radioButton_Withdrawn->setText(QCoreApplication::translate("FilterBookForLibrarianDialog", "Withdrawn", nullptr));
        radioButton_SuspectedMissing->setText(QCoreApplication::translate("FilterBookForLibrarianDialog", "Suspected Missing", nullptr));
        groupBox_Language->setTitle(QCoreApplication::translate("FilterBookForLibrarianDialog", "Langauge", nullptr));
        comboBox_Language->setItemText(0, QString());
        comboBox_Language->setItemText(1, QCoreApplication::translate("FilterBookForLibrarianDialog", "English", nullptr));
        comboBox_Language->setItemText(2, QCoreApplication::translate("FilterBookForLibrarianDialog", "German", nullptr));
        comboBox_Language->setItemText(3, QCoreApplication::translate("FilterBookForLibrarianDialog", "French", nullptr));
        comboBox_Language->setItemText(4, QCoreApplication::translate("FilterBookForLibrarianDialog", "Dutch", nullptr));
        comboBox_Language->setItemText(5, QCoreApplication::translate("FilterBookForLibrarianDialog", "Italian", nullptr));
        comboBox_Language->setItemText(6, QCoreApplication::translate("FilterBookForLibrarianDialog", "Spanish", nullptr));
        comboBox_Language->setItemText(7, QCoreApplication::translate("FilterBookForLibrarianDialog", "Finnish", nullptr));
        comboBox_Language->setItemText(8, QCoreApplication::translate("FilterBookForLibrarianDialog", "Hangarian", nullptr));
        comboBox_Language->setItemText(9, QCoreApplication::translate("FilterBookForLibrarianDialog", "Portuguese", nullptr));
        comboBox_Language->setItemText(10, QCoreApplication::translate("FilterBookForLibrarianDialog", "Esperanto", nullptr));
        comboBox_Language->setItemText(11, QCoreApplication::translate("FilterBookForLibrarianDialog", "Latin", nullptr));
        comboBox_Language->setItemText(12, QCoreApplication::translate("FilterBookForLibrarianDialog", "Norwegian", nullptr));
        comboBox_Language->setItemText(13, QCoreApplication::translate("FilterBookForLibrarianDialog", "Afrikaans", nullptr));

        groupBox->setTitle(QCoreApplication::translate("FilterBookForLibrarianDialog", "Genre", nullptr));
        comboBox_Genre->setItemText(0, QString());
        comboBox_Genre->setItemText(1, QCoreApplication::translate("FilterBookForLibrarianDialog", "Mystery", nullptr));
        comboBox_Genre->setItemText(2, QCoreApplication::translate("FilterBookForLibrarianDialog", "Thriller and Suspense", nullptr));
        comboBox_Genre->setItemText(3, QCoreApplication::translate("FilterBookForLibrarianDialog", "Horror", nullptr));
        comboBox_Genre->setItemText(4, QCoreApplication::translate("FilterBookForLibrarianDialog", "Science Fiction", nullptr));
        comboBox_Genre->setItemText(5, QCoreApplication::translate("FilterBookForLibrarianDialog", "Fantasy", nullptr));
        comboBox_Genre->setItemText(6, QCoreApplication::translate("FilterBookForLibrarianDialog", "High Fantasy", nullptr));
        comboBox_Genre->setItemText(7, QCoreApplication::translate("FilterBookForLibrarianDialog", "Urban Fantasy", nullptr));
        comboBox_Genre->setItemText(8, QCoreApplication::translate("FilterBookForLibrarianDialog", "Grimdark Fantasy", nullptr));
        comboBox_Genre->setItemText(9, QCoreApplication::translate("FilterBookForLibrarianDialog", "Dystopian Fiction", nullptr));
        comboBox_Genre->setItemText(10, QCoreApplication::translate("FilterBookForLibrarianDialog", "Romance", nullptr));
        comboBox_Genre->setItemText(11, QCoreApplication::translate("FilterBookForLibrarianDialog", "Romantasy", nullptr));
        comboBox_Genre->setItemText(12, QCoreApplication::translate("FilterBookForLibrarianDialog", "Historical Fiction", nullptr));
        comboBox_Genre->setItemText(13, QCoreApplication::translate("FilterBookForLibrarianDialog", "Comtemporary Fiction", nullptr));
        comboBox_Genre->setItemText(14, QCoreApplication::translate("FilterBookForLibrarianDialog", "Literary Fiction", nullptr));
        comboBox_Genre->setItemText(15, QCoreApplication::translate("FilterBookForLibrarianDialog", "Young Adult", nullptr));
        comboBox_Genre->setItemText(16, QCoreApplication::translate("FilterBookForLibrarianDialog", "New Adult", nullptr));
        comboBox_Genre->setItemText(17, QCoreApplication::translate("FilterBookForLibrarianDialog", "Xenofiction", nullptr));
        comboBox_Genre->setItemText(18, QCoreApplication::translate("FilterBookForLibrarianDialog", "Children's Fiction", nullptr));
        comboBox_Genre->setItemText(19, QCoreApplication::translate("FilterBookForLibrarianDialog", "Graphic Novel", nullptr));
        comboBox_Genre->setItemText(20, QCoreApplication::translate("FilterBookForLibrarianDialog", "Manga", nullptr));
        comboBox_Genre->setItemText(21, QCoreApplication::translate("FilterBookForLibrarianDialog", "Short Story", nullptr));
        comboBox_Genre->setItemText(22, QCoreApplication::translate("FilterBookForLibrarianDialog", "Novella", nullptr));
        comboBox_Genre->setItemText(23, QCoreApplication::translate("FilterBookForLibrarianDialog", "Autobiography", nullptr));
        comboBox_Genre->setItemText(24, QCoreApplication::translate("FilterBookForLibrarianDialog", "Memoir", nullptr));
        comboBox_Genre->setItemText(25, QCoreApplication::translate("FilterBookForLibrarianDialog", "Biography", nullptr));
        comboBox_Genre->setItemText(26, QCoreApplication::translate("FilterBookForLibrarianDialog", "Self-help", nullptr));
        comboBox_Genre->setItemText(27, QCoreApplication::translate("FilterBookForLibrarianDialog", "Parenting", nullptr));
        comboBox_Genre->setItemText(28, QCoreApplication::translate("FilterBookForLibrarianDialog", "Food and Drink", nullptr));
        comboBox_Genre->setItemText(29, QCoreApplication::translate("FilterBookForLibrarianDialog", "Photography", nullptr));
        comboBox_Genre->setItemText(30, QCoreApplication::translate("FilterBookForLibrarianDialog", "History", nullptr));
        comboBox_Genre->setItemText(31, QCoreApplication::translate("FilterBookForLibrarianDialog", "Business", nullptr));
        comboBox_Genre->setItemText(32, QCoreApplication::translate("FilterBookForLibrarianDialog", "Humor", nullptr));
        comboBox_Genre->setItemText(33, QCoreApplication::translate("FilterBookForLibrarianDialog", "True Crime", nullptr));
        comboBox_Genre->setItemText(34, QCoreApplication::translate("FilterBookForLibrarianDialog", "Religion and Spirituality", nullptr));
        comboBox_Genre->setItemText(35, QCoreApplication::translate("FilterBookForLibrarianDialog", "Philosophy", nullptr));
        comboBox_Genre->setItemText(36, QCoreApplication::translate("FilterBookForLibrarianDialog", "Health and Fitness", nullptr));
        comboBox_Genre->setItemText(37, QCoreApplication::translate("FilterBookForLibrarianDialog", "Science", nullptr));
        comboBox_Genre->setItemText(38, QCoreApplication::translate("FilterBookForLibrarianDialog", "Technology", nullptr));
        comboBox_Genre->setItemText(39, QCoreApplication::translate("FilterBookForLibrarianDialog", "Crafts and DIY", nullptr));
        comboBox_Genre->setItemText(40, QCoreApplication::translate("FilterBookForLibrarianDialog", "Learning and Education", nullptr));
        comboBox_Genre->setItemText(41, QCoreApplication::translate("FilterBookForLibrarianDialog", "Essays", nullptr));
        comboBox_Genre->setItemText(42, QCoreApplication::translate("FilterBookForLibrarianDialog", "Gardening and Homesteading", nullptr));
        comboBox_Genre->setItemText(43, QCoreApplication::translate("FilterBookForLibrarianDialog", "Music", nullptr));
        comboBox_Genre->setItemText(44, QCoreApplication::translate("FilterBookForLibrarianDialog", "Children's", nullptr));
        comboBox_Genre->setItemText(45, QCoreApplication::translate("FilterBookForLibrarianDialog", "Other Non-Fiction", nullptr));

        label->setText(QCoreApplication::translate("FilterBookForLibrarianDialog", "Leave blank to show full list", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FilterBookForLibrarianDialog: public Ui_FilterBookForLibrarianDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERBOOKFORLIBRARIANDIALOG_H
