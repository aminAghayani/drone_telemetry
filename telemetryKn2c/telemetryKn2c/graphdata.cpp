#include "graphdata.h"

GraphData::GraphData()
{
    graphTime.append(0);

}

QVector<double> GraphData::plot1Y[5];
QVector<double> GraphData::plot2Y[4];
QVector<double> GraphData::graphTime;
int GraphData::availableData;
bool GraphData::isGraphHidePlot2[4] = {true,true,true,true};

