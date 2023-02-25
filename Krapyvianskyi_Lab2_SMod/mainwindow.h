#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QGraphicsScene>
#include <QTableWidget>
#include <QTableWidgetItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonTask1_clicked();

    void on_pushButtonTask2_clicked();

    void on_pushButtonTask3_clicked();

    void on_pushButtonTask4_clicked();

    void on_pushButtonClear_clicked();

    void printRandom(double[]);

    void setMethodTitle(QString);

    void checkMoments(double[], int);

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsEllipseItem *ellipseItem;
    QGraphicsRectItem *rectItem;
};

#endif // MAINWINDOW_H
