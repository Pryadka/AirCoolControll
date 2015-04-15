/********************************************************************************
** Form generated from reading UI file 'coolerstatewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COOLERSTATEWIDGET_H
#define UI_COOLERSTATEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CoolerStateWidget
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QLabel *label_left_arrow;
    QLabel *label_right_arrow;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QTableWidget *tableWidget;

    void setupUi(QWidget *CoolerStateWidget)
    {
        if (CoolerStateWidget->objectName().isEmpty())
            CoolerStateWidget->setObjectName(QStringLiteral("CoolerStateWidget"));
        CoolerStateWidget->resize(662, 548);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CoolerStateWidget->sizePolicy().hasHeightForWidth());
        CoolerStateWidget->setSizePolicy(sizePolicy);
        CoolerStateWidget->setMaximumSize(QSize(662, 548));
        gridLayout = new QGridLayout(CoolerStateWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(CoolerStateWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        label_left_arrow = new QLabel(groupBox_2);
        label_left_arrow->setObjectName(QStringLiteral("label_left_arrow"));
        label_left_arrow->setGeometry(QRect(170, 120, 36, 107));
        label_left_arrow->setPixmap(QPixmap(QString::fromUtf8(":/Images/left_stream_0.gif")));
        label_right_arrow = new QLabel(groupBox_2);
        label_right_arrow->setObjectName(QStringLiteral("label_right_arrow"));
        label_right_arrow->setGeometry(QRect(480, 130, 31, 101));
        label_right_arrow->setPixmap(QPixmap(QString::fromUtf8(":/Images/right_stream_0.gif")));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Images/shema-konditsionera.gif")));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        tableWidget = new QTableWidget(groupBox_2);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setColumnCount(3);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(tableWidget, 1, 0, 1, 1);

        label->raise();
        label_left_arrow->raise();
        label_right_arrow->raise();

        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);


        retranslateUi(CoolerStateWidget);

        QMetaObject::connectSlotsByName(CoolerStateWidget);
    } // setupUi

    void retranslateUi(QWidget *CoolerStateWidget)
    {
        CoolerStateWidget->setWindowTitle(QApplication::translate("CoolerStateWidget", "CoolerStateWidget", 0));
        groupBox_2->setTitle(QApplication::translate("CoolerStateWidget", "Air Cooller State", 0));
        label_left_arrow->setText(QString());
        label_right_arrow->setText(QString());
        label->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CoolerStateWidget", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CoolerStateWidget", "Value", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CoolerStateWidget", "Description", 0));
    } // retranslateUi

};

namespace Ui {
    class CoolerStateWidget: public Ui_CoolerStateWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COOLERSTATEWIDGET_H
