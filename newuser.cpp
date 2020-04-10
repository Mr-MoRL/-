#include "newuser.h"
#include "ui_newuser.h"
#include <QDebug>
#include <QMouseEvent>
#include <QPainter>
#include <QString>

Newuser::Newuser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Newuser),
    aeramenu(new QMenu()),
    timer(new QTimer()),
    timer1(new QTimer()),
    time(60)
{
    ui->setupUi(this);
    connect(ui->ddnum, SIGNAL(editingFinished()), this, SLOT(checkVerifycode()));
    connect(ui->login, SIGNAL(clicked()), this, SLOT(loginButtonClk()));
    connect(ui->ddnum, SIGNAL(textChanged(const QString&)), this, SLOT(checkIfChangeVeriCodeButtom(const QString&)));
    connect(ui->ddpass, SIGNAL(textChanged(const QString&)), this, SLOT(checkIfChangeLoginButtom(const QString&)));
    connect(aeramenu, SIGNAL(triggered(QAction*)), this, SLOT(areanumButtonClicked(QAction *)));
    connect(ui->sendVeriCode, SIGNAL(clicked()), this, SLOT(timingBegin()));
    connect(timer, SIGNAL(timeout()), this, SLOT(displayTheRemainingTime()));
    connect(timer1, SIGNAL(timeout()), this, SLOT(closeTheWarning()));

    QAction *China = new QAction(aeramenu);
    QAction *HK = new QAction(aeramenu);
    QAction *India = new QAction(aeramenu);
    QAction *Indonesia = new QAction(aeramenu);
    QAction *Malaysia = new QAction(aeramenu);
    QAction *Philippines = new QAction(aeramenu);
    QAction *Taiwan = new QAction(aeramenu);
    aeramenu->addAction(China);
    aeramenu->addAction(HK);
    aeramenu->addAction(India);
    aeramenu->addAction(Indonesia);
    aeramenu->addAction(Malaysia);
    aeramenu->addAction(Philippines);
    aeramenu->addAction(Taiwan);

    aeramenu->setWindowFlags(aeramenu->windowFlags() | Qt::FramelessWindowHint);
    aeramenu->setAttribute(Qt::WA_TranslucentBackground);
    aeramenu->setStyleSheet(" QMenu {background-color:rgb(255, 255, 255); border-radius:5px;font-family:'Arial';font-size:16px; border: 1px solid rgb(226, 226, 226);}"
                              "QMenu::item {height:35px; width:150px; border: 1px solid none;}"
                              "QMenu::item:selected {background-color:rgb(226, 226, 226); border: 0px solid rgb(255,255,255);}");

    ui->areanum_2->setMenu(aeramenu);
    China->setText("中国                   +86");
    HK->setText("中国香港         +852");
    India->setText("印度                   +91");
    Indonesia->setText("印度尼西亚       +62");
    Malaysia->setText("马来西亚           +60");
    Philippines->setText("菲律宾               +63");
    Taiwan->setText("中国台湾         +886");

    ui->login->setEnabled(false);
    ui->sendVeriCode->setEnabled(false);

    ui->warning->hide();
    ui->warning_2->hide();
}


Newuser::~Newuser()
{
    delete ui;
}

void Newuser::closeTheWarning()
{
    timer->stop();
    ui->warning->hide();
    ui->warning_2->hide();
}


void Newuser::loginButtonClk()
{
    if(ui->login->isEnabled() == false)
        return;
    if(ui->ddnum->text().size() > 11 || ui->ddnum->text().size() < 11 || ui->ddnum->text()[0] != "1"){
        ui->warning->show();
        ui->warning_2->hide();
    }
    else{
        ui->warning->hide();
        ui->warning_2->show();
    }
    timer1->setInterval(4000);
    timer1->start();
}


void Newuser::checkIfChangeVeriCodeButtom(const QString&text)
{
    qDebug() << "checkIfDisplayLoginBottum" << endl;
    if(text.size() > 0 && time == 60){
        ui->sendVeriCode->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(85, 170, 255); color: rgb(255, 255, 255); border:1px groove rgb(227, 227, 227);border-radius:5px; padding:2px 4px;}"));
        ui->sendVeriCode->setEnabled(true);
    }
    else{
        ui->sendVeriCode->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(245, 245, 245); color: rgb(159, 159, 159); border:1px groove rgb(227, 227, 227);border-radius:5px; padding:2px 4px;}"));
        ui->sendVeriCode->setEnabled(false);
    }
}


void Newuser::checkIfChangeLoginButtom(const QString& text)
{
    qDebug() << "checkIfDisplayLoginBottum" << endl;
    if(text.size() > 3 && ui->ddnum->text().size() > 0){
        ui->login->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(85, 170, 255); color: rgb(255, 255, 255); border:1px groove rgb(227, 227, 227);border-radius:5px; padding:2px 4px;}"));
        ui->login->setEnabled(true);
    }
    else{
        ui->login->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(245, 245, 245); color: rgb(159, 159, 159); border:1px groove rgb(227, 227, 227);border-radius:5px; padding:2px 4px;}"));
        ui->login->setEnabled(false);
    }
}


void Newuser::areanumButtonClicked(QAction *action)
{
    QString num = action->text();
    int i = 0;
    while(num[i] != '+')
        ++i;
    ui->areanum_2->setText(num.mid(i));
}


void Newuser::timingBegin()
{
    if(ui->sendVeriCode->isEnabled() == false)
        return;
    ui->warning_2->hide();
    if(ui->ddnum->text().size() > 11 || ui->ddnum->text().size() < 11 || ui->ddnum->text()[0] != "1"){
        ui->warning->show();
        timer1->setInterval(4000);
        timer1->start();
    }
    else{
        ui->sendVeriCode->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(85, 170, 255); color: rgb(255, 255, 255); border:1px groove rgb(227, 227, 227);border-radius:5px; padding:2px 4px;}"));
        timer->setInterval(1000);
        timer->start();
    }
}


void Newuser::displayTheRemainingTime()
{
    if(time == -1){
        time = 60;
        timer->stop();
        checkIfChangeVeriCodeButtom("");
        if(ui->ddnum->text().size() > 0)
            ui->sendVeriCode->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(85, 170, 255); color: rgb(255, 255, 255); border:1px groove rgb(227, 227, 227);border-radius:5px; padding:2px 4px;}"));
        ui->sendVeriCode->setEnabled(true);
        ui->sendVeriCode->setText("发送验证码");
    }
    else{
        ui->sendVeriCode->setEnabled(false);
        timer->setInterval(1000);
        ui->sendVeriCode->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(245, 245, 245); color: rgb(159, 159, 159); border:1px groove rgb(227, 227, 227);border-radius:5px; padding:2px 4px;}"));
        QString curTime = QString::number(time, 10);
        curTime.append("s");
        ui->sendVeriCode->setText(curTime);
        --time;
        timer->start();
    }
}
