/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QRadioButton *btnIsDecimal;
    QRadioButton *btnIsHex;
    QLineEdit *dspResult;
    QFrame *frame_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnDouble;
    QPushButton *btnFloat;
    QPushButton *btnLong;
    QPushButton *btnInt;
    QPushButton *btnShort;
    QPushButton *btnChar;
    QFrame *frame_3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btn3;
    QPushButton *btn2;
    QPushButton *btn1;
    QPushButton *btn6;
    QPushButton *btn5;
    QPushButton *btn4;
    QPushButton *btn9;
    QPushButton *btn8;
    QPushButton *btn7;
    QPushButton *btnClr;
    QPushButton *btn0;
    QPushButton *btnEnt;
    QLabel *label;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(574, 531);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 551, 91));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        btnIsDecimal = new QRadioButton(frame);
        btnIsDecimal->setObjectName(QStringLiteral("btnIsDecimal"));
        btnIsDecimal->setGeometry(QRect(430, 20, 112, 23));
        btnIsDecimal->setChecked(true);
        btnIsHex = new QRadioButton(frame);
        btnIsHex->setObjectName(QStringLiteral("btnIsHex"));
        btnIsHex->setGeometry(QRect(430, 50, 112, 23));
        dspResult = new QLineEdit(frame);
        dspResult->setObjectName(QStringLiteral("dspResult"));
        dspResult->setGeometry(QRect(12, 14, 401, 61));
        QFont font;
        font.setPointSize(40);
        dspResult->setFont(font);
        dspResult->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dspResult->setReadOnly(true);
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(20, 120, 121, 361));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 9, 101, 341));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnDouble = new QPushButton(verticalLayoutWidget);
        btnDouble->setObjectName(QStringLiteral("btnDouble"));
        btnDouble->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnDouble->sizePolicy().hasHeightForWidth());
        btnDouble->setSizePolicy(sizePolicy);
        btnDouble->setFlat(false);

        verticalLayout_2->addWidget(btnDouble);

        btnFloat = new QPushButton(verticalLayoutWidget);
        btnFloat->setObjectName(QStringLiteral("btnFloat"));
        sizePolicy.setHeightForWidth(btnFloat->sizePolicy().hasHeightForWidth());
        btnFloat->setSizePolicy(sizePolicy);
        btnFloat->setFlat(false);

        verticalLayout_2->addWidget(btnFloat);

        btnLong = new QPushButton(verticalLayoutWidget);
        btnLong->setObjectName(QStringLiteral("btnLong"));
        sizePolicy.setHeightForWidth(btnLong->sizePolicy().hasHeightForWidth());
        btnLong->setSizePolicy(sizePolicy);
        btnLong->setFlat(false);

        verticalLayout_2->addWidget(btnLong);

        btnInt = new QPushButton(verticalLayoutWidget);
        btnInt->setObjectName(QStringLiteral("btnInt"));
        sizePolicy.setHeightForWidth(btnInt->sizePolicy().hasHeightForWidth());
        btnInt->setSizePolicy(sizePolicy);
        btnInt->setFlat(false);

        verticalLayout_2->addWidget(btnInt);

        btnShort = new QPushButton(verticalLayoutWidget);
        btnShort->setObjectName(QStringLiteral("btnShort"));
        sizePolicy.setHeightForWidth(btnShort->sizePolicy().hasHeightForWidth());
        btnShort->setSizePolicy(sizePolicy);
        btnShort->setFlat(false);

        verticalLayout_2->addWidget(btnShort);

        btnChar = new QPushButton(verticalLayoutWidget);
        btnChar->setObjectName(QStringLiteral("btnChar"));
        sizePolicy.setHeightForWidth(btnChar->sizePolicy().hasHeightForWidth());
        btnChar->setSizePolicy(sizePolicy);
        btnChar->setFlat(false);

        verticalLayout_2->addWidget(btnChar);

        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(260, 120, 291, 361));
        frame_3->setFrameShape(QFrame::Panel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(frame_3);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 9, 281, 341));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn3 = new QPushButton(gridLayoutWidget);
        btn3->setObjectName(QStringLiteral("btn3"));
        sizePolicy.setHeightForWidth(btn3->sizePolicy().hasHeightForWidth());
        btn3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn3, 0, 2, 1, 1);

        btn2 = new QPushButton(gridLayoutWidget);
        btn2->setObjectName(QStringLiteral("btn2"));
        sizePolicy.setHeightForWidth(btn2->sizePolicy().hasHeightForWidth());
        btn2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn2, 0, 1, 1, 1);

        btn1 = new QPushButton(gridLayoutWidget);
        btn1->setObjectName(QStringLiteral("btn1"));
        sizePolicy.setHeightForWidth(btn1->sizePolicy().hasHeightForWidth());
        btn1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn1, 0, 0, 1, 1);

        btn6 = new QPushButton(gridLayoutWidget);
        btn6->setObjectName(QStringLiteral("btn6"));
        sizePolicy.setHeightForWidth(btn6->sizePolicy().hasHeightForWidth());
        btn6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn6, 1, 2, 1, 1);

        btn5 = new QPushButton(gridLayoutWidget);
        btn5->setObjectName(QStringLiteral("btn5"));
        sizePolicy.setHeightForWidth(btn5->sizePolicy().hasHeightForWidth());
        btn5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn5, 1, 1, 1, 1);

        btn4 = new QPushButton(gridLayoutWidget);
        btn4->setObjectName(QStringLiteral("btn4"));
        sizePolicy.setHeightForWidth(btn4->sizePolicy().hasHeightForWidth());
        btn4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn4, 1, 0, 1, 1);

        btn9 = new QPushButton(gridLayoutWidget);
        btn9->setObjectName(QStringLiteral("btn9"));
        sizePolicy.setHeightForWidth(btn9->sizePolicy().hasHeightForWidth());
        btn9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn9, 2, 2, 1, 1);

        btn8 = new QPushButton(gridLayoutWidget);
        btn8->setObjectName(QStringLiteral("btn8"));
        sizePolicy.setHeightForWidth(btn8->sizePolicy().hasHeightForWidth());
        btn8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn8, 2, 1, 1, 1);

        btn7 = new QPushButton(gridLayoutWidget);
        btn7->setObjectName(QStringLiteral("btn7"));
        sizePolicy.setHeightForWidth(btn7->sizePolicy().hasHeightForWidth());
        btn7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn7, 2, 0, 1, 1);

        btnClr = new QPushButton(gridLayoutWidget);
        btnClr->setObjectName(QStringLiteral("btnClr"));
        sizePolicy.setHeightForWidth(btnClr->sizePolicy().hasHeightForWidth());
        btnClr->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnClr, 3, 0, 1, 1);

        btn0 = new QPushButton(gridLayoutWidget);
        btn0->setObjectName(QStringLiteral("btn0"));
        sizePolicy.setHeightForWidth(btn0->sizePolicy().hasHeightForWidth());
        btn0->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn0, 3, 1, 1, 1);

        btnEnt = new QPushButton(gridLayoutWidget);
        btnEnt->setObjectName(QStringLiteral("btnEnt"));
        sizePolicy.setHeightForWidth(btnEnt->sizePolicy().hasHeightForWidth());
        btnEnt->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnEnt, 3, 2, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 270, 81, 61));
        QFont font1;
        font1.setPointSize(100);
        label->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        btnIsDecimal->setText(QApplication::translate("MainWindow", "Decimal", Q_NULLPTR));
        btnIsHex->setText(QApplication::translate("MainWindow", "Hex", Q_NULLPTR));
        dspResult->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        btnDouble->setText(QApplication::translate("MainWindow", "double", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btnDouble->setShortcut(QApplication::translate("MainWindow", "D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btnFloat->setText(QApplication::translate("MainWindow", "float", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btnFloat->setShortcut(QApplication::translate("MainWindow", "F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btnLong->setText(QApplication::translate("MainWindow", "long", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btnLong->setShortcut(QApplication::translate("MainWindow", "L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btnInt->setText(QApplication::translate("MainWindow", "int", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btnInt->setShortcut(QApplication::translate("MainWindow", "I", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btnShort->setText(QApplication::translate("MainWindow", "short", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btnShort->setShortcut(QApplication::translate("MainWindow", "S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btnChar->setText(QApplication::translate("MainWindow", "char", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btnChar->setShortcut(QApplication::translate("MainWindow", "C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btn3->setShortcut(QApplication::translate("MainWindow", "3", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btn2->setShortcut(QApplication::translate("MainWindow", "2", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btn1->setShortcut(QApplication::translate("MainWindow", "1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btn6->setShortcut(QApplication::translate("MainWindow", "6", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btn5->setShortcut(QApplication::translate("MainWindow", "5", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btn4->setShortcut(QApplication::translate("MainWindow", "4", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btn9->setShortcut(QApplication::translate("MainWindow", "9", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btn8->setShortcut(QApplication::translate("MainWindow", "8", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btn7->setShortcut(QApplication::translate("MainWindow", "7", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btnClr->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
        btn0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btn0->setShortcut(QApplication::translate("MainWindow", "0", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btnEnt->setText(QApplication::translate("MainWindow", "Enter", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btnEnt->setShortcut(QApplication::translate("MainWindow", "Enter", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
