#include "aircoolcontroll.h"

AirCoolControll::AirCoolControll(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
   /* ui.stateWidget->leftWindState(true);
    ui.stateWidget->rightWindState(true);*/
}

AirCoolControll::~AirCoolControll()
{

}

CoolerStateWidget * AirCoolControll::getStateWidget()
{
    return ui.stateWidget;
}

ModBusDialog *      AirCoolControll::getConfigWidget()
{
    return ui.configWidget;
}
