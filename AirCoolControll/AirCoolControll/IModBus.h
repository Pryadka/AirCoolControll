#ifndef __IMODBUS__
#define __IMODBUS__

#include <QtGlobal>

class IModBus
{
public:
    IModBus();
    virtual ~IModBus() = 0;

    virtual void   setSpeed(int speed) = 0;
    virtual qint16 readRegister(quint16 id, quint16 regNumber) = 0;
    virtual void   writeRegister(quint16 id, quint16 regNumber, qint16 value) = 0;
    virtual void   readDeviceInfo(quint16 id, QString& vendor, QString& product, QString& version) = 0;
};

#endif //__IMODBUS__

