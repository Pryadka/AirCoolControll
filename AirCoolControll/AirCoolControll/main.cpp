#include "aircoolcontroll.h"
#include <QtWidgets/QApplication>
#include "Cooller_ModbusComunicator.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AirCoolControll w;
    Cooller_ModbusComunicator comunicator(w.getStateWidget(),w.getConfigWidget());
    w.show();
    return a.exec();
}
