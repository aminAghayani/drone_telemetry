#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QReadWriteLock>
#include <QNetworkDatagram>
#include <udpdata.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    static bool start;
    static int state1;
    static int state2;
    void lablesInit();
    void graphInit();
    void state1Init();
    void state2Init();
    void state3Init();
    void state4Init();
    void state5Init();
    void state6Init();
    void state7Init();
    void state8Init();
    void readUdpSendingPacket(UdpData &udpData);
    void updateDigitalView(UdpData &udpData);
    void updateGraph(UdpData &udpData);
    void printDataOnPlainText(QString string);
public slots:
        void updateUIFunction(QNetworkDatagram datagram);
        void updatePlainText(int massageNumber);

private slots:
    void on_changeMode_clicked();

    void on_portChange_clicked();

    void on_info_clicked();

    void on_packetSender_clicked();

    void on_plainTextClear_clicked();

    void on_startThread1_clicked();

    void on_stopThread1_clicked();

    void on_startThread2_clicked();

    void on_stopThread2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_5_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_checkBox_6_stateChanged(int arg1);

    void on_checkBox_7_stateChanged(int arg1);

    void on_checkBox_8_stateChanged(int arg1);

    void on_checkBox_9_stateChanged(int arg1);

    void on_lineEdit_returnPressed();

    void on_lineEdit_4_returnPressed();

    void on_lineEdit_7_returnPressed();

    void on_lineEdit_2_returnPressed();

    void on_lineEdit_5_returnPressed();

    void on_lineEdit_8_returnPressed();

    void on_lineEdit_3_returnPressed();

    void on_lineEdit_6_returnPressed();

    void on_lineEdit_9_returnPressed();

private:
    Ui::MainWindow *ui;
    QTimer* timer;
};

#endif // MAINWINDOW_H
