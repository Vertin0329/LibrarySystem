/********************************************************************************
** Form generated from reading UI file 'addnewdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWDIALOG_H
#define UI_ADDNEWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddNewDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_AddBook;
    QRadioButton *radioButton_AddUser;
    QStackedWidget *stackedWidget_AddNew;
    QWidget *page_AddBook;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_Title;
    QLabel *label_Author;
    QLabel *label_Language;
    QLabel *label_IssuedDate;
    QLabel *label_PrimarySubject;
    QLabel *label_LoccClassification;
    QLabel *label_LoccArea;
    QLabel *label_Genre;
    QLabel *label_Bookshelf;
    QLabel *label_URL;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_Title;
    QLineEdit *lineEdit_Author;
    QComboBox *comboBox_Language;
    QLineEdit *lineEdit_IssueDate;
    QLineEdit *lineEdit_PrimartSubject;
    QLineEdit *lineEdit_LoccClassification;
    QLineEdit *lineEdit_LoccArea;
    QComboBox *comboBox_Genre;
    QLineEdit *lineEdit_Bookshelf;
    QLineEdit *lineEdit_URL;
    QWidget *page_AddUser;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_UserID;
    QLabel *label_UserName;
    QVBoxLayout *verticalLayout_5;
    QComboBox *comboBox_AccType;
    QLineEdit *lineEdit_UserName;
    QWidget *page_AccData;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_AccData;
    QPushButton *pushButton;

    void setupUi(QDialog *AddNewDialog)
    {
        if (AddNewDialog->objectName().isEmpty())
            AddNewDialog->setObjectName("AddNewDialog");
        AddNewDialog->resize(857, 566);
        verticalLayout = new QVBoxLayout(AddNewDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        radioButton_AddBook = new QRadioButton(AddNewDialog);
        radioButton_AddBook->setObjectName("radioButton_AddBook");
        radioButton_AddBook->setAcceptDrops(false);
        radioButton_AddBook->setChecked(true);

        horizontalLayout->addWidget(radioButton_AddBook);

        radioButton_AddUser = new QRadioButton(AddNewDialog);
        radioButton_AddUser->setObjectName("radioButton_AddUser");

        horizontalLayout->addWidget(radioButton_AddUser);


        verticalLayout->addLayout(horizontalLayout);

        stackedWidget_AddNew = new QStackedWidget(AddNewDialog);
        stackedWidget_AddNew->setObjectName("stackedWidget_AddNew");
        page_AddBook = new QWidget();
        page_AddBook->setObjectName("page_AddBook");
        horizontalLayout_2 = new QHBoxLayout(page_AddBook);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_Title = new QLabel(page_AddBook);
        label_Title->setObjectName("label_Title");

        verticalLayout_2->addWidget(label_Title);

        label_Author = new QLabel(page_AddBook);
        label_Author->setObjectName("label_Author");

        verticalLayout_2->addWidget(label_Author);

        label_Language = new QLabel(page_AddBook);
        label_Language->setObjectName("label_Language");

        verticalLayout_2->addWidget(label_Language);

        label_IssuedDate = new QLabel(page_AddBook);
        label_IssuedDate->setObjectName("label_IssuedDate");

        verticalLayout_2->addWidget(label_IssuedDate);

        label_PrimarySubject = new QLabel(page_AddBook);
        label_PrimarySubject->setObjectName("label_PrimarySubject");

        verticalLayout_2->addWidget(label_PrimarySubject);

        label_LoccClassification = new QLabel(page_AddBook);
        label_LoccClassification->setObjectName("label_LoccClassification");

        verticalLayout_2->addWidget(label_LoccClassification);

        label_LoccArea = new QLabel(page_AddBook);
        label_LoccArea->setObjectName("label_LoccArea");

        verticalLayout_2->addWidget(label_LoccArea);

        label_Genre = new QLabel(page_AddBook);
        label_Genre->setObjectName("label_Genre");

        verticalLayout_2->addWidget(label_Genre);

        label_Bookshelf = new QLabel(page_AddBook);
        label_Bookshelf->setObjectName("label_Bookshelf");

        verticalLayout_2->addWidget(label_Bookshelf);

        label_URL = new QLabel(page_AddBook);
        label_URL->setObjectName("label_URL");

        verticalLayout_2->addWidget(label_URL);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(20);
        verticalLayout_3->setObjectName("verticalLayout_3");
        lineEdit_Title = new QLineEdit(page_AddBook);
        lineEdit_Title->setObjectName("lineEdit_Title");

        verticalLayout_3->addWidget(lineEdit_Title);

        lineEdit_Author = new QLineEdit(page_AddBook);
        lineEdit_Author->setObjectName("lineEdit_Author");

        verticalLayout_3->addWidget(lineEdit_Author);

        comboBox_Language = new QComboBox(page_AddBook);
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

        verticalLayout_3->addWidget(comboBox_Language);

        lineEdit_IssueDate = new QLineEdit(page_AddBook);
        lineEdit_IssueDate->setObjectName("lineEdit_IssueDate");

        verticalLayout_3->addWidget(lineEdit_IssueDate);

        lineEdit_PrimartSubject = new QLineEdit(page_AddBook);
        lineEdit_PrimartSubject->setObjectName("lineEdit_PrimartSubject");

        verticalLayout_3->addWidget(lineEdit_PrimartSubject);

        lineEdit_LoccClassification = new QLineEdit(page_AddBook);
        lineEdit_LoccClassification->setObjectName("lineEdit_LoccClassification");

        verticalLayout_3->addWidget(lineEdit_LoccClassification);

        lineEdit_LoccArea = new QLineEdit(page_AddBook);
        lineEdit_LoccArea->setObjectName("lineEdit_LoccArea");

        verticalLayout_3->addWidget(lineEdit_LoccArea);

        comboBox_Genre = new QComboBox(page_AddBook);
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

        verticalLayout_3->addWidget(comboBox_Genre);

        lineEdit_Bookshelf = new QLineEdit(page_AddBook);
        lineEdit_Bookshelf->setObjectName("lineEdit_Bookshelf");

        verticalLayout_3->addWidget(lineEdit_Bookshelf);

        lineEdit_URL = new QLineEdit(page_AddBook);
        lineEdit_URL->setObjectName("lineEdit_URL");

        verticalLayout_3->addWidget(lineEdit_URL);


        horizontalLayout_2->addLayout(verticalLayout_3);

        stackedWidget_AddNew->addWidget(page_AddBook);
        page_AddUser = new QWidget();
        page_AddUser->setObjectName("page_AddUser");
        horizontalLayout_3 = new QHBoxLayout(page_AddUser);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_UserID = new QLabel(page_AddUser);
        label_UserID->setObjectName("label_UserID");

        verticalLayout_4->addWidget(label_UserID);

        label_UserName = new QLabel(page_AddUser);
        label_UserName->setObjectName("label_UserName");

        verticalLayout_4->addWidget(label_UserName);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(110);
        verticalLayout_5->setObjectName("verticalLayout_5");
        comboBox_AccType = new QComboBox(page_AddUser);
        comboBox_AccType->addItem(QString());
        comboBox_AccType->addItem(QString());
        comboBox_AccType->setObjectName("comboBox_AccType");

        verticalLayout_5->addWidget(comboBox_AccType);

        lineEdit_UserName = new QLineEdit(page_AddUser);
        lineEdit_UserName->setObjectName("lineEdit_UserName");

        verticalLayout_5->addWidget(lineEdit_UserName);


        horizontalLayout_3->addLayout(verticalLayout_5);

        stackedWidget_AddNew->addWidget(page_AddUser);
        page_AccData = new QWidget();
        page_AccData->setObjectName("page_AccData");
        verticalLayout_6 = new QVBoxLayout(page_AccData);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_AccData = new QLabel(page_AccData);
        label_AccData->setObjectName("label_AccData");
        label_AccData->setStyleSheet(QString::fromUtf8("font: 18pt \"Microsoft JhengHei UI\";"));
        label_AccData->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_AccData);

        stackedWidget_AddNew->addWidget(page_AccData);

        verticalLayout->addWidget(stackedWidget_AddNew);

        pushButton = new QPushButton(AddNewDialog);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        retranslateUi(AddNewDialog);

        stackedWidget_AddNew->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(AddNewDialog);
    } // setupUi

    void retranslateUi(QDialog *AddNewDialog)
    {
        AddNewDialog->setWindowTitle(QCoreApplication::translate("AddNewDialog", "Dialog", nullptr));
        radioButton_AddBook->setText(QCoreApplication::translate("AddNewDialog", "Add Book", nullptr));
        radioButton_AddUser->setText(QCoreApplication::translate("AddNewDialog", "Add User", nullptr));
        label_Title->setText(QCoreApplication::translate("AddNewDialog", "Title:", nullptr));
        label_Author->setText(QCoreApplication::translate("AddNewDialog", "Author:", nullptr));
        label_Language->setText(QCoreApplication::translate("AddNewDialog", "Language:", nullptr));
        label_IssuedDate->setText(QCoreApplication::translate("AddNewDialog", "Issued Date:", nullptr));
        label_PrimarySubject->setText(QCoreApplication::translate("AddNewDialog", "Primary Subject:", nullptr));
        label_LoccClassification->setText(QCoreApplication::translate("AddNewDialog", "Locc Classification:", nullptr));
        label_LoccArea->setText(QCoreApplication::translate("AddNewDialog", "Locc Area:", nullptr));
        label_Genre->setText(QCoreApplication::translate("AddNewDialog", "Genre:", nullptr));
        label_Bookshelf->setText(QCoreApplication::translate("AddNewDialog", "Bookshelf:", nullptr));
        label_URL->setText(QCoreApplication::translate("AddNewDialog", "URL:", nullptr));
        comboBox_Language->setItemText(0, QCoreApplication::translate("AddNewDialog", "English", nullptr));
        comboBox_Language->setItemText(1, QCoreApplication::translate("AddNewDialog", "German", nullptr));
        comboBox_Language->setItemText(2, QCoreApplication::translate("AddNewDialog", "French", nullptr));
        comboBox_Language->setItemText(3, QCoreApplication::translate("AddNewDialog", "Dutch", nullptr));
        comboBox_Language->setItemText(4, QCoreApplication::translate("AddNewDialog", "Italian", nullptr));
        comboBox_Language->setItemText(5, QCoreApplication::translate("AddNewDialog", "Spanish", nullptr));
        comboBox_Language->setItemText(6, QCoreApplication::translate("AddNewDialog", "Finnish", nullptr));
        comboBox_Language->setItemText(7, QCoreApplication::translate("AddNewDialog", "Hangarian", nullptr));
        comboBox_Language->setItemText(8, QCoreApplication::translate("AddNewDialog", "Portuguese", nullptr));
        comboBox_Language->setItemText(9, QCoreApplication::translate("AddNewDialog", "Esperanto", nullptr));
        comboBox_Language->setItemText(10, QCoreApplication::translate("AddNewDialog", "Latin", nullptr));
        comboBox_Language->setItemText(11, QCoreApplication::translate("AddNewDialog", "Norwegian", nullptr));
        comboBox_Language->setItemText(12, QCoreApplication::translate("AddNewDialog", "Afrikaans", nullptr));

        lineEdit_IssueDate->setPlaceholderText(QCoreApplication::translate("AddNewDialog", "YYYY/MM/DD", nullptr));
        comboBox_Genre->setItemText(0, QCoreApplication::translate("AddNewDialog", "Mystery", nullptr));
        comboBox_Genre->setItemText(1, QCoreApplication::translate("AddNewDialog", "Thriller and Suspense", nullptr));
        comboBox_Genre->setItemText(2, QCoreApplication::translate("AddNewDialog", "Horror", nullptr));
        comboBox_Genre->setItemText(3, QCoreApplication::translate("AddNewDialog", "Science Fiction", nullptr));
        comboBox_Genre->setItemText(4, QCoreApplication::translate("AddNewDialog", "Fantasy", nullptr));
        comboBox_Genre->setItemText(5, QCoreApplication::translate("AddNewDialog", "High Fantasy", nullptr));
        comboBox_Genre->setItemText(6, QCoreApplication::translate("AddNewDialog", "Urban Fantasy", nullptr));
        comboBox_Genre->setItemText(7, QCoreApplication::translate("AddNewDialog", "Grimdark Fantasy", nullptr));
        comboBox_Genre->setItemText(8, QCoreApplication::translate("AddNewDialog", "Dystopian Fiction", nullptr));
        comboBox_Genre->setItemText(9, QCoreApplication::translate("AddNewDialog", "Romance", nullptr));
        comboBox_Genre->setItemText(10, QCoreApplication::translate("AddNewDialog", "Romantasy", nullptr));
        comboBox_Genre->setItemText(11, QCoreApplication::translate("AddNewDialog", "Historical Fiction", nullptr));
        comboBox_Genre->setItemText(12, QCoreApplication::translate("AddNewDialog", "Comtemporary Fiction", nullptr));
        comboBox_Genre->setItemText(13, QCoreApplication::translate("AddNewDialog", "Literary Fiction", nullptr));
        comboBox_Genre->setItemText(14, QCoreApplication::translate("AddNewDialog", "Young Adult", nullptr));
        comboBox_Genre->setItemText(15, QCoreApplication::translate("AddNewDialog", "New Adult", nullptr));
        comboBox_Genre->setItemText(16, QCoreApplication::translate("AddNewDialog", "Xenofiction", nullptr));
        comboBox_Genre->setItemText(17, QCoreApplication::translate("AddNewDialog", "Children's Fiction", nullptr));
        comboBox_Genre->setItemText(18, QCoreApplication::translate("AddNewDialog", "Graphic Novel", nullptr));
        comboBox_Genre->setItemText(19, QCoreApplication::translate("AddNewDialog", "Manga", nullptr));
        comboBox_Genre->setItemText(20, QCoreApplication::translate("AddNewDialog", "Short Story", nullptr));
        comboBox_Genre->setItemText(21, QCoreApplication::translate("AddNewDialog", "Novella", nullptr));
        comboBox_Genre->setItemText(22, QCoreApplication::translate("AddNewDialog", "Autobiography", nullptr));
        comboBox_Genre->setItemText(23, QCoreApplication::translate("AddNewDialog", "Memoir", nullptr));
        comboBox_Genre->setItemText(24, QCoreApplication::translate("AddNewDialog", "Biography", nullptr));
        comboBox_Genre->setItemText(25, QCoreApplication::translate("AddNewDialog", "Self-help", nullptr));
        comboBox_Genre->setItemText(26, QCoreApplication::translate("AddNewDialog", "Parenting", nullptr));
        comboBox_Genre->setItemText(27, QCoreApplication::translate("AddNewDialog", "Food and Drink", nullptr));
        comboBox_Genre->setItemText(28, QCoreApplication::translate("AddNewDialog", "Photography", nullptr));
        comboBox_Genre->setItemText(29, QCoreApplication::translate("AddNewDialog", "History", nullptr));
        comboBox_Genre->setItemText(30, QCoreApplication::translate("AddNewDialog", "Business", nullptr));
        comboBox_Genre->setItemText(31, QCoreApplication::translate("AddNewDialog", "Humor", nullptr));
        comboBox_Genre->setItemText(32, QCoreApplication::translate("AddNewDialog", "True Crime", nullptr));
        comboBox_Genre->setItemText(33, QCoreApplication::translate("AddNewDialog", "Religion and Spirituality", nullptr));
        comboBox_Genre->setItemText(34, QCoreApplication::translate("AddNewDialog", "Philosophy", nullptr));
        comboBox_Genre->setItemText(35, QCoreApplication::translate("AddNewDialog", "Health and Fitness", nullptr));
        comboBox_Genre->setItemText(36, QCoreApplication::translate("AddNewDialog", "Science", nullptr));
        comboBox_Genre->setItemText(37, QCoreApplication::translate("AddNewDialog", "Technology", nullptr));
        comboBox_Genre->setItemText(38, QCoreApplication::translate("AddNewDialog", "Crafts and DIY", nullptr));
        comboBox_Genre->setItemText(39, QCoreApplication::translate("AddNewDialog", "Learning and Education", nullptr));
        comboBox_Genre->setItemText(40, QCoreApplication::translate("AddNewDialog", "Essays", nullptr));
        comboBox_Genre->setItemText(41, QCoreApplication::translate("AddNewDialog", "Gardening and Homesteading", nullptr));
        comboBox_Genre->setItemText(42, QCoreApplication::translate("AddNewDialog", "Music", nullptr));
        comboBox_Genre->setItemText(43, QCoreApplication::translate("AddNewDialog", "Children's", nullptr));
        comboBox_Genre->setItemText(44, QCoreApplication::translate("AddNewDialog", "Other Non-Fiction", nullptr));

        label_UserID->setText(QCoreApplication::translate("AddNewDialog", "Account Type:", nullptr));
        label_UserName->setText(QCoreApplication::translate("AddNewDialog", "User Name:", nullptr));
        comboBox_AccType->setItemText(0, QCoreApplication::translate("AddNewDialog", "user", nullptr));
        comboBox_AccType->setItemText(1, QCoreApplication::translate("AddNewDialog", "admin", nullptr));

        label_AccData->setText(QCoreApplication::translate("AddNewDialog", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("AddNewDialog", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNewDialog: public Ui_AddNewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWDIALOG_H
