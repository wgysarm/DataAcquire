#include "DataAcquireDemo.h"
#include "ui_DataAcquireDemo.h"

DataAcquireDemo::DataAcquireDemo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DataAcquireDemo)
{
    ui->setupUi(this);
}

DataAcquireDemo::~DataAcquireDemo()
{
    delete ui;
}
