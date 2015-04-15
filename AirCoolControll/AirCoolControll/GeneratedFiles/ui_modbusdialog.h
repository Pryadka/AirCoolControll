/********************************************************************************
** Form generated from reading UI file 'modbusdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODBUSDIALOG_H
#define UI_MODBUSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "connectionlog.h"
#include "connectionparameters.h"

QT_BEGIN_NAMESPACE

class Ui_ModBusDialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    ConnectionParameters *parameters;
    ConnectionLog *log;

    void setupUi(QWidget *ModBusDialog)
    {
        if (ModBusDialog->objectName().isEmpty())
            ModBusDialog->setObjectName(QStringLiteral("ModBusDialog"));
        ModBusDialog->resize(400, 300);
        gridLayout_2 = new QGridLayout(ModBusDialog);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(ModBusDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        parameters = new ConnectionParameters(groupBox);
        parameters->setObjectName(QStringLiteral("parameters"));

        verticalLayout->addWidget(parameters);

        log = new ConnectionLog(groupBox);
        log->setObjectName(QStringLiteral("log"));

        verticalLayout->addWidget(log);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(ModBusDialog);

        QMetaObject::connectSlotsByName(ModBusDialog);
    } // setupUi

    void retranslateUi(QWidget *ModBusDialog)
    {
        ModBusDialog->setWindowTitle(QApplication::translate("ModBusDialog", "ModBusDialog", 0));
        groupBox->setTitle(QApplication::translate("ModBusDialog", "ModBus Info", 0));
    } // retranslateUi

};

namespace Ui {
    class ModBusDialog: public Ui_ModBusDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODBUSDIALOG_H
