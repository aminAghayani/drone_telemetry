#include "mainwindow.h"
#include <QApplication>
#include "iostream"
#include "udpdata.h"
#include "udphandler.h"
#include "QThreadPool"

#include <QTest>
#include "udpdata.h"
#include "udphandler.h"
#include "graphdata.h"
#include "iostream"
#include <QTimer>

using namespace std;

int main(int argc, char *argv[])
{
    
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();

}
