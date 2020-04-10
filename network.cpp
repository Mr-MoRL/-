#include "network.h"
#include "ui_network.h"
#include <QApplication>
#include "mainwindow.h"

network::network(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::network),
    aeramenu(new QMenu()),
    timer(new QTimer()),
    timer1(new QTimer())
{
    ui->setupUi(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(closeTheWarning()));
    connect(timer1, SIGNAL(timeout()), this, SLOT(closeTheTesting()));
    connect(ui->login, SIGNAL(clicked()), this->window(), SLOT(backToLastWindow()));
    connect(ui->cancel, SIGNAL(clicked()), this->window(), SLOT(backToLastWindow()));
    connect(ui->test, SIGNAL(clicked()), this, SLOT(onButtonTestClicked()));
    connect(aeramenu, SIGNAL(triggered(QAction*)), this, SLOT(areanumButtonClicked(QAction *)));

    QAction *notUseAgent = new QAction(aeramenu);
    QAction *httpAgent = new QAction(aeramenu);
    QAction *socks5Agent = new QAction(aeramenu);
    QAction *browserAgent = new QAction(aeramenu);

    aeramenu->addAction(notUseAgent);
    aeramenu->addAction(httpAgent);
    aeramenu->addAction(socks5Agent);
    aeramenu->addAction(browserAgent);

    aeramenu->setWindowFlags(aeramenu->windowFlags() | Qt::FramelessWindowHint);
    aeramenu->setAttribute(Qt::WA_TranslucentBackground);
    aeramenu->setStyleSheet(" QMenu {panding-left: 10px; background-color:rgb(255, 255, 255); border-radius:5px; font-family:'Arial'; font-size:20px; border: 1px solid rgb(226, 226, 226);}"
                              "QMenu::item {height:35px; width:298px; border: 1px solid none;}"
                              "QMenu::item:selected {background-color:rgb(226, 226, 226); border: 0px solid rgb(255,255,255);}");

    ui->testing->hide();
    ui->failconnect->hide();
    ui->browser->hide();
    ui->invalidInput->hide();
    ui->type->setMenu(aeramenu);
    ui->addr->setReadOnly(true);
    ui->port->setReadOnly(true);
    ui->usernum->setReadOnly(true);
    ui->password->setReadOnly(true);
    ui->test->setEnabled(false);
    ui->test->setStyleSheet(QStringLiteral("QPushButton {border: 1px solid rgba(0,0,0,0); color: rgb(217, 217, 217)"));
    notUseAgent->setText("不使用代理");
    httpAgent->setText("HTTP代理");
    socks5Agent->setText("SOCKS5代理");
    browserAgent->setText("使用浏览器代理");
}


network::~network()
{
    delete ui;
}


void network::onButtonTestClicked()
{
    if(ui->type->text() == "使用浏览器代理"){
        ui->browser->show();
        timer->setInterval(4000);
        timer->start();
    }
    else if(ui->type->text() == "HTTP代理"){
        if(ui->port->text().size() == 0 || ui->addr->text().size() == 0){
            ui->invalidInput->show();
            timer->setInterval(4000);
            timer->start();
        }
        else if(ui->password->text().size() == 0 || ui->usernum->text().size() == 0){
            ui->failconnect->show();
            timer->setInterval(4000);
            timer->start();
        }
        else{
            ui->testing->show();
            timer1->setInterval(4000);
            timer1->start();
        }
    }
    else if(ui->type->text() == "SOCKS5代理"){
        if(ui->port->text().size() == 0 || ui->password->text().size() == 0 || ui->usernum->text().size() == 0 || ui->addr->text().size() == 0)
            ui->invalidInput->show();
        else{
            ui->testing->show();
            timer1->setInterval(4000);
            timer1->start();
        }
    }
}


void network::areanumButtonClicked(QAction *action)
{
    ui->type->setText(action->text());
    if(action->text() == "不使用代理"){
        ui->addr->setReadOnly(true);
        ui->port->setReadOnly(true);
        ui->usernum->setReadOnly(true);
        ui->password->setReadOnly(true);
        ui->test->setEnabled(false);
        ui->test->setStyleSheet(QStringLiteral("QPushButton {border: 1px solid rgba(0,0,0,0); color: rgb(217, 217, 217)"));
    }
    else if(action->text() == "使用浏览器代理"){
        ui->addr->setReadOnly(true);
        ui->port->setReadOnly(true);
        ui->usernum->setReadOnly(false);
        ui->password->setReadOnly(false);
        ui->test->setEnabled(true);
        ui->test->setStyleSheet(QStringLiteral("QPushButton {border: 1px solid rgba(0,0,0,0); color: rgb(85, 85, 255)}"));
    }
    else{
        ui->addr->setReadOnly(false);
        ui->port->setReadOnly(false);
        ui->usernum->setReadOnly(false);
        ui->password->setReadOnly(false);
        ui->test->setEnabled(true);
        ui->test->setStyleSheet(QStringLiteral("QPushButton {border: 1px solid rgba(0,0,0,0); color: rgb(85, 85, 255)}"));
    }
}


void network::closeTheWarning()
{
    timer->stop();
    ui->browser->hide();
    ui->failconnect->hide();
    ui->invalidInput->hide();
    ui->testing->hide();
}


void network::closeTheTesting()
{
    timer1->stop();
    ui->failconnect->show();
    timer->setInterval(4000);
    timer->start();
}
