/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_13;
    QTabWidget *tabWidget;
    QWidget *graph1;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_11;
    QCustomPlot *plot1;
    QHBoxLayout *horizontalLayout_28;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QHBoxLayout *horizontalLayout_26;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *startThread1;
    QPushButton *stopThread1;
    QWidget *graph2;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_14;
    QCustomPlot *plot2;
    QHBoxLayout *horizontalLayout_21;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QHBoxLayout *horizontalLayout_27;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *startThread2;
    QPushButton *stopThread2;
    QWidget *variables;
    QHBoxLayout *horizontalLayout_22;
    QVBoxLayout *verticalLayout;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_13;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_29;
    QHBoxLayout *horizontalLayout_20;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_20;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_21;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_22;
    QLineEdit *lineEdit_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_23;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_24;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_25;
    QLineEdit *lineEdit_6;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_26;
    QLineEdit *lineEdit_7;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_27;
    QLineEdit *lineEdit_8;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_28;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_4;
    QWidget *setting;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_23;
    QLineEdit *lineEdit_10;
    QPushButton *packetSender;
    QHBoxLayout *horizontalLayout_24;
    QPushButton *changeMode;
    QPushButton *portChange;
    QPushButton *info;
    QHBoxLayout *horizontalLayout_25;
    QPushButton *plainTextClear;
    QSpacerItem *horizontalSpacer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_8;
    QPlainTextEdit *plainText;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(880, 582);
        MainWindow->setStyleSheet(QStringLiteral("border-image: url(:/resources/pictures/imagesL175T2VZ.jpg);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral("background-image: url(:/resources/pictures/2958123.jpg);"));
        verticalLayout_13 = new QVBoxLayout(centralWidget);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        graph1 = new QWidget();
        graph1->setObjectName(QStringLiteral("graph1"));
        verticalLayout_12 = new QVBoxLayout(graph1);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        plot1 = new QCustomPlot(graph1);
        plot1->setObjectName(QStringLiteral("plot1"));
        plot1->setBaseSize(QSize(0, 0));

        verticalLayout_11->addWidget(plot1);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        checkBox = new QCheckBox(graph1);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        QFont font;
        font.setPointSize(14);
        checkBox->setFont(font);
        checkBox->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        checkBox->setChecked(true);

        horizontalLayout_28->addWidget(checkBox);

        checkBox_2 = new QCheckBox(graph1);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setFont(font);
        checkBox_2->setStyleSheet(QStringLiteral("color: rgb(100, 80, 255);"));
        checkBox_2->setChecked(true);

        horizontalLayout_28->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(graph1);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setFont(font);
        checkBox_3->setStyleSheet(QStringLiteral("color: rgb(85, 170, 0);"));
        checkBox_3->setChecked(true);

        horizontalLayout_28->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(graph1);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setFont(font);
        checkBox_4->setStyleSheet(QLatin1String("color: rgb(0, 0, 0\n"
");"));
        checkBox_4->setChecked(true);

        horizontalLayout_28->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(graph1);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setFont(font);
        checkBox_5->setStyleSheet(QStringLiteral("color: rgb(200, 0, 200);"));
        checkBox_5->setChecked(true);

        horizontalLayout_28->addWidget(checkBox_5);


        verticalLayout_11->addLayout(horizontalLayout_28);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        pushButton_2 = new QPushButton(graph1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QFont font1;
        font1.setPointSize(16);
        pushButton_2->setFont(font1);

        horizontalLayout_26->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(50, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_2);

        startThread1 = new QPushButton(graph1);
        startThread1->setObjectName(QStringLiteral("startThread1"));
        startThread1->setFont(font1);
        startThread1->setIconSize(QSize(50, 50));

        horizontalLayout_26->addWidget(startThread1);

        stopThread1 = new QPushButton(graph1);
        stopThread1->setObjectName(QStringLiteral("stopThread1"));
        stopThread1->setFont(font1);

        horizontalLayout_26->addWidget(stopThread1);


        verticalLayout_11->addLayout(horizontalLayout_26);


        verticalLayout_12->addLayout(verticalLayout_11);

        tabWidget->addTab(graph1, QString());
        graph2 = new QWidget();
        graph2->setObjectName(QStringLiteral("graph2"));
        verticalLayout_15 = new QVBoxLayout(graph2);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        plot2 = new QCustomPlot(graph2);
        plot2->setObjectName(QStringLiteral("plot2"));

        verticalLayout_14->addWidget(plot2);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        checkBox_6 = new QCheckBox(graph2);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setFont(font);
        checkBox_6->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        checkBox_6->setChecked(true);

        horizontalLayout_21->addWidget(checkBox_6);

        checkBox_7 = new QCheckBox(graph2);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));
        checkBox_7->setFont(font);
        checkBox_7->setStyleSheet(QStringLiteral("color: rgb(100, 50, 255);"));
        checkBox_7->setChecked(true);

        horizontalLayout_21->addWidget(checkBox_7);

        checkBox_8 = new QCheckBox(graph2);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));
        checkBox_8->setFont(font);
        checkBox_8->setStyleSheet(QStringLiteral("color: rgb(85, 170, 0);"));
        checkBox_8->setChecked(true);

        horizontalLayout_21->addWidget(checkBox_8);

        checkBox_9 = new QCheckBox(graph2);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));
        checkBox_9->setFont(font);
        checkBox_9->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        checkBox_9->setChecked(true);

        horizontalLayout_21->addWidget(checkBox_9);


        verticalLayout_14->addLayout(horizontalLayout_21);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        pushButton = new QPushButton(graph2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font1);

        horizontalLayout_27->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(100, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_3);

        startThread2 = new QPushButton(graph2);
        startThread2->setObjectName(QStringLiteral("startThread2"));
        startThread2->setFont(font1);

        horizontalLayout_27->addWidget(startThread2);

        stopThread2 = new QPushButton(graph2);
        stopThread2->setObjectName(QStringLiteral("stopThread2"));
        stopThread2->setFont(font1);

        horizontalLayout_27->addWidget(stopThread2);


        verticalLayout_14->addLayout(horizontalLayout_27);


        verticalLayout_15->addLayout(verticalLayout_14);

        tabWidget->addTab(graph2, QString());
        variables = new QWidget();
        variables->setObjectName(QStringLiteral("variables"));
        horizontalLayout_22 = new QHBoxLayout(variables);
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_19 = new QLabel(variables);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font);

        verticalLayout->addWidget(label_19);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(variables);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setPointSize(12);
        label->setFont(font2);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(variables);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font2);

        horizontalLayout->addWidget(label_2);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(variables);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font2);

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(variables);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);

        horizontalLayout_2->addWidget(label_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(variables);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font2);

        horizontalLayout_3->addWidget(label_5);

        label_6 = new QLabel(variables);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);

        horizontalLayout_3->addWidget(label_6);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_10->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_7 = new QLabel(variables);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font2);

        horizontalLayout_4->addWidget(label_7);

        label_8 = new QLabel(variables);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font2);

        horizontalLayout_4->addWidget(label_8);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_9 = new QLabel(variables);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font2);

        horizontalLayout_5->addWidget(label_9);

        label_10 = new QLabel(variables);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font2);

        horizontalLayout_5->addWidget(label_10);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_11 = new QLabel(variables);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font2);

        horizontalLayout_6->addWidget(label_11);

        label_12 = new QLabel(variables);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font2);

        horizontalLayout_6->addWidget(label_12);


        verticalLayout_3->addLayout(horizontalLayout_6);


        horizontalLayout_10->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_13 = new QLabel(variables);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font2);

        horizontalLayout_7->addWidget(label_13);

        label_14 = new QLabel(variables);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font2);

        horizontalLayout_7->addWidget(label_14);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_15 = new QLabel(variables);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font2);

        horizontalLayout_8->addWidget(label_15);

        label_16 = new QLabel(variables);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font2);

        horizontalLayout_8->addWidget(label_16);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_17 = new QLabel(variables);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font2);

        horizontalLayout_9->addWidget(label_17);

        label_18 = new QLabel(variables);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font2);

        horizontalLayout_9->addWidget(label_18);


        verticalLayout_4->addLayout(horizontalLayout_9);


        horizontalLayout_10->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout_10);

        label_29 = new QLabel(variables);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setFont(font);

        verticalLayout->addWidget(label_29);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_20 = new QLabel(variables);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font2);

        horizontalLayout_11->addWidget(label_20);

        lineEdit = new QLineEdit(variables);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setFont(font2);

        horizontalLayout_11->addWidget(lineEdit);


        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_21 = new QLabel(variables);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setFont(font2);

        horizontalLayout_12->addWidget(label_21);

        lineEdit_2 = new QLineEdit(variables);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setFont(font2);

        horizontalLayout_12->addWidget(lineEdit_2);


        verticalLayout_5->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_22 = new QLabel(variables);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFont(font2);

        horizontalLayout_13->addWidget(label_22);

        lineEdit_3 = new QLineEdit(variables);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setFont(font2);

        horizontalLayout_13->addWidget(lineEdit_3);


        verticalLayout_5->addLayout(horizontalLayout_13);


        horizontalLayout_20->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_23 = new QLabel(variables);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setFont(font2);

        horizontalLayout_14->addWidget(label_23);

        lineEdit_4 = new QLineEdit(variables);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setFont(font2);

        horizontalLayout_14->addWidget(lineEdit_4);


        verticalLayout_6->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_24 = new QLabel(variables);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setFont(font2);

        horizontalLayout_15->addWidget(label_24);

        lineEdit_5 = new QLineEdit(variables);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setFont(font2);

        horizontalLayout_15->addWidget(lineEdit_5);


        verticalLayout_6->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_25 = new QLabel(variables);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setFont(font2);

        horizontalLayout_16->addWidget(label_25);

        lineEdit_6 = new QLineEdit(variables);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setFont(font2);

        horizontalLayout_16->addWidget(lineEdit_6);


        verticalLayout_6->addLayout(horizontalLayout_16);


        horizontalLayout_20->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_26 = new QLabel(variables);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setFont(font2);

        horizontalLayout_17->addWidget(label_26);

        lineEdit_7 = new QLineEdit(variables);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setFont(font2);

        horizontalLayout_17->addWidget(lineEdit_7);


        verticalLayout_7->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_27 = new QLabel(variables);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setFont(font2);

        horizontalLayout_18->addWidget(label_27);

        lineEdit_8 = new QLineEdit(variables);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setFont(font2);

        horizontalLayout_18->addWidget(lineEdit_8);


        verticalLayout_7->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_28 = new QLabel(variables);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setFont(font2);

        horizontalLayout_19->addWidget(label_28);

        lineEdit_9 = new QLineEdit(variables);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setFont(font2);

        horizontalLayout_19->addWidget(lineEdit_9);


        verticalLayout_7->addLayout(horizontalLayout_19);


        horizontalLayout_20->addLayout(verticalLayout_7);


        verticalLayout->addLayout(horizontalLayout_20);

        pushButton_4 = new QPushButton(variables);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font);

        verticalLayout->addWidget(pushButton_4);


        horizontalLayout_22->addLayout(verticalLayout);

        tabWidget->addTab(variables, QString());
        setting = new QWidget();
        setting->setObjectName(QStringLiteral("setting"));
        verticalLayout_10 = new QVBoxLayout(setting);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        lineEdit_10 = new QLineEdit(setting);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setFont(font1);
        lineEdit_10->setStyleSheet(QStringLiteral("color: rgb(196, 255, 249);"));

        horizontalLayout_23->addWidget(lineEdit_10);

        packetSender = new QPushButton(setting);
        packetSender->setObjectName(QStringLiteral("packetSender"));
        packetSender->setFont(font1);

        horizontalLayout_23->addWidget(packetSender);


        verticalLayout_9->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        changeMode = new QPushButton(setting);
        changeMode->setObjectName(QStringLiteral("changeMode"));
        changeMode->setFont(font);

        horizontalLayout_24->addWidget(changeMode);

        portChange = new QPushButton(setting);
        portChange->setObjectName(QStringLiteral("portChange"));
        portChange->setFont(font);

        horizontalLayout_24->addWidget(portChange);

        info = new QPushButton(setting);
        info->setObjectName(QStringLiteral("info"));
        info->setFont(font);
        info->setStyleSheet(QStringLiteral(""));

        horizontalLayout_24->addWidget(info);


        verticalLayout_9->addLayout(horizontalLayout_24);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        plainTextClear = new QPushButton(setting);
        plainTextClear->setObjectName(QStringLiteral("plainTextClear"));
        plainTextClear->setFont(font2);
        plainTextClear->setIconSize(QSize(16, 16));

        horizontalLayout_25->addWidget(plainTextClear);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer);


        verticalLayout_9->addLayout(horizontalLayout_25);

        scrollArea = new QScrollArea(setting);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 840, 376));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        plainText = new QPlainTextEdit(scrollAreaWidgetContents_3);
        plainText->setObjectName(QStringLiteral("plainText"));
        QFont font3;
        font3.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        font3.setStrikeOut(false);
        plainText->setFont(font3);

        verticalLayout_8->addWidget(plainText);

        scrollArea->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_9->addWidget(scrollArea);


        verticalLayout_10->addLayout(verticalLayout_9);

        tabWidget->addTab(setting, QString());

        verticalLayout_13->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 880, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "Var1", nullptr));
        checkBox_2->setText(QApplication::translate("MainWindow", "Var2", nullptr));
        checkBox_3->setText(QApplication::translate("MainWindow", "Var3", nullptr));
        checkBox_4->setText(QApplication::translate("MainWindow", "Var4", nullptr));
        checkBox_5->setText(QApplication::translate("MainWindow", "Var5", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "clear", nullptr));
        startThread1->setText(QApplication::translate("MainWindow", "start", nullptr));
        stopThread1->setText(QApplication::translate("MainWindow", "stop", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(graph1), QApplication::translate("MainWindow", "Graph 1", nullptr));
        checkBox_6->setText(QApplication::translate("MainWindow", "Var6", nullptr));
        checkBox_7->setText(QApplication::translate("MainWindow", "Var7", nullptr));
        checkBox_8->setText(QApplication::translate("MainWindow", "Var8", nullptr));
        checkBox_9->setText(QApplication::translate("MainWindow", "Var9", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "clear", nullptr));
        startThread2->setText(QApplication::translate("MainWindow", "start", nullptr));
        stopThread2->setText(QApplication::translate("MainWindow", "stop", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(graph2), QApplication::translate("MainWindow", "Graph 2", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "Digital View:", nullptr));
        label->setText(QApplication::translate("MainWindow", "Var1", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Var4", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Var7", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Var2", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Var5", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Var8", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Var3", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Var6", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "Var9", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "Change Variables:", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "Var1", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "Var4", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "Var7", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "Var2", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "Var5", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "Var8", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "Var3", nullptr));
        label_27->setText(QApplication::translate("MainWindow", "Var6", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "Var9", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Apply Changes", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(variables), QApplication::translate("MainWindow", "Variables", nullptr));
        packetSender->setText(QApplication::translate("MainWindow", "send", nullptr));
        changeMode->setText(QApplication::translate("MainWindow", "Change Mode", nullptr));
        portChange->setText(QApplication::translate("MainWindow", "Change Port", nullptr));
        info->setText(QApplication::translate("MainWindow", "Setting", nullptr));
        plainTextClear->setText(QApplication::translate("MainWindow", "clear", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(setting), QApplication::translate("MainWindow", "Setting", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
