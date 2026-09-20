#include "filterdialog.h"
#include "ui_filterdialog.h"
#include "bookwindow_student.h"

#include <QAbstractButton>
#include <QDialogButtonBox>

filterDialog::filterDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::filterDialog)
{
    ui->setupUi(this);
}

filterDialog::~filterDialog()
{
    delete ui;
}


void filterDialog::on_buttonBox_clicked(QAbstractButton *button)
{
    if (QDialogButtonBox::Ok){
        sql_user_data = "SELECT * FROM metadata WHERE bookcode IS NOT NULL AND bookcode != ''";

        if (ui->radioButton_Available->isChecked()){
            sql_user_data += " AND status = 'in display'";
        } else if (ui->radioButton_Unavailable->isChecked()){
            sql_user_data += " AND status != 'in display' AND (br_id != :u OR br_id IS NULL OR br_id = '')";
        } else if (ui->radioButton_Borrowed->isChecked()){
            sql_user_data += " AND status != 'in display' AND br_id = :u";
        }

        int languageIndex = ui->comboBox_Language->currentIndex();
        switch (languageIndex){
            default:
                break;
            case 1:
                sql_user_data += " AND language_code = 'en'";
                break;
            case 2:
                sql_user_data += " AND language_code = 'de'";
                break;
            case 3:
                sql_user_data += " AND language_code = 'fr'";
                break;
            case 4:
                sql_user_data += " AND language_code = 'nl'";
                break;
            case 5:
                sql_user_data += " AND language_code = 'it'";
                break;
            case 6:
                sql_user_data += " AND language_code = 'es'";
                break;
            case 7:
                sql_user_data += " AND language_code = 'fi'";
                break;
            case 8:
                sql_user_data += " AND language_code = 'hu'";
                break;
            case 9:
                sql_user_data += " AND language_code = 'pt'";
                break;
            case 10:
                sql_user_data += " AND language_code = 'eo'";
                break;
            case 11:
                sql_user_data += " AND language_code = 'la'";
                break;
            case 12:
                sql_user_data += " AND language_code = 'no'";
                break;
            case 13:
                sql_user_data += " AND language_code = 'af'";
                break;
        }

        int genreIndex = ui->comboBox_Genre->currentIndex();
        switch (genreIndex){
            default:
                break;
            case 1:
                sql_user_data += " AND genre LIKE '%Mystery%'";
                break;
            case 2:
                sql_user_data += " AND genre LIKE '%Thriller and Suspense%'";
                break;
            case 3:
                sql_user_data += " AND genre LIKE '%Horror%'";
                break;
            case 4:
                sql_user_data += " AND genre LIKE '%Science Fiction%'";
                break;
            case 5:
                sql_user_data += " AND genre LIKE '%Fantasy%'";
                break;
            case 6:
                sql_user_data += " AND genre LIKE '%High Fantasy%'";
                break;
            case 7:
                sql_user_data += " AND genre LIKE '%Urban Fantasy%'";
                break;
            case 8:
                sql_user_data += " AND genre LIKE '%Grimdark Fantasy%'";
                break;
            case 9:
                sql_user_data += " AND genre LIKE '%Dystopian Fiction%'";
                break;
            case 10:
                sql_user_data += " AND genre LIKE '%Romance%'";
                break;
            case 11:
                sql_user_data += " AND genre LIKE '%Romantasy%'";
                break;
            case 12:
                sql_user_data += " AND genre LIKE '%Historical Fiction%'";
                break;
            case 13:
                sql_user_data += " AND genre LIKE '%Contemporary Fiction%'";
                break;
            case 14:
                sql_user_data += " AND genre LIKE '%Literary Fiction%'";
                break;
            case 15:
                sql_user_data += " AND genre LIKE '%Young Adult%'";
                break;
            case 16:
                sql_user_data += " AND genre LIKE '%New Adult%'";
                break;
            case 17:
                sql_user_data += " AND genre LIKE '%Xenofiction%'";
                break;
            case 18:
                sql_user_data += " AND genre LIKE '%Children's Fiction%'";
                break;
            case 19:
                sql_user_data += " AND genre LIKE '%Graphic Novel%'";
                break;
            case 20:
                sql_user_data += " AND genre LIKE '%Manga%'";
                break;
            case 21:
                sql_user_data += " AND genre LIKE '%Short Story%'";
                break;
            case 22:
                sql_user_data += " AND genre LIKE '%Novella%'";
                break;
            case 23:
                sql_user_data += " AND genre LIKE '%Autobiography%'";
                break;
            case 24:
                sql_user_data += " AND genre LIKE '%Memoir%'";
                break;
            case 25:
                sql_user_data += " AND genre LIKE '%Biography%'";
                break;
            case 26:
                sql_user_data += " AND genre LIKE '%Self-help%'";
                break;
            case 27:
                sql_user_data += " AND genre LIKE '%Parenting%'";
                break;
            case 28:
                sql_user_data += " AND genre LIKE '%Food and Drink%'";
                break;
            case 29:
                sql_user_data += " AND genre LIKE '%Photography%'";
                break;
            case 30:
                sql_user_data += " AND genre LIKE '%History%'";
                break;
            case 31:
                sql_user_data += " AND genre LIKE '%Business%'";
                break;
            case 32:
                sql_user_data += " AND genre LIKE '%Humor%'";
                break;
            case 33:
                sql_user_data += " AND genre LIKE '%True Crime%'";
                break;
            case 34:
                sql_user_data += " AND genre LIKE '%Religion and Spirituality%'";
                break;
            case 35:
                sql_user_data += " AND genre LIKE '%Philosophy%'";
                break;
            case 36:
                sql_user_data += " AND genre LIKE '%Health and Fitness%'";
                break;
            case 37:
                sql_user_data += " AND genre LIKE '%Science%'";
                break;
            case 38:
                sql_user_data += " AND genre LIKE '%Technology%'";
                break;
            case 39:
                sql_user_data += " AND genre LIKE '%Crafts and DIY%'";
                break;
            case 40:
                sql_user_data += " AND genre LIKE '%Learning and Education%'";
                break;
            case 41:
                sql_user_data += " AND genre LIKE '%Essays%'";
                break;
            case 42:
                sql_user_data += " AND genre LIKE '%Gardening and Homesteading%'";
                break;
            case 43:
                sql_user_data += " AND genre LIKE '%Music%'";
                break;
            case 44:
                sql_user_data += " AND genre LIKE '%Children's%'";
                break;
            case 45:
                sql_user_data += " AND genre LIKE '%Other Non-Fiction%'";
                break;
            }

        f_sql_user_data = sql_user_data;
        BookWindow_Student *parentWindow = qobject_cast<BookWindow_Student*>(parent());
        parentWindow->readFileAndDisplayTable();
    } else {
        return;
    }
}

