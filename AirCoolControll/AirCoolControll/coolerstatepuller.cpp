#include "coolerstatepuller.h"

CoolerStatePuller::CoolerStatePuller(QObject *parent)
    : QThread(parent),
    m_modbus(NULL),
    m_isStoped(true)
{

}

CoolerStatePuller::~CoolerStatePuller()
{

}

void CoolerStatePuller::clearTaskList()
{
    m_tasks.clear();
}

void CoolerStatePuller::removeTaskWithID(int id)
{
    bool finished = true;
    while (finished)
    {
        finished = false;
        for (QList<PullerTaskShared>::iterator it = m_tasks.begin(); it != m_tasks.end(); it++)
        {
            if (id == (*it)->getID())
            {
                m_tasks.erase(it);
                finished = true;
                break;
            }
        }
    }
}

void CoolerStatePuller::addTask(PullerTaskShared a_task)
{
    m_tasks.append(a_task);
}

void CoolerStatePuller::run(void)
{
    while (true)
    {
        if (m_isStoped)
            QThread::yieldCurrentThread();

        for (PullerTaskShared task : m_tasks)
        {
            QVector<quint16> res;
            m_modbus->readRegisterPool(task->getID(), task->getRange().first, task->getRange().second - task->getRange().first, res);
            task->setContent(res);
        }
    }
}

void CoolerStatePuller::startPulling()
{
    m_isStoped = false;
}

void CoolerStatePuller::stopPulling()
{
    m_isStoped = true;
}