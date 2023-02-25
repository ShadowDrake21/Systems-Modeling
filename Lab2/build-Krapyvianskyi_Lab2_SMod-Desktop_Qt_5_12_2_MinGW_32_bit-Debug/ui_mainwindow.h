/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *Author;
    QLabel *Title;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayoutButtons;
    QPushButton *pushButtonTask1;
    QPushButton *pushButtonTask2;
    QPushButton *pushButtonTask3;
    QPushButton *pushButtonTask4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayoutList;
    QLabel *labelChoosedTask;
    QTableWidget *tableWidgetRandom;
    QPushButton *pushButtonClear;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayoutMath;
    QLabel *labelMathExpectation;
    QLabel *labelMathDispertion;
    QLabel *labelMathDeviation;
    QLabel *labelIncompatibleEvents;
    QLabel *labelIncompatibleEventsChoice;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(592, 700);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Author = new QLabel(centralWidget);
        Author->setObjectName(QString::fromUtf8("Author"));
        Author->setGeometry(QRect(0, 60, 591, 23));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Author->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        Author->setFont(font);
        Author->setAlignment(Qt::AlignCenter);
        Title = new QLabel(centralWidget);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setGeometry(QRect(0, 0, 591, 49));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Title->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        Title->setFont(font1);
        Title->setTextFormat(Qt::AutoText);
        Title->setAlignment(Qt::AlignCenter);
        Title->setWordWrap(true);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 100, 551, 51));
        horizontalLayoutButtons = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayoutButtons->setSpacing(6);
        horizontalLayoutButtons->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutButtons->setObjectName(QString::fromUtf8("horizontalLayoutButtons"));
        horizontalLayoutButtons->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayoutButtons->setContentsMargins(0, 0, 0, 0);
        pushButtonTask1 = new QPushButton(horizontalLayoutWidget);
        pushButtonTask1->setObjectName(QString::fromUtf8("pushButtonTask1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonTask1->sizePolicy().hasHeightForWidth());
        pushButtonTask1->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(10);
        pushButtonTask1->setFont(font2);

        horizontalLayoutButtons->addWidget(pushButtonTask1);

        pushButtonTask2 = new QPushButton(horizontalLayoutWidget);
        pushButtonTask2->setObjectName(QString::fromUtf8("pushButtonTask2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonTask2->sizePolicy().hasHeightForWidth());
        pushButtonTask2->setSizePolicy(sizePolicy1);
        pushButtonTask2->setFont(font2);

        horizontalLayoutButtons->addWidget(pushButtonTask2);

        pushButtonTask3 = new QPushButton(horizontalLayoutWidget);
        pushButtonTask3->setObjectName(QString::fromUtf8("pushButtonTask3"));
        sizePolicy1.setHeightForWidth(pushButtonTask3->sizePolicy().hasHeightForWidth());
        pushButtonTask3->setSizePolicy(sizePolicy1);
        pushButtonTask3->setFont(font2);

        horizontalLayoutButtons->addWidget(pushButtonTask3);

        pushButtonTask4 = new QPushButton(horizontalLayoutWidget);
        pushButtonTask4->setObjectName(QString::fromUtf8("pushButtonTask4"));
        sizePolicy1.setHeightForWidth(pushButtonTask4->sizePolicy().hasHeightForWidth());
        pushButtonTask4->setSizePolicy(sizePolicy1);
        pushButtonTask4->setFont(font2);

        horizontalLayoutButtons->addWidget(pushButtonTask4);

        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 170, 551, 351));
        verticalLayoutList = new QVBoxLayout(verticalLayoutWidget);
        verticalLayoutList->setSpacing(6);
        verticalLayoutList->setContentsMargins(11, 11, 11, 11);
        verticalLayoutList->setObjectName(QString::fromUtf8("verticalLayoutList"));
        verticalLayoutList->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayoutList->setContentsMargins(0, 0, 0, 0);
        labelChoosedTask = new QLabel(verticalLayoutWidget);
        labelChoosedTask->setObjectName(QString::fromUtf8("labelChoosedTask"));
        sizePolicy.setHeightForWidth(labelChoosedTask->sizePolicy().hasHeightForWidth());
        labelChoosedTask->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        labelChoosedTask->setFont(font3);
        labelChoosedTask->setLayoutDirection(Qt::LeftToRight);
        labelChoosedTask->setAlignment(Qt::AlignCenter);

        verticalLayoutList->addWidget(labelChoosedTask);

        tableWidgetRandom = new QTableWidget(verticalLayoutWidget);
        tableWidgetRandom->setObjectName(QString::fromUtf8("tableWidgetRandom"));
        tableWidgetRandom->horizontalHeader()->setDefaultSectionSize(53);

        verticalLayoutList->addWidget(tableWidgetRandom);

        pushButtonClear = new QPushButton(centralWidget);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));
        pushButtonClear->setGeometry(QRect(470, 570, 101, 61));
        sizePolicy1.setHeightForWidth(pushButtonClear->sizePolicy().hasHeightForWidth());
        pushButtonClear->setSizePolicy(sizePolicy1);
        pushButtonClear->setFont(font2);
        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 530, 431, 141));
        verticalLayoutMath = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayoutMath->setSpacing(6);
        verticalLayoutMath->setContentsMargins(11, 11, 11, 11);
        verticalLayoutMath->setObjectName(QString::fromUtf8("verticalLayoutMath"));
        verticalLayoutMath->setContentsMargins(0, 0, 0, 0);
        labelMathExpectation = new QLabel(verticalLayoutWidget_2);
        labelMathExpectation->setObjectName(QString::fromUtf8("labelMathExpectation"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        labelMathExpectation->setFont(font4);

        verticalLayoutMath->addWidget(labelMathExpectation);

        labelMathDispertion = new QLabel(verticalLayoutWidget_2);
        labelMathDispertion->setObjectName(QString::fromUtf8("labelMathDispertion"));
        labelMathDispertion->setFont(font4);

        verticalLayoutMath->addWidget(labelMathDispertion);

        labelMathDeviation = new QLabel(verticalLayoutWidget_2);
        labelMathDeviation->setObjectName(QString::fromUtf8("labelMathDeviation"));
        labelMathDeviation->setFont(font4);

        verticalLayoutMath->addWidget(labelMathDeviation);

        labelIncompatibleEvents = new QLabel(verticalLayoutWidget_2);
        labelIncompatibleEvents->setObjectName(QString::fromUtf8("labelIncompatibleEvents"));
        labelIncompatibleEvents->setFont(font4);

        verticalLayoutMath->addWidget(labelIncompatibleEvents);

        labelIncompatibleEventsChoice = new QLabel(verticalLayoutWidget_2);
        labelIncompatibleEventsChoice->setObjectName(QString::fromUtf8("labelIncompatibleEventsChoice"));
        labelIncompatibleEventsChoice->setFont(font4);

        verticalLayoutMath->addWidget(labelIncompatibleEventsChoice);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 592, 21));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Author->setText(QApplication::translate("MainWindow", "\302\2512023 \320\232\321\200\320\260\320\277\320\270\320\262'\321\217\320\275\321\201\321\214\320\272\320\270\320\271 \320\224.\320\220, \320\237\320\206-211, \320\235\320\243 \"\320\247\320\265\321\200\320\275\321\226\320\263\321\226\320\262\321\201\321\214\320\272\320\260 \320\277\320\276\320\273\321\226\321\202\320\265\321\205\320\275\321\226\320\272\320\260\"", nullptr));
        Title->setText(QApplication::translate("MainWindow", "\320\233\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\260 \321\200\320\276\320\261\320\276\321\202\320\260 \342\204\2262 \"\320\234\320\276\320\264\320\265\320\273\321\216\320\262\320\260\320\275\320\275\321\217 \320\262\320\270\320\277\320\260\320\264\320\272\320\276\320\262\320\270\321\205 \320\262\320\265\320\273\320\270\321\207\320\270\320\275 \321\202\320\260 \320\277\320\276\320\264\321\226\320\271\"", nullptr));
        pushButtonTask1->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\262\320\264\320\260\320\275\320\275\321\217 1", nullptr));
        pushButtonTask2->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\262\320\264\320\260\320\275\320\275\321\217 2", nullptr));
        pushButtonTask3->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\262\320\264\320\260\320\275\320\275\321\217 3", nullptr));
        pushButtonTask4->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\262\320\264\320\260\320\275\320\275\321\217 4", nullptr));
        labelChoosedTask->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\320\275\320\265 \320\267\320\260\320\262\320\264\320\260\320\275\320\275\321\217", nullptr));
        pushButtonClear->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\320\270", nullptr));
        labelMathExpectation->setText(QApplication::translate("MainWindow", "\320\234\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\275\320\265 \321\201\320\277\320\276\320\264\321\226\320\262\320\260\320\275\320\275\321\217:", nullptr));
        labelMathDispertion->setText(QApplication::translate("MainWindow", "\320\224\320\270\321\201\320\277\320\265\321\200\321\201\321\226\321\217:", nullptr));
        labelMathDeviation->setText(QApplication::translate("MainWindow", "\320\241\320\265\321\200\320\265\320\264\320\275\321\224 \320\272\320\262\320\260\320\264\321\200\320\260\321\202\320\270\321\207\320\275\320\265 \320\262\321\226\320\264\321\205\320\270\320\273\320\265\320\275\320\275\321\217:", nullptr));
        labelIncompatibleEvents->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\273\320\265 \320\264\320\273\321\217 \320\274\320\276\320\264\320\265\320\273\321\216\320\262\320\260\320\275\320\275\321\217 \320\263\321\200\321\203\320\277\320\270 \320\275\320\265\321\201\321\203\320\274\321\226\321\201\320\275\320\270\321\205 \320\277\320\276\320\264\321\226\320\271", nullptr));
        labelIncompatibleEventsChoice->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\273\320\265 \320\264\320\273\321\217 \320\274\320\276\320\264\320\265\320\273\321\216\320\262\320\260\320\275\320\275\321\217 \320\263\321\200\321\203\320\277\320\270 \320\275\320\265\321\201\321\203\320\274\321\226\321\201\320\275\320\270\321\205 \320\277\320\276\320\264\321\226\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
