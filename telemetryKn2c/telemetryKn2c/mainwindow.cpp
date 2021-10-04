#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "changemode.h"
#include "changeportwindow.h"
#include "infowindow.h"
#include "qcustomplot.h"

#include <QTest>
#include "udpdata.h"
#include "udphandler.h"
#include "graphdata.h"
#include <QObject>
#include "iostream"


UdpHandler udpHandler;
UdpData udpData;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    lablesInit();
    graphInit();
    udpHandler.udpSocket.bind(udpHandler.recieverAddress , udpHandler.recieverPort);
    for(int i=0;i<20;i++){
        if(udpHandler.udpSocket.hasPendingDatagrams()){
            cout<<"cout"<<endl;
        }
    }
    connect(&udpHandler.udpSocket,SIGNAL(readyRead()),&udpHandler,SLOT(handleData()));
    connect(&udpHandler,SIGNAL(passDatagramToSort(QNetworkDatagram)),&udpData,SLOT(checkForSortedDta(QNetworkDatagram)));
    connect(&udpData , SIGNAL(passForPlot(QNetworkDatagram)) , this , SLOT(updateUIFunction(QNetworkDatagram)));
    connect(&udpData , SIGNAL(sendForPlainText(int)) , this , SLOT(updatePlainText(int)));
}

MainWindow::~MainWindow()
{

    delete ui;
}



void MainWindow::lablesInit(){
    ui->lineEdit->setText("0");
    ui->lineEdit_2->setText("0");
    ui->lineEdit_3->setText("0");
    ui->lineEdit_4->setText("0");
    ui->lineEdit_5->setText("0");
    ui->lineEdit_6->setText("0");
    ui->lineEdit_7->setText("0");
    ui->lineEdit_8->setText("0");
    ui->lineEdit_9->setText("0");
}


void MainWindow::graphInit(){
    ui->plot1->addGraph();
    ui->plot1->addGraph();
    ui->plot1->addGraph();
    ui->plot1->addGraph();
    ui->plot1->addGraph();
    ui->plot2->addGraph();
    ui->plot2->addGraph();
    ui->plot2->addGraph();
    ui->plot2->addGraph();

    QPen pen1,pen2,pen3,pen4,pen5;
    pen1.setWidth(1);
    pen1.setColor(QColor(255,0,0));
    pen2.setWidth(1);
    pen2.setColor(QColor(100,80,255));
    pen3.setWidth(1);
    pen3.setColor(QColor(85,170,0));
    pen4.setWidth(1);
    pen4.setColor(QColor(0,0,0));
    pen5.setWidth(1);
    pen5.setColor(QColor(200,0,200));

    ui->plot1->graph(0)->setPen(pen1);
    ui->plot2->graph(0)->setPen(pen1);
    ui->plot1->graph(1)->setPen(pen2);
    ui->plot2->graph(1)->setPen(pen2);
    ui->plot1->graph(2)->setPen(pen3);
    ui->plot2->graph(2)->setPen(pen3);
    ui->plot1->graph(3)->setPen(pen4);
    ui->plot2->graph(3)->setPen(pen4);
    ui->plot1->graph(4)->setPen(pen5);

    ui->plot1->xAxis->setLabel("Time(second)");
    ui->plot2->xAxis->setLabel("Time(second)");

    ui->plot1->setInteraction(QCP::iRangeZoom , true);
    ui->plot1->setInteraction(QCP::iRangeDrag , true);
    ui->plot2->setInteraction(QCP::iRangeZoom , true);
    ui->plot2->setInteraction(QCP::iRangeDrag , true);

}


void MainWindow::printDataOnPlainText(QString string){
     ui->plainText->appendPlainText(string);
}


