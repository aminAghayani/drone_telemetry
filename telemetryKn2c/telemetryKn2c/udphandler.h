#ifndef UDPHANDLER_H
#define UDPHANDLER_H

#include <QUdpSocket>
#include <QNetworkDatagram>
#include <QTest>
#include "QThreadPool"
#include "udpdata.h"
#include "iostream"
#include <QReadWriteLock>
//#include <QObject>

using namespace std;

class UdpHandler : public QObject
{
    Q_OBJECT
public:
    explicit UdpHandler(QObject *parent = 0);
    void sendData(char data[44] , int length);
    void decodeData(QNetworkDatagram datagram);
    static bool startUpdateMainWindow;
    int packageNumber;
    QUdpSocket udpSocket;
    qint16 recieverPort = 60000;
    qint16 distinationPort = 51919;
    QHostAddress recieverAddress;
    QHostAddress distinationAddress;

public slots:    
    void handleData();

signals:
    void passDatagramToSort(QNetworkDatagram datagram);




//    void run() override{

//        while(State::udpRecieverListens == true){
//             if (udpHandler.udpSocket.hasPendingDatagrams()) {
//                QNetworkDatagram datagram = udpHandler.udpSocket.receiveDatagram();
//                QReadWriteLock lock;
//                lock.lockForRead();
//                int receiveBuffIndex = UdpData::lastReceivedBufferIndex;
//                lock.unlock();
//                lock.lockForWrite();
//                UdpData::recievedBuffer[receiveBuffIndex] = datagram;
//                UdpData::lastReceivedBufferIndex++;
//                if(UdpData::lastReceivedBufferIndex > 19)
//                    UdpData::lastReceivedBufferIndex = 0;
//                UdpData::remainderMassage++;
//                lock.unlock();

//                cout<<"package ma ene"<<receiveBuffIndex<<":"<<datagram.data()[1]<<endl;

//              }
//             QTest::qSleep(9);
//         }
//    }

};

#endif // UDPHANDLER_H
