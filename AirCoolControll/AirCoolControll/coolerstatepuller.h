#ifndef COOLERSTATEPULLER_H
#define COOLERSTATEPULLER_H

#include <QThread>
#include "PullerTask.h"
#include <qlist.h>
#include "modbusuart_impl.h"

class CoolerStatePuller : public QThread
{
    Q_OBJECT

public:
    CoolerStatePuller(QObject *parent);
    ~CoolerStatePuller();

    void clearTaskList();
    void removeTaskWithID(int id);
    void addTask(PullerTaskShared a_task);
    void startPulling();
    void stopPulling();

protected:
    void run(void);

private:
    QList<PullerTaskShared> m_tasks;
    ModBusUART_Impl * m_modbus;
    bool              m_isStoped;
};

#endif // COOLERSTATEPULLER_H
