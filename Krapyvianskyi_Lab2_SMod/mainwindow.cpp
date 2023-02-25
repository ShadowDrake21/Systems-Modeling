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

void MainWindow::on_pushButtonTask1_clicked()
{
    int size = 100, a = 221, m = 10000, tmp = 0, aTask = 5, bTask = 10;
    double x = 0.1324, randomMultiplicative [size], arrForTask1[size];
    QString str = "Випадкові рівномірно-розподілені числа на [5; 10]";

    for(int i = 0; i < size; i++) {
        tmp = static_cast<int>(trunc(a * x));
        x = tmp % m;
        randomMultiplicative[i] = x/m;
    }

    for(int j = 0; j < size; j++) {
        arrForTask1[j] = (bTask - aTask) * randomMultiplicative[j] + aTask;
    }

    setMethodTitle(str);
    printRandom(arrForTask1);
    checkMoments(arrForTask1, size);
}

double static globalArrForTask2[100];

void MainWindow::on_pushButtonTask2_clicked()
{
    int size = 100, a = 279, m = 10000, c = 3928, taskNum = 12, calcRand = 0;
    double x = 0.1324, randomMix [size], arrForTask2[size];
    QString str = "Нормальний закон з мат. сп. = 0 і ср. відх. = 1";

    for(int i = 0; i < size; i++) {
        x = fmod((a * x + c), m);
        randomMix[i] = x/m;
    }

    for(int i = 0; i < size; i++) {
        double tmp = 0;
        calcRand = static_cast<int>(trunc((size - taskNum - 1) * randomMix[i] + 1));
        for(int j = calcRand; j < calcRand + taskNum; j++) {
            tmp = tmp + randomMix[j];
        }
        arrForTask2[i] = tmp - taskNum/2;
        globalArrForTask2[i] = arrForTask2[i];
        calcRand = 0;
    }

    setMethodTitle(str);
    printRandom(arrForTask2);
    checkMoments(arrForTask2, size);
}

void MainWindow::on_pushButtonTask3_clicked()
{
    int size = 100, mTask = 6, sigmaTask = 1;
    double arrForTask3[size];
    QString str = "Нормальний закон з довільними числ. характеристиками";

    if(globalArrForTask2[1] == 0.0) {
        on_pushButtonTask2_clicked();
    }

    for(int i = 0; i < size; i++) {
        arrForTask3[i] = globalArrForTask2[i] * sigmaTask + mTask;
    }

    setMethodTitle(str);
    printRandom(arrForTask3);
    checkMoments(arrForTask3, size);
}

void MainWindow::on_pushButtonTask4_clicked(){
    int size = 100, m = 10000, product1 = 0, product2 = 0, product3 = 0, product4 = 0;
    double x0 = 0.1324, x1 = 0.2115, p1 = 0.3, p2 = 0.2, p3 = 0.1, p4 = 0.4, randomAdditive[size];
    randomAdditive[0] = x0;
    randomAdditive[1] = x1;
    QString str = "Процес вибору 1 з 4 товарів (група несумісних подій)";

    for(int i = 1; i < size - 1; i++) {
        randomAdditive[i + 1] = fmod((randomAdditive[i] + randomAdditive[i - 1]), m) - fmod(trunc(randomAdditive[i] + randomAdditive[i - 1]), m) ;
    }

    for(int i = 1; i < 40; i+=2){
        if(randomAdditive[i] >= 0 && randomAdditive[i] <= p1) {
            product1++;
        }
        else if(randomAdditive[i] > p1 && randomAdditive[i] <= p1 + p2) {
            product2++;
        }
        else if(randomAdditive[i] > p1 + p2 && randomAdditive[i] <= p1 + p2 + p3) {
            product3++;
        }
        else if(randomAdditive[i] > p1 + p2 + p3 && randomAdditive[i] <= p1 + p2 + p3 + p4) {
            product4++;
        }
    }

    setMethodTitle(str);
    printRandom(randomAdditive);
    checkMoments(randomAdditive, size);
    ui->labelIncompatibleEvents->setText("Товар 1 - " + QString::number(product1) + ", товар 2 - " + QString::number(product2)
                                         + ", товар 3 - " + QString::number(product3) + ", товар 4 - " + QString::number(product4));

    int choiceArr[4] = {product1, product2, product3, product4}, max = INT_MIN;
    QString choiceStr;
    for(int i : choiceArr) {
        if(i > max) {
            max = i;
        }
    }

    if(max == product1){
        choiceStr = "Вибираємо товар 1";
    } else if(max == product2){
        choiceStr = "Вибираємо товар 2";
    } else if(max == product3){
        choiceStr = "Вибираємо товар 3";
    } else if(max == product4){
        choiceStr = "Вибираємо товар 4";
    }

    ui->labelIncompatibleEventsChoice->setText(choiceStr);
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

void MainWindow::setMethodTitle(QString str) {
    ui->labelChoosedTask->setText(str);
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
    ui->labelMathDeviation->setText("Середнє квадратичне відхилення: " + QString::number(sqrt(mathDispertion), 'g', 4));
}

void MainWindow::on_pushButtonClear_clicked()
{
    // очищуємо робочу ділянку
    scene->clear();
    ui->labelChoosedTask->setText("Обране завдання");
    ui->tableWidgetRandom->clear();
    ui->labelMathExpectation->setText("Математичне сподівання: ");
    ui->labelMathDispertion->setText("Дисперсія: ");
    ui->labelMathDeviation->setText("Середнє квадратичне відхилення: ");
    ui->labelIncompatibleEvents->setText("Поле для моделювання групи несумісних подій");
    ui->labelIncompatibleEventsChoice->setText("Поле для моделювання групи несумісних подій");
}
