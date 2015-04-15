/********************************************************************************
** Form generated from reading UI file 'connectionparameters.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONPARAMETERS_H
#define UI_CONNECTIONPARAMETERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <iplineedit.h>

QT_BEGIN_NAMESPACE

class Ui_ConnectionParameters
{
public:
    QGridLayout *gridLayout_3;
    QTabWidget *controllTypeTab;
    QWidget *tab;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxCOM;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBoxSpeed;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *spinBoxID;
    QLabel *label_3;
    QLabel *communicationErrorLabel;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout;
    IpLineEdit *ipEd0;
    QLabel *label_4;
    IpLineEdit *ipEd1;
    QLabel *label_5;
    IpLineEdit *ipEd2;
    QLabel *label_6;
    IpLineEdit *ipEd3;
    QFrame *line;
    QLabel *externalStatusLabel;
    QFrame *line_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *connectButton;
    QPushButton *disconnectButton;

    void setupUi(QWidget *ConnectionParameters)
    {
        if (ConnectionParameters->objectName().isEmpty())
            ConnectionParameters->setObjectName(QStringLiteral("ConnectionParameters"));
        ConnectionParameters->resize(360, 300);
        gridLayout_3 = new QGridLayout(ConnectionParameters);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        controllTypeTab = new QTabWidget(ConnectionParameters);
        controllTypeTab->setObjectName(QStringLiteral("controllTypeTab"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        comboBoxCOM = new QComboBox(groupBox);
        comboBoxCOM->setObjectName(QStringLiteral("comboBoxCOM"));

        horizontalLayout_2->addWidget(comboBoxCOM);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);

        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        comboBoxSpeed = new QComboBox(groupBox);
        comboBoxSpeed->setObjectName(QStringLiteral("comboBoxSpeed"));

        horizontalLayout_3->addWidget(comboBoxSpeed);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);

        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        spinBoxID = new QSpinBox(groupBox);
        spinBoxID->setObjectName(QStringLiteral("spinBoxID"));
        spinBoxID->setMinimum(1);
        spinBoxID->setMaximum(127);

        horizontalLayout_4->addWidget(spinBoxID);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);

        verticalLayout_2->addLayout(horizontalLayout_4);

        communicationErrorLabel = new QLabel(groupBox);
        communicationErrorLabel->setObjectName(QStringLiteral("communicationErrorLabel"));
        communicationErrorLabel->setEnabled(false);
        communicationErrorLabel->setText(QStringLiteral(""));

        verticalLayout_2->addWidget(communicationErrorLabel);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        controllTypeTab->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ipEd0 = new IpLineEdit(tab_2);
        ipEd0->setObjectName(QStringLiteral("ipEd0"));

        horizontalLayout->addWidget(ipEd0);

        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setScaledContents(true);

        horizontalLayout->addWidget(label_4);

        ipEd1 = new IpLineEdit(tab_2);
        ipEd1->setObjectName(QStringLiteral("ipEd1"));

        horizontalLayout->addWidget(ipEd1);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setScaledContents(true);

        horizontalLayout->addWidget(label_5);

        ipEd2 = new IpLineEdit(tab_2);
        ipEd2->setObjectName(QStringLiteral("ipEd2"));

        horizontalLayout->addWidget(ipEd2);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setScaledContents(true);

        horizontalLayout->addWidget(label_6);

        ipEd3 = new IpLineEdit(tab_2);
        ipEd3->setObjectName(QStringLiteral("ipEd3"));

        horizontalLayout->addWidget(ipEd3);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(tab_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        externalStatusLabel = new QLabel(tab_2);
        externalStatusLabel->setObjectName(QStringLiteral("externalStatusLabel"));

        verticalLayout->addWidget(externalStatusLabel);

        line_2 = new QFrame(tab_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        connectButton = new QPushButton(tab_2);
        connectButton->setObjectName(QStringLiteral("connectButton"));

        horizontalLayout_5->addWidget(connectButton);

        disconnectButton = new QPushButton(tab_2);
        disconnectButton->setObjectName(QStringLiteral("disconnectButton"));

        horizontalLayout_5->addWidget(disconnectButton);


        verticalLayout->addLayout(horizontalLayout_5);


        gridLayout_4->addLayout(verticalLayout, 0, 0, 1, 1);

        controllTypeTab->addTab(tab_2, QString());

        gridLayout_3->addWidget(controllTypeTab, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(comboBoxCOM);
        label_2->setBuddy(comboBoxSpeed);
        label_3->setBuddy(spinBoxID);
#endif // QT_NO_SHORTCUT

        retranslateUi(ConnectionParameters);

        controllTypeTab->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ConnectionParameters);
    } // setupUi

    void retranslateUi(QWidget *ConnectionParameters)
    {
        ConnectionParameters->setWindowTitle(QApplication::translate("ConnectionParameters", "ConnectionParameters", 0));
        groupBox->setTitle(QApplication::translate("ConnectionParameters", "ModBus Parameters", 0));
        label->setText(QApplication::translate("ConnectionParameters", "Serial port", 0));
        label_2->setText(QApplication::translate("ConnectionParameters", "Transmition Speed", 0));
        label_3->setText(QApplication::translate("ConnectionParameters", "Device ID", 0));
        controllTypeTab->setTabText(controllTypeTab->indexOf(tab), QApplication::translate("ConnectionParameters", "Internal", 0));
        label_7->setText(QApplication::translate("ConnectionParameters", "External IP adress :", 0));
        label_4->setText(QApplication::translate("ConnectionParameters", ".", 0));
        label_5->setText(QApplication::translate("ConnectionParameters", ".", 0));
        label_6->setText(QApplication::translate("ConnectionParameters", ".", 0));
        externalStatusLabel->setText(QApplication::translate("ConnectionParameters", "Status", 0));
        connectButton->setText(QApplication::translate("ConnectionParameters", "Connect", 0));
        disconnectButton->setText(QApplication::translate("ConnectionParameters", "Disconnect", 0));
        controllTypeTab->setTabText(controllTypeTab->indexOf(tab_2), QApplication::translate("ConnectionParameters", "External", 0));
    } // retranslateUi

};

namespace Ui {
    class ConnectionParameters: public Ui_ConnectionParameters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONPARAMETERS_H
