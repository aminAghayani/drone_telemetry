#ifndef UDPDATA_H
#define UDPDATA_H

#include <QTest>
#include <QUdpSocket>
#include <QNetworkDatagram>
#include "QThreadPool"
#include "udpdata.h"
#include "iostream"
#include <QReadWriteLock>
#include <QObject>

using namespace std;

class UdpData : public QObject
{
    Q_OBJECT

public:
    explicit UdpData(QObject *parent = 0);
    UdpData getInstance();

    QNetworkDatagram recievedBuffer[25];
    float sendVar[9];
    float recievedVar[9];
    int lastReceivedBufferIndex = 0;
    int lastSortedBufferIndex = 0;
    int packageNumber;
    int trafficBufferNumber;
    bool findNextMassage();
    void decodeData(QNetworkDatagram datagram , UdpData &udpData);
    void checkForSkippingLostPacket();
    void sortData(QNetworkDatagram datagram);
public slots:
    void checkForSortedDta(QNetworkDatagram datagram);
signals:
    void passForPlot(QNetworkDatagram datagram);
    void sendForPlainText(int massageNumber);


};



#endif // UDPDATA_H
