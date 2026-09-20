#ifndef FILTERUSERFORLIBRARIANDIALOG_H
#define FILTERUSERFORLIBRARIANDIALOG_H

#include <QDialog>
#include <QAbstractButton>

namespace Ui {
class FilterUserForLibrarianDialog;
}

class FilterUserForLibrarianDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FilterUserForLibrarianDialog(QWidget *parent = nullptr);
    ~FilterUserForLibrarianDialog();

private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::FilterUserForLibrarianDialog *ui;
};

inline QString sql_librarian_user = "SELECT * FROM users WHERE userid IS NOT NULL AND userid != ''";

#endif // FILTERUSERFORLIBRARIANDIALOG_H
