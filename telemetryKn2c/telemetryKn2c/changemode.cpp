#include "changemode.h"
#include "ui_changemode.h"
#include "mainwindow.h"

ChangeMode::ChangeMode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeMode)
{
    ui->setupUi(this);
}

ChangeMode::~ChangeMode()
{
    delete ui;
}

void ChangeMode::on_pushButton_2_clicked()
{
    if(ui->radioButton->isChecked()){
        MainWindow::state1 = 0;
    }
    if(ui->radioButton_2->isChecked()){
        MainWindow::state1 = 1;
    }
    if(ui->radioButton_3->isChecked()){
        MainWindow::state1 = 2;
    }
    if(ui->radioButton_4->isChecked()){
        MainWindow::state1 = 3;
    }
    if(ui->radioButton_5->isChecked()){
        MainWindow::state1 = 4;
    }
    if(ui->radioButton_6->isChecked()){
        MainWindow::state1 = 5;
    }
    if(ui->radioButton_7->isChecked()){
        MainWindow::state1 = 6;
    }
    if(ui->radioButton_8->isChecked()){
        MainWindow::state1 = 7;
    }
    if(ui->radioButton_9->isChecked()){
        MainWindow::state2 = 0;
    }
    if(ui->radioButton_10->isChecked()){
        MainWindow::state2 = 1;
    }
    if(ui->radioButton_11->isChecked()){
        MainWindow::state2 = 2;
    }
    if(ui->radioButton_12->isChecked()){
        MainWindow::state2 = 3;
    }
    if(ui->radioButton_13->isChecked()){
        MainWindow::state2 = 4;
    }
    if(ui->radioButton_14->isChecked()){
        MainWindow::state2 = 5;
    }
    if(ui->radioButton_15->isChecked()){
        MainWindow::state2 = 6;
    }
    if(ui->radioButton_16->isChecked()){
        MainWindow::state2 = 7;
    }
    this->close();
}

void ChangeMode::on_pushButton_clicked()
{
    this->close();
}
