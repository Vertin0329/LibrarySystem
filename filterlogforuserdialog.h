#ifndef FILTERLOGFORUSERDIALOG_H
#define FILTERLOGFORUSERDIALOG_H

#include <QDialog>

namespace Ui {
class FilterLogForUserDialog;
}

class FilterLogForUserDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FilterLogForUserDialog(QWidget *parent = nullptr);
    ~FilterLogForUserDialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::FilterLogForUserDialog *ui;
};

#endif // FILTERLOGFORUSERDIALOG_H
