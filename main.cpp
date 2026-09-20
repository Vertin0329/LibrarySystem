#include "loginwindow.h"

#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QGuiApplication::setQuitOnLastWindowClosed(false);
    a.setWindowIcon(QIcon(":/img/img/flat-design-library-logo-design_23-2149324476.png"));
    LoginWindow *w = new LoginWindow();
    w->show();

    return QApplication::exec();
}