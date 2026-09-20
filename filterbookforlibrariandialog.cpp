#include "filterbookforlibrariandialog.h"
#include "ui_filterbookforlibrariandialog.h"
#include "bookwindow_librarian.h"

FilterBookForLibrarianDialog::FilterBookForLibrarianDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FilterBookForLibrarianDialog)
{
    ui->setupUi(this);
}

FilterBookForLibrarianDialog::~FilterBookForLibrarianDialog()
{
    delete ui;
}

void FilterBookForLibrarianDialog::on_buttonBox_clicked(QAbstractButton *button)
{
    if (QDialogButtonBox::Ok){
        sql_librarian_data = "SELECT * FROM metadata WHERE bookcode IS NOT NULL AND bookcode != ''";

        if (ui->radioButton_Damaged->isChecked()){
            sql_librarian_data += " AND status = 'damaged'";
        } else if (ui->radioButton_InDisplay->isChecked()){
            sql_librarian_data += " AND status = 'in display'";
        } else if (ui->radioButton_Loan->isChecked()){
            sql_librarian_data += " AND status = 'loan'";
        } else if (ui->radioButton_Missing->isChecked()){
            sql_librarian_data += " AND status = 'missing'";
        } else if (ui->radioButton_SuspectedMissing->isChecked()){
            sql_librarian_data += " AND status = 'suspected missing'";
        } else if (ui->radioButton_Withdrawn->isChecked()){
            sql_librarian_data += " AND status = 'withdrawn'";
        }

        int languageIndex = ui->comboBox_Language->currentIndex();
        switch (languageIndex){
            default:
                break;
            case 1:
                sql_librarian_data += " AND language_code = 'en'";
                break;
            case 2:
                sql_librarian_data += " AND language_code = 'de'";
                break;
            case 3:
                sql_librarian_data += " AND language_code = 'fr'";
                break;
            case 4:
                sql_librarian_data += " AND language_code = 'nl'";
                break;
            case 5:
                sql_librarian_data += " AND language_code = 'it'";
                break;
            case 6:
                sql_librarian_data += " AND language_code = 'es'";
                break;
            case 7:
                sql_librarian_data += " AND language_code = 'fi'";
                break;
            case 8:
                sql_librarian_data += " AND language_code = 'hu'";
                break;
            case 9:
                sql_librarian_data += " AND language_code = 'pt'";
                break;
            case 10:
                sql_librarian_data += " AND language_code = 'eo'";
                break;
            case 11:
                sql_librarian_data += " AND language_code = 'la'";
                break;
            case 12:
                sql_librarian_data += " AND language_code = 'no'";
                break;
            case 13:
                sql_librarian_data += " AND language_code = 'af'";
                break;
        }

        int genreIndex = ui->comboBox_Genre->currentIndex();
        switch (genreIndex){
            default:
                break;
            case 1:
                sql_librarian_data += " AND genre LIKE '%Mystery%'";
                break;
            case 2:
                sql_librarian_data += " AND genre LIKE '%Thriller and Suspense%'";
                break;
            case 3:
                sql_librarian_data += " AND genre LIKE '%Horror%'";
                break;
            case 4:
                sql_librarian_data += " AND genre LIKE '%Science Fiction%'";
                break;
            case 5:
                sql_librarian_data += " AND genre LIKE '%Fantasy%'";
                break;
            case 6:
                sql_librarian_data += " AND genre LIKE '%High Fantasy%'";
                break;
            case 7:
                sql_librarian_data += " AND genre LIKE '%Urban Fantasy%'";
                break;
            case 8:
                sql_librarian_data += " AND genre LIKE '%Grimdark Fantasy%'";
                break;
            case 9:
                sql_librarian_data += " AND genre LIKE '%Dystopian Fiction%'";
                break;
            case 10:
                sql_librarian_data += " AND genre LIKE '%Romance%'";
                break;
            case 11:
                sql_librarian_data += " AND genre LIKE '%Romantasy%'";
                break;
            case 12:
                sql_librarian_data += " AND genre LIKE '%Historical Fiction%'";
                break;
            case 13:
                sql_librarian_data += " AND genre LIKE '%Contemporary Fiction%'";
                break;
            case 14:
                sql_librarian_data += " AND genre LIKE '%Literary Fiction%'";
                break;
            case 15:
                sql_librarian_data += " AND genre LIKE '%Young Adult%'";
                break;
            case 16:
                sql_librarian_data += " AND genre LIKE '%New Adult%'";
                break;
            case 17:
                sql_librarian_data += " AND genre LIKE '%Xenofiction%'";
                break;
            case 18:
                sql_librarian_data += " AND genre LIKE '%Children's Fiction%'";
                break;
            case 19:
                sql_librarian_data += " AND genre LIKE '%Graphic Novel%'";
                break;
            case 20:
                sql_librarian_data += " AND genre LIKE '%Manga%'";
                break;
            case 21:
                sql_librarian_data += " AND genre LIKE '%Short Story%'";
                break;
            case 22:
                sql_librarian_data += " AND genre LIKE '%Novella%'";
                break;
            case 23:
                sql_librarian_data += " AND genre LIKE '%Autobiography%'";
                break;
            case 24:
                sql_librarian_data += " AND genre LIKE '%Memoir%'";
                break;
            case 25:
                sql_librarian_data += " AND genre LIKE '%Biography%'";
                break;
            case 26:
                sql_librarian_data += " AND genre LIKE '%Self-help%'";
                break;
            case 27:
                sql_librarian_data += " AND genre LIKE '%Parenting%'";
                break;
            case 28:
                sql_librarian_data += " AND genre LIKE '%Food and Drink%'";
                break;
            case 29:
                sql_librarian_data += " AND genre LIKE '%Photography%'";
                break;
            case 30:
                sql_librarian_data += " AND genre LIKE '%History%'";
                break;
            case 31:
                sql_librarian_data += " AND genre LIKE '%Business%'";
                break;
            case 32:
                sql_librarian_data += " AND genre LIKE '%Humor%'";
                break;
            case 33:
                sql_librarian_data += " AND genre LIKE '%True Crime%'";
                break;
            case 34:
                sql_librarian_data += " AND genre LIKE '%Religion and Spirituality%'";
                break;
            case 35:
                sql_librarian_data += " AND genre LIKE '%Philosophy%'";
                break;
            case 36:
                sql_librarian_data += " AND genre LIKE '%Health and Fitness%'";
                break;
            case 37:
                sql_librarian_data += " AND genre LIKE '%Science%'";
                break;
            case 38:
                sql_librarian_data += " AND genre LIKE '%Technology%'";
                break;
            case 39:
                sql_librarian_data += " AND genre LIKE '%Crafts and DIY%'";
                break;
            case 40:
                sql_librarian_data += " AND genre LIKE '%Learning and Education%'";
                break;
            case 41:
                sql_librarian_data += " AND genre LIKE '%Essays%'";
                break;
            case 42:
                sql_librarian_data += " AND genre LIKE '%Gardening and Homesteading%'";
                break;
            case 43:
                sql_librarian_data += " AND genre LIKE '%Music%'";
                break;
            case 44:
                sql_librarian_data += " AND genre LIKE '%Children's%'";
                break;
            case 45:
                sql_librarian_data += " AND genre LIKE '%Other Non-Fiction%'";
                break;
            }

        BookWindow_Librarian *parentWindow = qobject_cast<BookWindow_Librarian*>(parent());
        f_sql_librarian_data = sql_librarian_data;
        parentWindow->readFileAndDisplayBookList();
        this->close();
    } else {
        return;
    }
}

