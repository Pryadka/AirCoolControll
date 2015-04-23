#ifndef COOLERSTATEWIDGET_H
#define COOLERSTATEWIDGET_H

#include <QWidget>
#include "ui_coolerstatewidget.h"
#include <qtimer.h>
#include <qpixmap.h>

class CoolerStateWidget : public QWidget
{
    Q_OBJECT

public:
    CoolerStateWidget(QWidget *parent = 0);
    ~CoolerStateWidget();

    void leftWindState(bool on);
    void rightWindState(bool on);

    void setInputParameterList(const std::vector<std::pair<std::string,std::string>>& list);
    void setOutputParameterList(const std::vector<std::pair<std::string, std::string>>& list);

    void updateInputParameter(int n,int value);
    void updateOutputParameter(int n,int value);

private slots:
    void updateViewElements(void);

private:
    enum       {AnimationSteps = 4};
    Ui::CoolerStateWidget ui;

    bool        m_leftWindOn;
    bool        m_rightWindOn;
    int         m_windState;
    QTimer      m_viewTimer;

    QPixmap s_left_arrows[AnimationSteps];
    QPixmap s_right_arrows[AnimationSteps];
};

#endif // COOLERSTATEWIDGET_H
