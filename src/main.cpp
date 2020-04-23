#include "include/mainwindow.h"
#include "include/structCalculator.h"
#include <QtWidgets/QApplication>
#include "ui_mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    structCalculator* s = new structCalculator();

    QObject::connect(s, SIGNAL(sendText(const QString&)), w.ui->dspResult, SLOT(setText(const QString&)));
    QObject::connect(w.ui->btnIsDecimal, SIGNAL(toggled(bool)), s, SLOT(switchDisplayType(bool)));
    QObject::connect(w.ui->btnIsHex, SIGNAL(toggled(bool)), s, SLOT(switchDisplayType(bool)));

    QObject::connect(w.ui->btnDouble, SIGNAL(clicked()), s, SLOT(btnSelectTypePressed()));
    QObject::connect(w.ui->btnFloat, SIGNAL(clicked()), s, SLOT(btnSelectTypePressed()));
    QObject::connect(w.ui->btnLong, SIGNAL(clicked()), s, SLOT(btnSelectTypePressed()));
    QObject::connect(w.ui->btnInt, SIGNAL(clicked()), s, SLOT(btnSelectTypePressed()));
    QObject::connect(w.ui->btnShort, SIGNAL(clicked()), s, SLOT(btnSelectTypePressed()));
    QObject::connect(w.ui->btnChar, SIGNAL(clicked()), s, SLOT(btnSelectTypePressed()));

    QObject::connect(w.ui->btnClr, SIGNAL(clicked()), s, SLOT(btnClear()));
    QObject::connect(w.ui->btnEnt, SIGNAL(clicked()), s, SLOT(btnEnter()));

    QObject::connect(w.ui->btn0, SIGNAL(clicked()), s, SLOT(btnNumPadPressed()));
    QObject::connect(w.ui->btn1, SIGNAL(clicked()), s, SLOT(btnNumPadPressed()));
    QObject::connect(w.ui->btn2, SIGNAL(clicked()), s, SLOT(btnNumPadPressed()));
    QObject::connect(w.ui->btn3, SIGNAL(clicked()), s, SLOT(btnNumPadPressed()));
    QObject::connect(w.ui->btn4, SIGNAL(clicked()), s, SLOT(btnNumPadPressed()));
    QObject::connect(w.ui->btn5, SIGNAL(clicked()), s, SLOT(btnNumPadPressed()));
    QObject::connect(w.ui->btn6, SIGNAL(clicked()), s, SLOT(btnNumPadPressed()));
    QObject::connect(w.ui->btn7, SIGNAL(clicked()), s, SLOT(btnNumPadPressed()));
    QObject::connect(w.ui->btn8, SIGNAL(clicked()), s, SLOT(btnNumPadPressed()));
    QObject::connect(w.ui->btn9, SIGNAL(clicked()), s, SLOT(btnNumPadPressed()));


    w.show();

    return a.exec();
}
