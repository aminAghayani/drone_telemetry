#include "changeportwindow.h"
#include "ui_changeportwindow.h"

ChangePortWindow::ChangePortWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangePortWindow)
{
    ui->setupUi(this);
}

ChangePortWindow::~ChangePortWindow()
{
    delete ui;
}
