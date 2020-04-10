#include "alilogincircling.h"
#include "ui_alilogincircling.h"

aliLogincircling::aliLogincircling(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::aliLogincircling)
{
    ui->setupUi(this);
    ui->circle->setColor(Qt::blue);
    ui->circle->startAnimation();
    ui->circle->show();
    ui->logo->show();
}

aliLogincircling::~aliLogincircling()
{
    delete ui;
}
