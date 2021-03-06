#include <QApplication>

#include "registry.h"
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName("iAlert");
    Registry r;
    MainWindow w;
    w.setWindowIcon( QIcon(":/icons/icon.svg") );
    w.show();

    return a.exec();
}
