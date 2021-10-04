#ifndef GRAPHDATA_H
#define GRAPHDATA_H

#include <QVector>

class GraphData
{
public:
    GraphData();
    static QVector<double> plot1Y[5];
    static QVector<double> plot2Y[4];
    static bool isGraphHidePlot2[4];
    static int availableData;
    static QVector<double> graphTime;


};

#endif // GRAPHDATA_H
