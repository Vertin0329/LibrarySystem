#ifndef FILTERDIALOG_H
#define FILTERDIALOG_H

#include <QDialog>
#include <QAbstractButton>

namespace Ui {
class filterDialog;
}

class filterDialog : public QDialog
{
    Q_OBJECT

public:
    explicit filterDialog(QWidget *parent = nullptr);
    ~filterDialog();

private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::filterDialog *ui;
};

inline QString sql_user_data = "SELECT * FROM metadata WHERE bookcode IS NOT NULL AND bookcode != ''";

#endif // FILTERDIALOG_H
