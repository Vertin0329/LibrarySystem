#ifndef FILTERBOOKFORLIBRARIANDIALOG_H
#define FILTERBOOKFORLIBRARIANDIALOG_H

#include <QDialog>
#include <QAbstractButton>

namespace Ui {
class FilterBookForLibrarianDialog;
}

class FilterBookForLibrarianDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FilterBookForLibrarianDialog(QWidget *parent = nullptr);
    ~FilterBookForLibrarianDialog();

private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::FilterBookForLibrarianDialog *ui;
};

inline QString sql_librarian_data = "SELECT * FROM metadata WHERE bookcode IS NOT NULL AND bookcode != ''";

#endif // FILTERBOOKFORLIBRARIANDIALOG_H
