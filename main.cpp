#include "mainwindow.h"
#include "controler.h"
#include "model.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Model model;
    Controler controler (&model);
    MainWindow w (&controler, &model);
    w.show();

    return a.exec();
}
