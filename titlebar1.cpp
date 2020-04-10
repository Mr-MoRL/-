#include "titlebar1.h"
#include "ui_titlebar1.h"

titlebar1::titlebar1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::titlebar1),
    isPressed(false)
{
    ui->setupUi(this);
    connect(ui->minimum, SIGNAL(clicked()), this, SLOT(onButtonMinClicked()));
    connect(ui->close, SIGNAL(clicked()), this, SLOT(onButtonCloseClicked()));
}


titlebar1::~titlebar1()
{
    delete ui;
}


void titlebar1::mousePressEvent(QMouseEvent *event)
{
    isPressed = true;
    startMovePos = event->globalPos();
    QWidget::mousePressEvent(event);
}


void titlebar1::mouseMoveEvent(QMouseEvent *event)
{
    if (isPressed)
    {
        QPoint movePoint = event->globalPos() - startMovePos;
        if(this->parentWidget()){
            QPoint widgetPos = this->parentWidget()->pos();
            startMovePos = event->globalPos();
            this->parentWidget()->move(widgetPos.x() + movePoint.x(), widgetPos.y() + movePoint.y());
        }
    }
    QWidget::mouseMoveEvent(event);
}


void titlebar1::mouseReleaseEvent(QMouseEvent *event)
{
    isPressed = false;
    QWidget::mouseReleaseEvent(event);
}


void titlebar1::onButtonMinClicked()
{
    QWidget *pWindow = this->window();
    pWindow->showMinimized();
}


void titlebar1::onButtonCloseClicked()
{
    QWidget *pWindow = this->window();
    pWindow->close();
}
