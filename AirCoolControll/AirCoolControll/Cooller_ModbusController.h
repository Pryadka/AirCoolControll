#ifndef __Cooller_ModBusController__
#define __Cooller_ModBusController__

#include "coolerstatewidget.h"
#include "modbusdialog.h"
#include "externalcontrollmanager.h"
#include <QtSerialPort\qserialportinfo.h>
#include <QtSerialPort\qserialport.h>
#include <qtimer.h>
#include <memory>

class Cooller_ModBusController : public QObject
{
    Q_OBJECT
public:
    Cooller_ModBusController(CoolerStateWidget *view, ModBusDialog *config);
    ~Cooller_ModBusController();

private:
    void checkConnectionState(void);
    static bool equalPredicat(QSerialPortInfo& first,QSerialPortInfo& second);

private slots:
    void updateState(void);
    void newSpeed(int);
    void newPort(int);
    void newDevice(int);
    void sendConfiguration(void);
    void externalStateChanged(void);
    void externalListChanged(void);

private:
    CoolerStateWidget *     m_view;
    ModBusDialog *          m_config;
    QList<QSerialPortInfo>  m_info;
    QTimer   *              m_recheckTimer;
    bool                    m_available;
    int                     m_comunicationSpeedIndex;
    int                     m_currentDeviveID;
    ExternalConnector       m_connector;
    ExternalControllManager m_externalManager;
};

#endif // __Cooller_ModBusController__