void MainWindow::updateDigitalView(UdpData &udpData){
    char arrayPacketData[10];



    sprintf(arrayPacketData,"%f",udpData.recievedVar[0]);
    ui->label_2->setText(arrayPacketData);
    for(int i=0 ; i<10 ; i++){
        arrayPacketData[i] = 0;
    }
    sprintf(arrayPacketData,"%f",udpData.recievedVar[1]);
    ui->label_8->setText(arrayPacketData);
    for(int i=0 ; i<10 ; i++){
        arrayPacketData[i] = 0;
    }
    sprintf(arrayPacketData,"%f",udpData.recievedVar[2]);
    ui->label_14->setText(arrayPacketData);
    for(int i=0 ; i<10 ; i++){
        arrayPacketData[i] = 0;
    }
    sprintf(arrayPacketData,"%f",udpData.recievedVar[3]);
    ui->label_4->setText(arrayPacketData);
    for(int i=0 ; i<10 ; i++){
        arrayPacketData[i] = 0;
    }
    sprintf(arrayPacketData,"%f",udpData.recievedVar[4]);
    ui->label_10->setText(arrayPacketData);
    for(int i=0 ; i<10 ; i++){
        arrayPacketData[i] = 0;
    }
    sprintf(arrayPacketData,"%f",udpData.recievedVar[5]);
    ui->label_16->setText(arrayPacketData);
    for(int i=0 ; i<10 ; i++){
        arrayPacketData[i] = 0;
    }
    sprintf(arrayPacketData,"%f",udpData.recievedVar[6]);
    ui->label_6->setText(arrayPacketData);
    for(int i=0 ; i<10 ; i++){
        arrayPacketData[i] = 0;
    }
    sprintf(arrayPacketData,"%f",udpData.recievedVar[7]);
    ui->label_12->setText(arrayPacketData);
    for(int i=0 ; i<10 ; i++){
        arrayPacketData[i] = 0;
    }
    sprintf(arrayPacketData,"%f",udpData.recievedVar[8]);
    ui->label_18->setText(arrayPacketData);
    for(int i=0 ; i<10 ; i++){
        arrayPacketData[i] = 0;
    }

}

void MainWindow::updateGraph(UdpData &udpData){
    if(GraphData::graphTime.size() == 0){
       GraphData::graphTime.push_back(0);
    }
    for(int i=0 ; i<5 ; i++){       
            GraphData::plot1Y[i].push_back(udpData.recievedVar[i]);
        if(i != 4){           
                GraphData::plot2Y[i].push_back(udpData.recievedVar[i+5]);
        }
    }


    ui->plot1->graph(0)->setData(GraphData::graphTime , GraphData::plot1Y[0]);
    ui->plot1->graph(1)->setData(GraphData::graphTime , GraphData::plot1Y[1]);
    ui->plot1->graph(2)->setData(GraphData::graphTime , GraphData::plot1Y[2]);
    ui->plot1->graph(3)->setData(GraphData::graphTime , GraphData::plot1Y[3]);
    ui->plot1->graph(4)->setData(GraphData::graphTime , GraphData::plot1Y[4]);
    ui->plot1->rescaleAxes(true);
    if(GraphData::graphTime.last() > 2){
         ui->plot1->xAxis->setRange(GraphData::graphTime.last()-2,GraphData::graphTime.last());
    }
    else{
        ui->plot1->xAxis->setRange(0,2);
    }
    ui->plot1->replot();
    ui->plot2->graph(0)->setData(GraphData::graphTime , GraphData::plot2Y[0]);
    ui->plot2->graph(1)->setData(GraphData::graphTime , GraphData::plot2Y[1]);
    ui->plot2->graph(2)->setData(GraphData::graphTime , GraphData::plot2Y[2]);
    ui->plot2->graph(3)->setData(GraphData::graphTime , GraphData::plot2Y[3]);
    ui->plot2->rescaleAxes(true);
    if(GraphData::graphTime.last() > 2){
         ui->plot2->xAxis->setRange(GraphData::graphTime.last()-2,GraphData::graphTime.last());
    }
    else{
        ui->plot2->xAxis->setRange(0,2);
    }
    ui->plot2->replot();
    GraphData::graphTime.push_back(GraphData::graphTime.last()+0.025 );
}

