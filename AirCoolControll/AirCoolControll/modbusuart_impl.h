#ifndef MODBUSUART_IMPL_H
#define MODBUSUART_IMPL_H

#include <QObject>
#include <QtSerialPort\qserialport.h>
#include "IModBus.h"

class ModBusUART_Impl : public QObject, public IModBus
{
    Q_OBJECT

public:
    ModBusUART_Impl(const QSerialPortInfo& info,QObject *parent);
    ~ModBusUART_Impl();

    void   setSpeed(int speed);
    qint16 readRegister(quint16 id, quint16 regNumber);
    void   writeRegister(quint16 id, quint16 regNumber, qint16 value);
    void   readDeviceInfo(quint16 id, QString& vendor, QString& product, QString& version);

private slots:
    void communicationError(QSerialPort::SerialPortError);

private:
    static quint16 crc16(const char* buffer, int length);
    static QByteArray ModBusUART_Impl::makeRTUFrame(int slave, int function, const QByteArray & data);

private:
    QSerialPort             m_port;
};

#endif // MODBUSUART_IMPL_H
