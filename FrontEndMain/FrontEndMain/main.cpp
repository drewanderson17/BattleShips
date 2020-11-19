#include "menuwindow.h"
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MenuWindow w;
    MainWindow m;
    //w.show();
    m.show();
    return a.exec();
}
