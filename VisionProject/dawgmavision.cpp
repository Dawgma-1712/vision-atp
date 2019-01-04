#include "dawgmavision.h"
#include "ui_dawgmavision.h"

DawgmaVision::DawgmaVision(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DawgmaVision)
{
    ui->setupUi(this);
}

DawgmaVision::~DawgmaVision()
{
    delete ui;
}
