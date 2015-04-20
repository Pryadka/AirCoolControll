#include "PullerTask.h"
#include <QMutexLocker>


PullerTask::PullerTask(int id, std::pair<int, int> range) :
    m_id(id),
    m_range(range),
    m_mutex(new QMutex())
{
}


PullerTask::~PullerTask()
{
    delete m_mutex;
}

bool PullerTask::isContentChanged()
{
    return m_isUpdated;
}

void PullerTask::getContent(QVector<quint16>& list)
{
    QMutexLocker lock(m_mutex);
    m_isUpdated = false;
    list = m_pull;
}

void PullerTask::setContent(const QVector<quint16>& list)
{
    if (list != m_pull)
    {
        QMutexLocker lock(m_mutex);
        m_isUpdated = true;
        m_pull = list;
    }
}

int  PullerTask::getID() const
{
    return m_id;
}

const std::pair<int, int>& PullerTask::getRange() const
{
    return m_range;
}
