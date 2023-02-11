#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("МС Лабораторна робота №1 ПІ-211 Крапив'янський Д.А.");
    w.show();
    return a.exec();
}
