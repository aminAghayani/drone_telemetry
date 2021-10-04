#include "udphandler.h"
#include "QThreadPool"
#include "mainwindow.h"
#include "udpdata.h"


UdpHandler::UdpHandler(QObject *parent) :  QObject (parent)
    , recieverAddress("192.168.4.100") , distinationAddress("192.168.4.1")
{

}



void UdpHandler::sendData(char data[44] , int length){
    udpSocket.writeDatagram(data , length , distinationAddress , distinationPort);
}

void UdpHandler::handleData(){
    QNetworkDatagram datagram = UdpHandler::udpSocket.receiveDatagram();
    cout<<"packet jadid omade:"<<datagram.data()[1]<<endl;
    emit passDatagramToSort(datagram);
}



