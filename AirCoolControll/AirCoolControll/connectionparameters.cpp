#include "connectionparameters.h"
#include "externalconnector.h"

ConnectionParameters::ConnectionParameters(QWidget *parent)
    : QWidget(parent),
    m_connector(NULL)
{
    ui.setupUi(this);

    QList<qint32> boudsRates = QSerialPortInfo::standardBaudRates();
    for (int n : boudsRates)
    {
        ui.comboBoxSpeed->addItem(QString::number(n));
    }
    ui.comboBoxSpeed->setCurrentIndex(6); // 9600 bouds
    ui.disconnectButton->setEnabled(false);
    ui.controllTypeTab->setCurrentIndex(0);
    ui.externalStatusLabel->setText(tr("Disconnected"));

    connect(ui.comboBoxSpeed, SIGNAL(currentIndexChanged(int)), this, SLOT(speedValueChanged(int)));
    connect(ui.spinBoxID, SIGNAL(valueChanged(int)), this, SLOT(IDValueChanged(int)));
    connect(ui.comboBoxCOM, SIGNAL(currentIndexChanged(int)), this, SLOT(portValueChanged(int)));
    connect(ui.controllTypeTab, SIGNAL(currentChanged(int)), this, SLOT(controllTabChanged(int)));
    connect(ui.connectButton, SIGNAL(clicked()), this, SLOT(externalConnect()));
    connect(ui.disconnectButton, SIGNAL(clicked()), this, SLOT(externalDisconnect()));
}

ConnectionParameters::~ConnectionParameters()
{

}

int ConnectionParameters::getCOMindex(void)
{
    return  ui.comboBoxCOM->currentIndex();
}

void ConnectionParameters::setCOMindex(int n)
{
    if (n < ui.comboBoxCOM->count())
        ui.comboBoxCOM->setCurrentIndex(n);
}

void ConnectionParameters::setCOMlist(QList<QSerialPortInfo>& list)
{
    ui.comboBoxCOM->clear();
    for (auto info : list)
    {
        ui.comboBoxCOM->addItem(info.description() + ' ' + info.portName());
    }
}

void ConnectionParameters::setExternalComunicator(ExternalConnector * comunicator)
{
    m_connector = comunicator;
    connect(m_connector, SIGNAL(socketConnected()), this, SLOT(externalConnected()));
    connect(m_connector, SIGNAL(socketDisconnected()), this, SLOT(externalDisconnected()));
}

int ConnectionParameters::getSpeed()
{
    return ui.comboBoxSpeed->currentIndex();
}

int ConnectionParameters::getDeviceIndex()
{
    return ui.spinBoxID->value();
}

void ConnectionParameters::setError(const QString & errorString, bool critical)
{
    ui.comboBoxCOM->setDisabled(critical);
    ui.comboBoxSpeed->setDisabled(critical);
    ui.spinBoxID->setDisabled(critical);

    ui.communicationErrorLabel->setText(errorString);
    ui.communicationErrorLabel->setStyleSheet("QLabel { background-grey : white; color : red; }");
    ui.communicationErrorLabel->setHidden(false);
}

void ConnectionParameters::clearError(void)
{
    ui.comboBoxCOM->setEnabled(true);
    ui.comboBoxSpeed->setEnabled(true);
    ui.spinBoxID->setEnabled(true);
    ui.communicationErrorLabel->setHidden(true);
}

void ConnectionParameters::speedValueChanged(int n)
{
    emit speedChanged(n);
}

void ConnectionParameters::IDValueChanged(int n)
{
    emit deviceIDChanged(n);
}

void ConnectionParameters::portValueChanged(int n)
{
    emit portChanged(n);
}

void ConnectionParameters::controllTabChanged(int newTabNumder)
{

}

void ConnectionParameters::externalConnect()
{
    if (NULL == m_connector)
        return;

    QString ip;
    ip = ui.ipEd0->text() + '.' + ui.ipEd1->text() + '.' + ui.ipEd2->text() + '.' + ui.ipEd3->text();
   /* if (ip == "127.0.0.1")
    {
        setExternalStatus(tr("Lockalhost isn't available"),true);
        return;
    }*/
    m_connector->connectToRemote(ip);
}

void ConnectionParameters::externalDisconnect()
{
    if (NULL != m_connector)
        m_connector->disconnectFromRemote();
}

void ConnectionParameters::externalConnected()
{
    ui.controllTypeTab->setTabEnabled(0, false);
}

void ConnectionParameters::externalDisconnected()
{
    ui.controllTypeTab->setTabEnabled(0, true);
}

void ConnectionParameters::setExternalStatus(const QString& status, bool isError)
{
    if (isError)
    {
        ui.externalStatusLabel->setStyleSheet("QLabel { background-grey : white; color : red; }");
    }
    else
    {
        ui.externalStatusLabel->setStyleSheet("QLabel { background-grey : white; color : black; }");
    }
    ui.externalStatusLabel->setText(status);
}

void ConnectionParameters::externalConnection(bool isConnected)
{
    ui.connectButton->setDisabled(isConnected);
    ui.disconnectButton->setEnabled(isConnected);
    ui.controllTypeTab->setTabEnabled(0, !isConnected);
    setExternalStatus(isConnected ? tr("Connected") : tr("Disonnected"));
}

void ConnectionParameters::externalConnection(QString err)
{
    setExternalStatus(tr("Connection error : ") + err,true);
}