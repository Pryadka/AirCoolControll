#ifndef COOLLEREXPLORER_H
#define COOLLEREXPLORER_H

#include <QObject>
#include "ConfigMap.h"

class CoollerExplorer : public QObject
{
    Q_OBJECT

public:
    enum State{Ready = 0,NoConfigs,DeviceNotReady};
    CoollerExplorer(QObject *parent);
    ~CoollerExplorer();

    bool setNewAdress(const QString& portName, int id);
    int  getRegisterValue(int regNumber);
    bool setRegisterValue(int regNumber, int value);
    QString errorString();

private:
    bool readXMLConfig(const QString& path);

private:
    State   m_state;
    QString m_errorString;
    std::list<ConfigMap> m_configs;
};

#endif // COOLLEREXPLORER_H
