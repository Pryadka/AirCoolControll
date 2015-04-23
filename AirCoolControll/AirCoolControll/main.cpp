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
    QObject::connect(&comunicator, SIGNAL(newState(const QString&)), w.statusBar(), SLOT(showMessage(const QString&, int)));
    w.show();
    return a.exec();
}
