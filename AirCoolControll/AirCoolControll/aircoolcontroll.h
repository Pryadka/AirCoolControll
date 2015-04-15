#ifndef AIRCOOLCONTROLL_H
#define AIRCOOLCONTROLL_H

#include <QtWidgets/QMainWindow>
#include "ui_aircoolcontroll.h"
#include "modbusdialog.h"
#include "coolerstatewidget.h"

class AirCoolControll : public QMainWindow
{
    Q_OBJECT

public:
    AirCoolControll(QWidget *parent = 0);
    ~AirCoolControll();

    CoolerStateWidget * getStateWidget();
    ModBusDialog *      getConfigWidget();

private:
    Ui::AirCoolControllClass ui;
};

#endif // AIRCOOLCONTROLL_H
