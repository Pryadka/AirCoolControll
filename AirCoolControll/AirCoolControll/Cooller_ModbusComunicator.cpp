#include "Cooller_ModbusComunicator.h"
#include <QtSerialPort\qserialportinfo.h>
#include <qstring>
#include <qobject>
#include <algorithm>


Cooller_ModbusComunicator::Cooller_ModbusComunicator(CoolerStateWidget *view, ModBusDialog *config) :
    m_view(view), 
    m_config(config),
    m_recheckTimer(new QTimer(this)),
    m_available(false),
    m_comunicationSpeedIndex(6), //9600
    m_currentDeviveID(-1),
    m_port(this),
    m_connector(this),
    m_externalManager(this)
{
    connect(m_recheckTimer, SIGNAL(timeout()), this, SLOT(updateState()));
    m_recheckTimer->setInterval(500);
    m_recheckTimer->start();
    config->setExternalCommunicator(&m_connector);

    connect(m_config, SIGNAL(speedChanged(int)), this, SLOT(newSpeed(int)));
    connect(m_config, SIGNAL(portChanged(int)), this, SLOT(newPort(int)));
    connect(m_config, SIGNAL(deviceIDChanged(int)), this, SLOT(newDevice(int)));
    connect(&m_port, SIGNAL(error(QSerialPort::SerialPortError)), this, SLOT(communicationError(QSerialPort::SerialPortError)));
    connect(&m_connector, SIGNAL(connectionEstablished()), config, SLOT(connectionEstablished()));
    connect(&m_connector, SIGNAL(connectionEstablished()), this, SLOT(sendConfiguration()));
    connect(&m_connector, SIGNAL(connectionBroken()), config, SLOT(connectionBroken()));
    connect(&m_connector, SIGNAL(connectionErrorOccured(QString)), config, SLOT(connectionErrorOccured(QString)));
    connect(&m_externalManager, SIGNAL(stateChanged()), this, SLOT(externalStateChanged()));
}


Cooller_ModbusComunicator::~Cooller_ModbusComunicator()
{
}

void Cooller_ModbusComunicator::updateState(void)
{
    checkConnectionState();
}

bool Cooller_ModbusComunicator::equalPredicat(QSerialPortInfo& first, QSerialPortInfo& second)
{
    return first.portName() == second.portName();
}

void Cooller_ModbusComunicator::checkConnectionState(void)
{
    QList<QSerialPortInfo> a_info = QSerialPortInfo::availablePorts();

    if (a_info.empty())
    {
        m_config->setError(QObject::tr("COM ports aren't available"), true);
        m_info.clear();
        m_config->setCOMindex(-1);
        m_available = false;
        return;
    }
    
    if (a_info.size() != m_info.size() || ! std::equal(a_info.begin(), a_info.end(), m_info.begin(), equalPredicat))
    {
        int n = m_config->getCOMindex();
        if (-1 != n)
        {
            QString currentPortName = m_info[n].portName();
            n = -1;
            for (int i = 0; i < a_info.size(); i++)
            {
                if (a_info[i].portName() == currentPortName)
                {
                    n = i;
                    break;
                }
            }
        }
       
        if (!m_available)
        {
            m_available = true;
            m_config->clearError();
        }

        m_info = a_info;
        m_config->setCOMlist(m_info);
        
        n = (-1 != n) ? n : 0;
        m_config->setCOMindex(n);

        if (m_connector.isActive())
            sendConfiguration();
    }
}

void Cooller_ModbusComunicator::newSpeed(int n)
{
    m_comunicationSpeedIndex = n;
}

void Cooller_ModbusComunicator::newPort(int n)
{
    const static qint32 rates[] = {0};
    if (-1 != n)
    {
        QSerialPortInfo a_info = m_info[n];
        m_port.setPort(a_info);
        m_port.open(QIODevice::ReadWrite);
        m_port.setBaudRate(m_comunicationSpeedIndex);
    }
}

void Cooller_ModbusComunicator::newDevice(int n)
{
    m_currentDeviveID = n;
}

void Cooller_ModbusComunicator::communicationError(QSerialPort::SerialPortError err)
{
    switch (err)
    {
    case QSerialPort::DeviceNotFoundError :
        m_config->setError(QString("Nothing Connected"));
        break;
    }
}

void Cooller_ModbusComunicator::sendConfiguration(void)
{
    QList<QString> ports;

    for (auto info : m_info)
    {
        ports.push_back(info.description() + ' ' + info.portName());
    }
    m_connector.sendPortList(ports);
}

void Cooller_ModbusComunicator::externalStateChanged(void)
{

}