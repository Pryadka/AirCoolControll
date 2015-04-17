#include "aircoolcontroll.h"
#include <QtWidgets/QApplication>
#include "Cooller_ModbusController.h"
#include "Configurator.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Configurator conf;
    
    AirCoolControll w;
    
    Cooller_ModBusController comunicator(w.getStateWidget(),w.getConfigWidget());
    w.show();
    return a.exec();
}
