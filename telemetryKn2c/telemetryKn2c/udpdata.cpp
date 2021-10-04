#include "udpdata.h"

UdpData::UdpData(QObject *parent) : QObject (parent)
{
    packageNumber = '0';
}


void UdpData::decodeData(QNetworkDatagram datagram , UdpData &udpData){
    int index = 2;
    QByteArray packetData = datagram.data();
    char zeroChar = packetData[38];

    union Data{
        float number;
        char array[4];
    };
    union Data data;


    for(int i=0 ; i<9 ; i++){
        for(int j=0 ; j<4 ; j++){
            if(packetData[index] == zeroChar){
                data.array[j] = 0;
            }
            else{
                data.array[j] = packetData[index];
            }
            index++;
        }
        udpData.recievedVar[i] = data.number;
    }
}

bool UdpData::findNextMassage()
{  
    for(int i=0 ; i < 25 ; i++){
        if(recievedBuffer[i].data()[1] == char(packageNumber)){
            cout<<"packet peyda shode:"<<char(packageNumber)<<":"<<i<<endl;
            emit passForPlot(recievedBuffer[i]);
            lastSortedBufferIndex = i;
            packageNumber++;
            if(packageNumber == '[')
                packageNumber = '0';
            else if(packageNumber == ':')
                packageNumber = 'A';
            return true;
        }
    }
    return false;
}

void UdpData::checkForSkippingLostPacket(){
    if(trafficBufferNumber > 5){
        cout<<"skipped some packets"<<trafficBufferNumber<<endl;
        packageNumber++;
        if(packageNumber == '[')
            packageNumber = '0';
        else if(packageNumber == ':')
            packageNumber = 'A';
        packageNumber++;
        if(packageNumber == '[')
            packageNumber = '0';
        else if(packageNumber == ':')
            packageNumber = 'A';
    }
}

void UdpData::checkForSortedDta(QNetworkDatagram datagram){

    if(datagram.data() == "ready"){
        emit sendForPlainText(0);
    }
    else if(datagram.data() == "done"){
        emit sendForPlainText(1);
    }
    else if(datagram.data() == "start"){
        emit sendForPlainText(2);
    }
    else if(datagram.data() == "stop"){
        emit sendForPlainText(3);
    }
    else{
        if(datagram.data().length() == 40){
            if(datagram.data()[0] == 's' && datagram.data()[39] == 'e'){
                recievedBuffer[lastReceivedBufferIndex] = datagram.data();
                lastReceivedBufferIndex++;
                cout<<packageNumber<<","<<trafficBufferNumber<<endl;
                if(lastReceivedBufferIndex > 24){
                    lastReceivedBufferIndex = 0;
                }                
                while(findNextMassage());
                /////////checkForSkippingData
                if(lastReceivedBufferIndex-lastSortedBufferIndex-1 >= 0){
                    trafficBufferNumber = lastReceivedBufferIndex-lastSortedBufferIndex-1;
                }
                else{
                    trafficBufferNumber = 24-lastSortedBufferIndex+lastReceivedBufferIndex;
                }
                checkForSkippingLostPacket();
            }
        }       
    }
}



