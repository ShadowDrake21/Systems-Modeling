#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QGraphicsTextItem"
#include <cmath>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // ініціалізація вказівника scene новим об'єктом QGraphicsScene
    scene = new QGraphicsScene(this);
    // очищення робочої ділянки від фокусу
    scene->clearFocus();
    ui->tableWidgetRandom->horizontalHeader()->setStretchLastSection(true);
    ui->tableWidgetRandom->setColumnCount(10);
    ui->tableWidgetRandom->setRowCount(10);

    QStringList matrixLabels;
    for(int i =0; i < ui->tableWidgetRandom->rowCount(); i++) {
        // формування підпису для відповідної вершини
        matrixLabels.append(QString::number(i));
    }
    ui->tableWidgetRandom->setVerticalHeaderLabels(matrixLabels);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonMultiplicative_clicked()
{
    int size = 100, a = 221, m = 10000, tmp = 0;
    double x = 0.1324, randomMultiplicative [size];

    for(int i = 0; i < size; i++) {
        tmp = static_cast<int>(trunc(a * x));
        x = tmp % m;
        randomMultiplicative[i] = x/m;
    }

    setMethodTitle(1);
    printRandom(randomMultiplicative);
    checkMoments(randomMultiplicative, size);
}

void MainWindow::on_pushButtonMix_clicked()
{
    int size = 100, a = 279, m = 10000, c = 3928;
    double x = 0.1324, randomMix [size];

    for(int i = 0; i < size; i++) {
        x = fmod((a * x + c), m);
        randomMix[i] = x/m;
    }

    setMethodTitle(2);
    printRandom(randomMix);
    checkMoments(randomMix, size);
}

void MainWindow::on_pushButtonAdditive_clicked()
{
    int size = 100, m = 10000;
    double x0 = 0.1324, x1 = 0.2115, randomAdditive [size];
    randomAdditive[0] = x0;
    randomAdditive[1] = x1;

    for(int i = 1; i < size - 1; i++) {
        randomAdditive[i + 1] = fmod((randomAdditive[i] + randomAdditive[i - 1]), m) - fmod(trunc(randomAdditive[i] + randomAdditive[i - 1]), m) ;
    }

    setMethodTitle(3);
    printRandom(randomAdditive);
    checkMoments(randomAdditive, size);
}

void MainWindow::printRandom(double randArr[]) {
    int itemNum = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            QTableWidgetItem *randomListItem = new QTableWidgetItem();
            randomListItem->setText(QString::number(randArr[itemNum++],'g', 4));
            ui->tableWidgetRandom->setItem(i, j, randomListItem);
        }
    }
}

void MainWindow::setMethodTitle(int type) {
    switch (type){
    case 1:
        ui->labelChoosedMethod->setText("Мультиплікативний метод");
        break;
    case 2:
        ui->labelChoosedMethod->setText("Мішаний метод");
        break;
    case 3:
        ui->labelChoosedMethod->setText("Адитивний метод");
        break;
    }
}

void MainWindow::checkMoments(double randArr[], int size) {
    double sumExp = 0, sumDisp = 0, mathExpectation, mathDispertion;

    for(int i = 0; i < size; i++) {
        sumExp += randArr[i];
    }
    mathExpectation = sumExp/size;

    for(int j = 0; j < size; j++) {
        sumDisp += randArr[j] * randArr[j];
    }
    mathDispertion = (sumDisp/size) - (mathExpectation * mathExpectation);

    ui->labelMathExpectation->setText("Математичне сподівання: " + QString::number(mathExpectation, 'g', 4));
    ui->labelMathDispertion->setText("Дисперсія: " + QString::number(mathDispertion, 'g', 4));
}

void MainWindow::on_pushButtonClear_clicked()
{
    // очищуємо робочу ділянку
    scene->clear();
    ui->labelChoosedMethod->setText("Обраний метод");
    ui->tableWidgetRandom->clear();
    ui->labelMathExpectation->setText("Математичне сподівання: ");
    ui->labelMathDispertion->setText("Дисперсія: ");
}
