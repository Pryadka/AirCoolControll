#ifndef __PULLERTASK__
#define __PULLERTASK__

#include  <QVector>
#include  <QMutex>
#include  <memory>

class PullerTask 
{

public:
    PullerTask(int id, std::pair<int,int> range);
    ~PullerTask();

    bool isContentChanged();
    void getContent(QVector<quint16>& list);
    void setContent(const QVector<quint16>& list);
    int  getID() const;
    const std::pair<int, int>& getRange() const;

private:
    QVector<quint16>    m_pull;
    int                 m_id;
    std::pair<int, int> m_range;
    bool                m_isUpdated;
    mutable QMutex *    m_mutex;
};

typedef std::shared_ptr<PullerTask> PullerTaskShared;
#endif //__PULLERTASK__