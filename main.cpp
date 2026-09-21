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

    QApplication::setStyle("fusion");

    QPalette darkPalette;
    darkPalette.setColor(QPalette::Window, QColor(31,31,31));
    darkPalette.setColor(QPalette::WindowText, Qt::white);
    darkPalette.setColor(QPalette::Base, QColor(31,31,31));
    darkPalette.setColor(QPalette::AlternateBase, QColor(66,66,66));
    darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
    darkPalette.setColor(QPalette::ToolTipText, Qt::white);
    darkPalette.setColor(QPalette::Text, Qt::white);
    darkPalette.setColor(QPalette::Button, QColor(31,31,31).lighter());
    darkPalette.setColor(QPalette::ButtonText, Qt::white);
    darkPalette.setColor(QPalette::BrightText, Qt::red);
    darkPalette.setColor(QPalette::Highlight, QColor(142,45,197).lighter());
    darkPalette.setColor(QPalette::HighlightedText, Qt::black);

    a.setPalette(darkPalette);

    return QApplication::exec();
}