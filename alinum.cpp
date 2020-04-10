#include "alinum.h"
#include "ui_alinum.h"
#include <QDebug>
#include <QMouseEvent>
#include <QDesktopServices>
#include <QUrl>

Alinum::Alinum(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Alinum),
    timer(new QTimer()),
    timer2(new QTimer())
{
    ui->setupUi(this);
    connect(ui->login, SIGNAL(clicked()), this, SLOT(loginButtonClk()));
    connect(this, SIGNAL(function()), this->window(), SLOT(closeTheBackButtonWhenLogin()));
    connect(ui->ddpass, SIGNAL(textChanged(const QString&)), this, SLOT(checkIfDisplayLoginBottum(const QString&)));
    connect(ui->ddnum, SIGNAL(textChanged(const QString&)), this, SLOT(checkIfDisplayLoginBottum(const QString&)));
    connect(ui->forgetpass, SIGNAL(clicked()), this, SLOT(forgetpassButtonClicked()));
    connect(ui->newuser, SIGNAL(clicked()), this, SLOT(newuserButtonClicked()));
    connect(ui->protocol, SIGNAL(clicked()), this, SLOT(protocolButtonClicked()));
    connect(timer, SIGNAL(timeout()), this, SLOT(closeTheWarning()));
    connect(timer2, SIGNAL(timeout()), this, SLOT(closeTheLoginCircle()));
    connect(timer2, SIGNAL(timeout()), this->window(), SLOT(showTheBackButtonWhenLogin()));
    ui->login->hide();
    ui->warning->hide();
    ui->warning_1->hide();
    ui->widget->hide();
}


Alinum::~Alinum()
{
    delete ui;
}


void Alinum::loginButtonClk()
{
    if(ui->agreeItem->isChecked()){
        ui->widget->show();
        ui->warning->hide();
        ui->warning_1->hide();
        timer2->setInterval(500);
        timer2->start();
        emit function();
    }
    else{
        ui->widget->hide();
        ui->warning->show();
        ui->warning_1->hide();
        timer->setInterval(4000);
        timer->start();
    }
}


void Alinum::closeTheWarning()
{
    ui->warning->hide();
    ui->warning_1->hide();
    timer->stop();
}


void Alinum::checkIfDisplayLoginBottum(const QString& text)
{
    qDebug() << "checkIfDisplayLoginBottum" << endl;
    if(ui->ddnum->text().size() > 0 && ui->ddpass->text().size() > 0)
        ui->login->show();
    else
        ui->login->hide();
}


void Alinum::forgetpassButtonClicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://passport.alibaba.com/ac/password_find.htm?fromSite=4&lang=zh_CN")));
}


void Alinum::newuserButtonClicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://passport.alibaba.com/member/reg/enter_fill_email.htm")));
}


void Alinum::protocolButtonClicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://terms.alicdn.com/legal-agreement/terms/suit_bu1_b2b/suit_bu1_b2b201809301342_41030.html")));
}


void Alinum::closeTheLoginCircle()
{
    timer2->stop();
    ui->widget->hide();
    ui->warning->hide();
    ui->warning_1->show();
    timer->setInterval(4000);
    timer->start();
}
