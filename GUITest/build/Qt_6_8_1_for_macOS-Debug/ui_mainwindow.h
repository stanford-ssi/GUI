/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtFirstNum;
    QLineEdit *txtSecondNum;
    QPushButton *btnAdd;
    QPushButton *btnSubtract;
    QPushButton *btnMultiply;
    QPushButton *btnDivide;
    QLabel *label_3;
    QLineEdit *txtResult;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(548, 206);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 40, 81, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 70, 121, 21));
        txtFirstNum = new QLineEdit(centralwidget);
        txtFirstNum->setObjectName("txtFirstNum");
        txtFirstNum->setGeometry(QRect(170, 40, 113, 21));
        txtSecondNum = new QLineEdit(centralwidget);
        txtSecondNum->setObjectName("txtSecondNum");
        txtSecondNum->setGeometry(QRect(170, 70, 113, 21));
        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(40, 110, 100, 32));
        btnSubtract = new QPushButton(centralwidget);
        btnSubtract->setObjectName("btnSubtract");
        btnSubtract->setGeometry(QRect(150, 110, 100, 32));
        btnMultiply = new QPushButton(centralwidget);
        btnMultiply->setObjectName("btnMultiply");
        btnMultiply->setGeometry(QRect(260, 110, 100, 32));
        btnDivide = new QPushButton(centralwidget);
        btnDivide->setObjectName("btnDivide");
        btnDivide->setGeometry(QRect(370, 110, 100, 32));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 150, 121, 21));
        txtResult = new QLineEdit(centralwidget);
        txtResult->setObjectName("txtResult");
        txtResult->setGeometry(QRect(170, 150, 113, 21));
        txtResult->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "First Number", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Second Number", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnSubtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btnMultiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btnDivide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "The Result Is: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
