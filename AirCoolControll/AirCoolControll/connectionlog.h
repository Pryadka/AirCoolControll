#ifndef CONNECTIONLOG_H
#define CONNECTIONLOG_H

#include <QWidget>
#include "ui_connectionlog.h"

class ConnectionLog : public QWidget
{
    Q_OBJECT

public:
    ConnectionLog(QWidget *parent = 0);
    ~ConnectionLog();

    void addRecord();

public:
    Ui::ConnectionLog ui;
};

#endif // CONNECTIONLOG_H
