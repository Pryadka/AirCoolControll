#ifndef COOLERSTATEPULLER_H
#define COOLERSTATEPULLER_H

#include <QThread>

class CoolerStatePuller : public QThread
{
    Q_OBJECT

public:
    CoolerStatePuller(QObject *parent);
    ~CoolerStatePuller();

private:
    
};

#endif // COOLERSTATEPULLER_H
