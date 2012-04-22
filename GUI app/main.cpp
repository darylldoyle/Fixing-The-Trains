#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    a.setApplicationName("Fixing The Trains");
    a.setOrganizationName("Daryll Doyle");
    a.setOrganizationDomain("www.doylesource.co.uk ");
    QIcon windowIcon(":/icon.icns");
    a.setWindowIcon( windowIcon );
    w.setWindowIcon( windowIcon );
    w.show();
    return a.exec();
}
