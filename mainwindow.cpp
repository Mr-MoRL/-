#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMouseEvent>
#include <QPainter>
#include <QTime>
#include <QtWidgets/QMenu>
#include <QtWidgets/QAction>

MainWindow::MainWindow(QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    aeramenu(new QMenu()),
    timer(new QTimer()),
    timer1(new QTimer()),
    timer2(new QTimer())
{
    ui->setupUi(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(closeTheWarning()));
    connect(timer1, SIGNAL(timeout()), this, SLOT(closeCircling()));
    connect(timer2, SIGNAL(timeout()), this, SLOT(closeTheLoginCircle()));
    connect(ui->login, SIGNAL(clicked()), this, SLOT(loginButtonClicked()));
    connect(ui->ddpass, SIGNAL(textChanged(const QString&)), this, SLOT(checkIfDisplayLoginBottum(const QString&)));
    connect(ui->forgetpass, SIGNAL(clicked()), this, SLOT(forgetpassButtonClicked()));
    connect(ui->newuser, SIGNAL(clicked()), this, SLOT(newuserButtonClicked()));
    connect(ui->alinum, SIGNAL(clicked()), this, SLOT(alinumLoginButtonClicked()));
    connect(ui->alinum_2, SIGNAL(clicked()), this, SLOT(alinumLoginButtonClicked()));
    connect(ui->back, SIGNAL(clicked()), this, SLOT(backToLastWindow()));
    connect(ui->setNetwork, SIGNAL(clicked()), this, SLOT(setNetworkButtonClicked()));
    connect(aeramenu, SIGNAL(triggered(QAction*)), this, SLOT(areanumButtonClicked(QAction *)));
    connect(ui->tabWidget, SIGNAL(currentChanged(int)), this, SLOT(circling(int)));

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

    ui->areanum->setMenu(aeramenu);
    ui->areanum->show();
    China->setText("中国                   +86");
    HK->setText("中国香港         +852");
    India->setText("印度                   +91");
    Indonesia->setText("印度尼西亚       +62");
    Malaysia->setText("马来西亚           +60");
    Philippines->setText("菲律宾               +63");
    Taiwan->setText("中国台湾         +886");

    ui->widget->setColor(Qt::gray);
    ui->widget->startAnimation();
    ui->widget->hide();

    ui->setNetwork->show();
    ui->label_6->hide();
    ui->back->hide();
    ui->autologin->show();
    ui->label_3->show();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->AliNum->hide();
    ui->ForgetPass->hide();
    ui->NewUser->hide();
    ui->tabWidget->show();
    ui->Setnetwork->hide();
    ui->widget_2->hide();
    ui->login->hide();
    preWidget = ui->tabWidget;
    currentWidget = ui->tabWidget;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::loginButtonClicked()
{
    ui->AliNum->hide();
    ui->ForgetPass->hide();
    ui->NewUser->hide();
    ui->tabWidget->hide();
    ui->Setnetwork->hide();
    ui->widget_2->show();
    ui->autologin->hide();
    ui->newuser->hide();
    ui->setNetwork->hide();
    closeTheBackButtonWhenLogin();
    timer2->setInterval(500);
    timer2->start();
}


void MainWindow::checkIfDisplayLoginBottum(const QString& text)
{
    qDebug() << "checkIfDisplayLoginBottum" << endl;
    if(text.size() > 3 && ui->ddnum->text().size() > 0)
        ui->login->show();
    else
        ui->login->hide();
}


void MainWindow::forgetpassButtonClicked()
{
    ui->setNetwork->hide();
    ui->label_6->hide();
    ui->autologin->hide();
    ui->newuser->hide();
    ui->label_3->hide();
    ui->label_4->show();
    ui->label_5->hide();
    ui->back->show();
    ui->AliNum->hide();
    ui->ForgetPass->show();
    ui->NewUser->hide();
    ui->tabWidget->hide();
    ui->Setnetwork->hide();
    preWidget = currentWidget;
    currentWidget = ui->tabWidget;
}


void MainWindow::newuserButtonClicked()
{
    ui->setNetwork->hide();
    ui->label_6->hide();
    ui->autologin->hide();
    ui->newuser->hide();
    ui->label_3->hide();
    ui->label_4->show();
    ui->label_5->hide();
    ui->back->show();
    ui->AliNum->hide();
    ui->ForgetPass->hide();
    ui->NewUser->show();
    ui->tabWidget->hide();
    ui->Setnetwork->hide();
    preWidget = currentWidget;
    currentWidget = ui->tabWidget;
}


void MainWindow::alinumLoginButtonClicked()
{
    ui->setNetwork->show();
    ui->label_6->hide();
    ui->autologin->hide();
    ui->newuser->hide();
    ui->label_3->hide();
    ui->label_4->show();
    ui->label_5->hide();
    ui->back->show();
    ui->AliNum->show();
    ui->ForgetPass->hide();
    ui->NewUser->hide();
    ui->tabWidget->hide();
    ui->Setnetwork->hide();
    currentWidget = ui->AliNum;
    preWidget = ui->tabWidget;
}


void MainWindow::backToLastWindow()
{
    this->resize(371, 555);
    ui->background->resize(371, 555);
    if(preWidget == ui->tabWidget){
        ui->label_6->hide();
        ui->setNetwork->show();
        ui->autologin->show();
        ui->newuser->show();
        ui->label_3->show();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->back->hide();
        ui->AliNum->hide();
        ui->ForgetPass->hide();
        ui->NewUser->hide();
        ui->tabWidget->hide();
        ui->Setnetwork->hide();
        preWidget->show();
        currentWidget = ui->tabWidget;
        preWidget = ui->tabWidget;
    }
    else if(preWidget == ui->AliNum){
        ui->setNetwork->show();
        ui->label_3->hide();
        ui->label_4->show();
        ui->label_5->hide();
        ui->AliNum->hide();
        ui->ForgetPass->hide();
        ui->NewUser->hide();
        ui->tabWidget->hide();
        ui->Setnetwork->hide();
        preWidget->show();
        currentWidget = preWidget;
        preWidget = ui->tabWidget;
    }
}


void MainWindow::setNetworkButtonClicked()
{
    this->resize(371, 637);
    ui->background->resize(371, 700);
    ui->label_6->hide();
    ui->autologin->hide();
    ui->newuser->hide();
    ui->setNetwork->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->show();
    ui->back->show();
    ui->AliNum->hide();
    ui->ForgetPass->hide();
    ui->NewUser->hide();
    ui->tabWidget->hide();
    ui->Setnetwork->show();
    preWidget = currentWidget;
    currentWidget = ui->Setnetwork;
}


void MainWindow::areanumButtonClicked(QAction *action)
{
    ui->label_6->hide();
    QString num = action->text();
    int i = 0;
    while(num[i] != '+')
        ++i;
    ui->areanum->setText(num.mid(i));
}


void MainWindow::closeTheWarning()
{
    timer->stop();
    ui->label_6->hide();
}


void MainWindow::circling(int index)
{
    if(index != 0)
        return;
    ui->label_2->hide();
    ui->widget->show();
    timer1->setInterval(300);
    timer1->start();
}


void MainWindow::closeCircling()
{
    timer1->stop();
    ui->widget->hide();
    ui->label_2->show();
}


void MainWindow::closeTheLoginCircle()
{
    ui->AliNum->hide();
    ui->ForgetPass->hide();
    ui->NewUser->hide();
    ui->tabWidget->show();
    ui->Setnetwork->hide();
    ui->widget_2->hide();
    ui->autologin->show();
    ui->newuser->show();
    ui->setNetwork->show();
    showTheBackButtonWhenLogin();
    timer2->stop();
    ui->label_6->show();
    timer->setInterval(4000);
    timer->start();
}


void MainWindow::closeTheBackButtonWhenLogin()
{
    ui->label_3->show();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->back->hide();
    ui->setNetwork->hide();
}


void MainWindow::showTheBackButtonWhenLogin()
{
    ui->label_3->hide();
    ui->label_4->show();
    ui->label_5->hide();
    ui->back->show();
    ui->setNetwork->show();
}