void sendUdpData(UdpData &udpData){
    union Data{
        float number;
        char array[4];
    };
    union Data data;
    char sendingBuff[44];
    int index = 2;
    char zeroChar;
    bool zeroCharFound = true;
    UdpHandler udpHandler;

    sendingBuff[0] = 's';
    sendingBuff[1] = 'C';
    for(int i=0 ; i<9 ; i++){
        data.number = udpData.sendVar[i];
        for(int j=0 ; j<4 ; j++){
            sendingBuff[index] = data.array[j];
            index++;
        }
    }

    for (int i=65 ; i<115 ; i++){
        zeroChar = char(i);
        for(int j=2 ; j<39 ; j++){
            if(zeroChar == sendingBuff[j]){
                zeroCharFound = false;
            }
        }
        if(zeroCharFound == true){
            break;
        }
        zeroCharFound = true;
    }


    index = 2;
    for(int i=0 ; i<9 ; i++){
        data.number = udpData.sendVar[i];
        for(int j=0 ; j<4 ; j++){
            if(data.array[j] == 0){
                sendingBuff[index] = zeroChar;
            }
            else{
                sendingBuff[index] = data.array[j];
            }            
            index++;
        }
    }
    sendingBuff[38] = zeroChar;
    sendingBuff[39] = 'e';
    udpHandler.sendData(sendingBuff , 40);

}

void MainWindow::readUdpSendingPacket(UdpData &udpData){
    udpData.sendVar[0] = ui->lineEdit->text().toFloat();
    udpData.sendVar[1] = ui->lineEdit_4->text().toFloat();
    udpData.sendVar[2] = ui->lineEdit_7->text().toFloat();
    udpData.sendVar[3] = ui->lineEdit_2->text().toFloat();
    udpData.sendVar[4] = ui->lineEdit_5->text().toFloat();
    udpData.sendVar[5] = ui->lineEdit_8->text().toFloat();
    udpData.sendVar[6] = ui->lineEdit_3->text().toFloat();
    udpData.sendVar[7] = ui->lineEdit_6->text().toFloat();
    udpData.sendVar[8] = ui->lineEdit_9->text().toFloat();
}

void MainWindow::on_changeMode_clicked()
{
    ChangeMode changeMode;
    changeMode.setModal(true);
    changeMode.exec();
}

void MainWindow::on_portChange_clicked()
{
    ChangePortWindow changePortWindow;
    changePortWindow.setModal(true);
    changePortWindow.exec();
}

void MainWindow::on_info_clicked()
{
    InfoWindow infoWindow;
    infoWindow.setModal(true);
    infoWindow.exec();
}



void MainWindow::on_packetSender_clicked()
{
    QString packetData = ui->lineEdit_10->text();
    if(packetData != ""){
    char arrayPacketData[packetData.length()+1];
    UdpHandler udpHandler;
    strcpy(arrayPacketData , packetData.toStdString().c_str());   
    udpHandler.sendData(arrayPacketData , packetData.length());
    }
}

void MainWindow::on_plainTextClear_clicked()
{
    ui->plainText->clear();
}

void MainWindow::on_startThread1_clicked()
{
    if (MainWindow::start == false){
        MainWindow::start = true;
        UdpHandler udpHandler;
        printDataOnPlainText("Start updating UI");
        char charac[10];
        sprintf(charac,"start%d%d",MainWindow::state1,MainWindow::state2);
        charac[7] = 'e';
        udpHandler.sendData(charac,8);
    }
    else
        printDataOnPlainText("Fahmidam baw start:/");
}

void MainWindow::on_stopThread1_clicked()
{    
    if(MainWindow::start == true){
        MainWindow::start = false;
        printDataOnPlainText("Stoped updating UI");
        UdpHandler udpHandler;
        char charac[7];
        sprintf(charac , "stope");
        udpHandler.sendData(charac,5);
    }
    else
        printDataOnPlainText("Enqad oon dokme stop ro nazan/:");

}

void MainWindow::on_startThread2_clicked()
{
    if (MainWindow::start == false){
        MainWindow::start = true;
        printDataOnPlainText("Start updating UI");
        char charac[10];
        sprintf(charac,"start%d%d",MainWindow::state1,MainWindow::state2);
        charac[7] = 'e';
        udpHandler.sendData(charac,8);
    }
    else
        printDataOnPlainText("Fahmidam baw start:/");
}

