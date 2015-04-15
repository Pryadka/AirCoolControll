/********************************************************************************
** Form generated from reading UI file 'aircoolcontroll.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIRCOOLCONTROLL_H
#define UI_AIRCOOLCONTROLL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "coolerstatewidget.h"
#include "modbusdialog.h"

QT_BEGIN_NAMESPACE

class Ui_AirCoolControllClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    ModBusDialog *configWidget;
    CoolerStateWidget *stateWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AirCoolControllClass)
    {
        if (AirCoolControllClass->objectName().isEmpty())
            AirCoolControllClass->setObjectName(QStringLiteral("AirCoolControllClass"));
        AirCoolControllClass->resize(1200, 558);
        centralWidget = new QWidget(AirCoolControllClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        configWidget = new ModBusDialog(centralWidget);
        configWidget->setObjectName(QStringLiteral("configWidget"));

        gridLayout_2->addWidget(configWidget, 0, 0, 1, 1);

        stateWidget = new CoolerStateWidget(centralWidget);
        stateWidget->setObjectName(QStringLiteral("stateWidget"));

        gridLayout_2->addWidget(stateWidget, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        AirCoolControllClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AirCoolControllClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        AirCoolControllClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AirCoolControllClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AirCoolControllClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AirCoolControllClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AirCoolControllClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAbout->menuAction());

        retranslateUi(AirCoolControllClass);

        QMetaObject::connectSlotsByName(AirCoolControllClass);
    } // setupUi

    void retranslateUi(QMainWindow *AirCoolControllClass)
    {
        AirCoolControllClass->setWindowTitle(QApplication::translate("AirCoolControllClass", "AirCoolControll", 0));
        menuFile->setTitle(QApplication::translate("AirCoolControllClass", "File", 0));
        menuAbout->setTitle(QApplication::translate("AirCoolControllClass", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class AirCoolControllClass: public Ui_AirCoolControllClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIRCOOLCONTROLL_H
