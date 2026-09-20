/********************************************************************************
** Form generated from reading UI file 'filterdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERDIALOG_H
#define UI_FILTERDIALOG_H

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

class Ui_filterDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_Status;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_Available;
    QRadioButton *radioButton_Unavailable;
    QRadioButton *radioButton_Borrowed;
    QGroupBox *groupBox_Language;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox_Language;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_7;
    QComboBox *comboBox_Genre;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *filterDialog)
    {
        if (filterDialog->objectName().isEmpty())
            filterDialog->setObjectName("filterDialog");
        filterDialog->resize(502, 371);
        verticalLayout_2 = new QVBoxLayout(filterDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox_Status = new QGroupBox(filterDialog);
        groupBox_Status->setObjectName("groupBox_Status");
        horizontalLayout = new QHBoxLayout(groupBox_Status);
        horizontalLayout->setObjectName("horizontalLayout");
        radioButton_Available = new QRadioButton(groupBox_Status);
        radioButton_Available->setObjectName("radioButton_Available");

        horizontalLayout->addWidget(radioButton_Available);

        radioButton_Unavailable = new QRadioButton(groupBox_Status);
        radioButton_Unavailable->setObjectName("radioButton_Unavailable");

        horizontalLayout->addWidget(radioButton_Unavailable);

        radioButton_Borrowed = new QRadioButton(groupBox_Status);
        radioButton_Borrowed->setObjectName("radioButton_Borrowed");

        horizontalLayout->addWidget(radioButton_Borrowed);


        verticalLayout_3->addWidget(groupBox_Status);

        groupBox_Language = new QGroupBox(filterDialog);
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


        verticalLayout_3->addWidget(groupBox_Language);

        groupBox = new QGroupBox(filterDialog);
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


        verticalLayout_3->addWidget(groupBox);

        label = new QLabel(filterDialog);
        label->setObjectName("label");

        verticalLayout_3->addWidget(label);

        buttonBox = new QDialogButtonBox(filterDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_3->addWidget(buttonBox);

        verticalLayout_3->setStretch(1, 2);
        verticalLayout_3->setStretch(2, 2);

        verticalLayout_2->addLayout(verticalLayout_3);


        retranslateUi(filterDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, filterDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, filterDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(filterDialog);
    } // setupUi

    void retranslateUi(QDialog *filterDialog)
    {
        filterDialog->setWindowTitle(QCoreApplication::translate("filterDialog", "Filter", nullptr));
        groupBox_Status->setTitle(QCoreApplication::translate("filterDialog", "Status", nullptr));
        radioButton_Available->setText(QCoreApplication::translate("filterDialog", "Available", nullptr));
        radioButton_Unavailable->setText(QCoreApplication::translate("filterDialog", "Unavailable", nullptr));
        radioButton_Borrowed->setText(QCoreApplication::translate("filterDialog", "Borrowed", nullptr));
        groupBox_Language->setTitle(QCoreApplication::translate("filterDialog", "Langauge", nullptr));
        comboBox_Language->setItemText(0, QString());
        comboBox_Language->setItemText(1, QCoreApplication::translate("filterDialog", "English", nullptr));
        comboBox_Language->setItemText(2, QCoreApplication::translate("filterDialog", "German", nullptr));
        comboBox_Language->setItemText(3, QCoreApplication::translate("filterDialog", "French", nullptr));
        comboBox_Language->setItemText(4, QCoreApplication::translate("filterDialog", "Dutch", nullptr));
        comboBox_Language->setItemText(5, QCoreApplication::translate("filterDialog", "Italian", nullptr));
        comboBox_Language->setItemText(6, QCoreApplication::translate("filterDialog", "Spanish", nullptr));
        comboBox_Language->setItemText(7, QCoreApplication::translate("filterDialog", "Finnish", nullptr));
        comboBox_Language->setItemText(8, QCoreApplication::translate("filterDialog", "Hangarian", nullptr));
        comboBox_Language->setItemText(9, QCoreApplication::translate("filterDialog", "Portuguese", nullptr));
        comboBox_Language->setItemText(10, QCoreApplication::translate("filterDialog", "Esperanto", nullptr));
        comboBox_Language->setItemText(11, QCoreApplication::translate("filterDialog", "Latin", nullptr));
        comboBox_Language->setItemText(12, QCoreApplication::translate("filterDialog", "Norwegian", nullptr));
        comboBox_Language->setItemText(13, QCoreApplication::translate("filterDialog", "Afrikaans", nullptr));

        groupBox->setTitle(QCoreApplication::translate("filterDialog", "Genre", nullptr));
        comboBox_Genre->setItemText(0, QString());
        comboBox_Genre->setItemText(1, QCoreApplication::translate("filterDialog", "Mystery", nullptr));
        comboBox_Genre->setItemText(2, QCoreApplication::translate("filterDialog", "Thriller and Suspense", nullptr));
        comboBox_Genre->setItemText(3, QCoreApplication::translate("filterDialog", "Horror", nullptr));
        comboBox_Genre->setItemText(4, QCoreApplication::translate("filterDialog", "Science Fiction", nullptr));
        comboBox_Genre->setItemText(5, QCoreApplication::translate("filterDialog", "Fantasy", nullptr));
        comboBox_Genre->setItemText(6, QCoreApplication::translate("filterDialog", "High Fantasy", nullptr));
        comboBox_Genre->setItemText(7, QCoreApplication::translate("filterDialog", "Urban Fantasy", nullptr));
        comboBox_Genre->setItemText(8, QCoreApplication::translate("filterDialog", "Grimdark Fantasy", nullptr));
        comboBox_Genre->setItemText(9, QCoreApplication::translate("filterDialog", "Dystopian Fiction", nullptr));
        comboBox_Genre->setItemText(10, QCoreApplication::translate("filterDialog", "Romance", nullptr));
        comboBox_Genre->setItemText(11, QCoreApplication::translate("filterDialog", "Romantasy", nullptr));
        comboBox_Genre->setItemText(12, QCoreApplication::translate("filterDialog", "Historical Fiction", nullptr));
        comboBox_Genre->setItemText(13, QCoreApplication::translate("filterDialog", "Comtemporary Fiction", nullptr));
        comboBox_Genre->setItemText(14, QCoreApplication::translate("filterDialog", "Literary Fiction", nullptr));
        comboBox_Genre->setItemText(15, QCoreApplication::translate("filterDialog", "Young Adult", nullptr));
        comboBox_Genre->setItemText(16, QCoreApplication::translate("filterDialog", "New Adult", nullptr));
        comboBox_Genre->setItemText(17, QCoreApplication::translate("filterDialog", "Xenofiction", nullptr));
        comboBox_Genre->setItemText(18, QCoreApplication::translate("filterDialog", "Children's Fiction", nullptr));
        comboBox_Genre->setItemText(19, QCoreApplication::translate("filterDialog", "Graphic Novel", nullptr));
        comboBox_Genre->setItemText(20, QCoreApplication::translate("filterDialog", "Manga", nullptr));
        comboBox_Genre->setItemText(21, QCoreApplication::translate("filterDialog", "Short Story", nullptr));
        comboBox_Genre->setItemText(22, QCoreApplication::translate("filterDialog", "Novella", nullptr));
        comboBox_Genre->setItemText(23, QCoreApplication::translate("filterDialog", "Autobiography", nullptr));
        comboBox_Genre->setItemText(24, QCoreApplication::translate("filterDialog", "Memoir", nullptr));
        comboBox_Genre->setItemText(25, QCoreApplication::translate("filterDialog", "Biography", nullptr));
        comboBox_Genre->setItemText(26, QCoreApplication::translate("filterDialog", "Self-help", nullptr));
        comboBox_Genre->setItemText(27, QCoreApplication::translate("filterDialog", "Parenting", nullptr));
        comboBox_Genre->setItemText(28, QCoreApplication::translate("filterDialog", "Food and Drink", nullptr));
        comboBox_Genre->setItemText(29, QCoreApplication::translate("filterDialog", "Photography", nullptr));
        comboBox_Genre->setItemText(30, QCoreApplication::translate("filterDialog", "History", nullptr));
        comboBox_Genre->setItemText(31, QCoreApplication::translate("filterDialog", "Business", nullptr));
        comboBox_Genre->setItemText(32, QCoreApplication::translate("filterDialog", "Humor", nullptr));
        comboBox_Genre->setItemText(33, QCoreApplication::translate("filterDialog", "True Crime", nullptr));
        comboBox_Genre->setItemText(34, QCoreApplication::translate("filterDialog", "Religion and Spirituality", nullptr));
        comboBox_Genre->setItemText(35, QCoreApplication::translate("filterDialog", "Philosophy", nullptr));
        comboBox_Genre->setItemText(36, QCoreApplication::translate("filterDialog", "Health and Fitness", nullptr));
        comboBox_Genre->setItemText(37, QCoreApplication::translate("filterDialog", "Science", nullptr));
        comboBox_Genre->setItemText(38, QCoreApplication::translate("filterDialog", "Technology", nullptr));
        comboBox_Genre->setItemText(39, QCoreApplication::translate("filterDialog", "Crafts and DIY", nullptr));
        comboBox_Genre->setItemText(40, QCoreApplication::translate("filterDialog", "Learning and Education", nullptr));
        comboBox_Genre->setItemText(41, QCoreApplication::translate("filterDialog", "Essays", nullptr));
        comboBox_Genre->setItemText(42, QCoreApplication::translate("filterDialog", "Gardening and Homesteading", nullptr));
        comboBox_Genre->setItemText(43, QCoreApplication::translate("filterDialog", "Music", nullptr));
        comboBox_Genre->setItemText(44, QCoreApplication::translate("filterDialog", "Children's", nullptr));
        comboBox_Genre->setItemText(45, QCoreApplication::translate("filterDialog", "Other Non-Fiction", nullptr));

        label->setText(QCoreApplication::translate("filterDialog", "Leave blank to show full list", nullptr));
    } // retranslateUi

};

namespace Ui {
    class filterDialog: public Ui_filterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERDIALOG_H