void MainWindow::on_stopThread2_clicked()
{
    if(MainWindow::start == true){
        MainWindow::start = false;
        printDataOnPlainText("Stoped updating UI");
        UdpHandler udpHandler;
        char charac[7];
        sprintf(charac , "stope");
        udpHandler.sendData(charac,5);
    }
    else
        printDataOnPlainText("Enqad oon dokme stop ro nazan/:");
}



void MainWindow::on_pushButton_4_clicked()
{
    UdpData udpData;
    readUdpSendingPacket(udpData);
    sendUdpData(udpData);
}


void MainWindow::on_pushButton_2_clicked()
{
    for(int i=0 ; i<5 ; i++){
            GraphData::plot1Y[i].clear();
        if(i != 4){
                GraphData::plot2Y[i].clear();

        }
    }
    GraphData::graphTime.clear();


    ui->plot1->graph(0)->setData(GraphData::graphTime , GraphData::plot1Y[0]);
    ui->plot1->graph(1)->setData(GraphData::graphTime , GraphData::plot1Y[1]);
    ui->plot1->graph(2)->setData(GraphData::graphTime , GraphData::plot1Y[2]);
    ui->plot1->graph(3)->setData(GraphData::graphTime , GraphData::plot1Y[3]);
    ui->plot1->graph(4)->setData(GraphData::graphTime , GraphData::plot1Y[4]);
    ui->plot1->rescaleAxes(true);
    ui->plot1->xAxis->setRange(0,2);
    ui->plot1->replot();
    ui->plot2->graph(0)->setData(GraphData::graphTime , GraphData::plot2Y[0]);
    ui->plot2->graph(1)->setData(GraphData::graphTime , GraphData::plot2Y[1]);
    ui->plot2->graph(2)->setData(GraphData::graphTime , GraphData::plot2Y[2]);
    ui->plot2->graph(3)->setData(GraphData::graphTime , GraphData::plot2Y[3]);
    ui->plot2->rescaleAxes(true);
    ui->plot2->xAxis->setRange(0,2);
    ui->plot2->replot();
}

void MainWindow::on_pushButton_clicked()
{
    for(int i=0 ; i<5 ; i++){
            GraphData::plot1Y[i].clear();
        if(i != 4){
                GraphData::plot2Y[i].clear();

        }
    }
    GraphData::graphTime.clear();

    for(int i=0 ; i<5 ; i++){
            GraphData::plot1Y[i].clear();
        if(i != 4){
                GraphData::plot2Y[i].clear();

        }
    }
    GraphData::graphTime.clear();


    ui->plot1->graph(0)->setData(GraphData::graphTime , GraphData::plot1Y[0]);
    ui->plot1->graph(1)->setData(GraphData::graphTime , GraphData::plot1Y[1]);
    ui->plot1->graph(2)->setData(GraphData::graphTime , GraphData::plot1Y[2]);
    ui->plot1->graph(3)->setData(GraphData::graphTime , GraphData::plot1Y[3]);
    ui->plot1->graph(4)->setData(GraphData::graphTime , GraphData::plot1Y[4]);
    ui->plot1->rescaleAxes(true);
    ui->plot1->xAxis->setRange(0,2);
    ui->plot1->replot();
    ui->plot2->graph(0)->setData(GraphData::graphTime , GraphData::plot2Y[0]);
    ui->plot2->graph(1)->setData(GraphData::graphTime , GraphData::plot2Y[1]);
    ui->plot2->graph(2)->setData(GraphData::graphTime , GraphData::plot2Y[2]);
    ui->plot2->graph(3)->setData(GraphData::graphTime , GraphData::plot2Y[3]);
    ui->plot2->rescaleAxes(true);
    ui->plot2->xAxis->setRange(0,2);
    ui->plot2->replot();
}



void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1 == 0)
        ui->plot1->graph(0)->setVisible(false);
    else
        ui->plot1->graph(0)->setVisible(true);
     ui->plot1->replot();
}

void MainWindow::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1 == 0)
        ui->plot1->graph(1)->setVisible(false);
    else
        ui->plot1->graph(1)->setVisible(true);
    ui->plot1->replot();
}

