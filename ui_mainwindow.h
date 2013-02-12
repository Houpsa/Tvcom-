/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat 2. Feb 19:26:14 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_1;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButtonMoins;
    QPushButton *pushButtonVolmoins;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_0;
    QPushButton *pushButtonOnOff;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_9;
    QPushButton *pushButtonPlus;
    QPushButton *pushButtonVolUp;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 533);
        MainWindow->setMaximumSize(QSize(800, 533));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMinimumSize(QSize(800, 480));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 10, 511, 331));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_1 = new QPushButton(horizontalLayoutWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setMinimumSize(QSize(5, 50));

        verticalLayout->addWidget(pushButton_1);

        pushButton_4 = new QPushButton(horizontalLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(pushButton_4);

        pushButton_7 = new QPushButton(horizontalLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(pushButton_7);

        pushButtonMoins = new QPushButton(horizontalLayoutWidget);
        pushButtonMoins->setObjectName(QString::fromUtf8("pushButtonMoins"));
        pushButtonMoins->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(pushButtonMoins);

        pushButtonVolmoins = new QPushButton(horizontalLayoutWidget);
        pushButtonVolmoins->setObjectName(QString::fromUtf8("pushButtonVolmoins"));

        verticalLayout->addWidget(pushButtonVolmoins);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_3->setContentsMargins(5, -1, -1, -1);
        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 50));

        verticalLayout_3->addWidget(pushButton_2);

        pushButton_5 = new QPushButton(horizontalLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(0, 50));

        verticalLayout_3->addWidget(pushButton_5);

        pushButton_8 = new QPushButton(horizontalLayoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(0, 50));

        verticalLayout_3->addWidget(pushButton_8);

        pushButton_0 = new QPushButton(horizontalLayoutWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setMinimumSize(QSize(0, 50));

        verticalLayout_3->addWidget(pushButton_0);

        pushButtonOnOff = new QPushButton(horizontalLayoutWidget);
        pushButtonOnOff->setObjectName(QString::fromUtf8("pushButtonOnOff"));

        verticalLayout_3->addWidget(pushButtonOnOff);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_6 = new QPushButton(horizontalLayoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(pushButton_6);

        pushButton_9 = new QPushButton(horizontalLayoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(pushButton_9);

        pushButtonPlus = new QPushButton(horizontalLayoutWidget);
        pushButtonPlus->setObjectName(QString::fromUtf8("pushButtonPlus"));
        pushButtonPlus->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(pushButtonPlus);

        pushButtonVolUp = new QPushButton(horizontalLayoutWidget);
        pushButtonVolUp->setObjectName(QString::fromUtf8("pushButtonVolUp"));

        verticalLayout_2->addWidget(pushButtonVolUp);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBox = new QCheckBox(horizontalLayoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_2->addWidget(checkBox);


        horizontalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(checkBox, SIGNAL(stateChanged(int)), pushButton_1, SLOT(click()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        pushButton_1->setText(QApplication::translate("MainWindow", "Bouton1", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "Bouton4", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("MainWindow", "bouton7", 0, QApplication::UnicodeUTF8));
        pushButtonMoins->setText(QApplication::translate("MainWindow", "Moins", 0, QApplication::UnicodeUTF8));
        pushButtonVolmoins->setText(QApplication::translate("MainWindow", "Vol-", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "Bouton2", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("MainWindow", "button5", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("MainWindow", "Bouton8", 0, QApplication::UnicodeUTF8));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        pushButtonOnOff->setText(QApplication::translate("MainWindow", "on/off", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "Bouton3", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("MainWindow", "Bouton6", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("MainWindow", "Bouton9", 0, QApplication::UnicodeUTF8));
        pushButtonPlus->setText(QApplication::translate("MainWindow", "Plus", 0, QApplication::UnicodeUTF8));
        pushButtonVolUp->setText(QApplication::translate("MainWindow", "vol+", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("MainWindow", "CheckBox", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
