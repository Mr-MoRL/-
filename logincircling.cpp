#include "logincircling.h"
#include "ui_logincircling.h"

logincircling::logincircling(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::logincircling)
{
    ui->setupUi(this);
    ui->circle->setColor(Qt::blue);
    ui->circle->startAnimation();
    ui->circle->show();
    ui->logo->show();
}

logincircling::~logincircling()
{
    delete ui;
}