void MainWindow::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1 == 0)
        ui->plot1->graph(2)->setVisible(false);
    else
        ui->plot1->graph(2)->setVisible(true);
    ui->plot1->replot();
}

void MainWindow::on_checkBox_4_stateChanged(int arg1)
{
    if(arg1 == 0)
        ui->plot1->graph(3)->setVisible(false);
    else
        ui->plot1->graph(3)->setVisible(true);
    ui->plot1->replot();
}

void MainWindow::on_checkBox_5_stateChanged(int arg1)
{
    if(arg1 == 0)
        ui->plot1->graph(4)->setVisible(false);
    else
        ui->plot1->graph(4)->setVisible(true);
    ui->plot1->replot();
}

void MainWindow::on_checkBox_6_stateChanged(int arg1)
{
    if(arg1 == 0)
        ui->plot2->graph(0)->setVisible(false);
    else
        ui->plot2->graph(0)->setVisible(true);
     ui->plot2->replot();
}

void MainWindow::on_checkBox_7_stateChanged(int arg1)
{
    if(arg1 == 0)
        ui->plot2->graph(1)->setVisible(false);
    else
        ui->plot2->graph(1)->setVisible(true);
     ui->plot2->replot();
}

void MainWindow::on_checkBox_8_stateChanged(int arg1)
{
    if(arg1 == 0)
        ui->plot2->graph(2)->setVisible(false);
    else
        ui->plot2->graph(2)->setVisible(true);
     ui->plot2->replot();
}

void MainWindow::on_checkBox_9_stateChanged(int arg1)
{
    if(arg1 == 0)
        ui->plot2->graph(3)->setVisible(false);
    else
        ui->plot2->graph(3)->setVisible(true);
     ui->plot2->replot();
}


void MainWindow::updateUIFunction(QNetworkDatagram datagram)
{             
                UdpData udpData;
                udpData.decodeData(datagram , udpData);
                updateDigitalView(udpData);
                updateGraph(udpData);
                cout<<"plotted!"<<endl;
}

void MainWindow::updatePlainText(int massageNumber){

        if(massageNumber == 0)
            printDataOnPlainText("esp is ready");
        else if(massageNumber == 1)
            printDataOnPlainText("Variables Has Changed!");
        else if(massageNumber == 2)
            printDataOnPlainText("Started Sending Data");
        else if(massageNumber == 3)
            printDataOnPlainText("Stoped Sending Data");

}

bool MainWindow::start = false;
int MainWindow::state1 = 0;
int MainWindow::state2 = 0;

void MainWindow::on_lineEdit_returnPressed()
{
    UdpData udpData;
    readUdpSendingPacket(udpData);
    sendUdpData(udpData);
}

void MainWindow::on_lineEdit_4_returnPressed()
{
    UdpData udpData;
    readUdpSendingPacket(udpData);
    sendUdpData(udpData);
}

void MainWindow::on_lineEdit_7_returnPressed()
{
    UdpData udpData;
    readUdpSendingPacket(udpData);
    sendUdpData(udpData);
}

void MainWindow::on_lineEdit_2_returnPressed()
{
    UdpData udpData;
    readUdpSendingPacket(udpData);
    sendUdpData(udpData);
}

void MainWindow::on_lineEdit_5_returnPressed()
{
    UdpData udpData;
    readUdpSendingPacket(udpData);
    sendUdpData(udpData);
}

void MainWindow::on_lineEdit_8_returnPressed()
{
    UdpData udpData;
    readUdpSendingPacket(udpData);
    sendUdpData(udpData);
}

void MainWindow::on_lineEdit_3_returnPressed()
{
    UdpData udpData;
    readUdpSendingPacket(udpData);
    sendUdpData(udpData);
}

void MainWindow::on_lineEdit_6_returnPressed()
{
    UdpData udpData;
    readUdpSendingPacket(udpData);
    sendUdpData(udpData);
}

void MainWindow::on_lineEdit_9_returnPressed()
{
    UdpData udpData;
    readUdpSendingPacket(udpData);
    sendUdpData(udpData);
}

