#include "titlebar.h"
#include "ui_titlebar.h"

titlebar::titlebar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::titlebar),
    isPressed(false)
{
    ui->setupUi(this);
    connect(ui->minimum, SIGNAL(clicked()), this, SLOT(onButtonMinClicked()));
    connect(ui->close, SIGNAL(clicked()), this, SLOT(onButtonCloseClicked()));
    connect(ui->back, SIGNAL(clicked()), this, SLOT(onButtonBackClicked()));
}


titlebar::~titlebar()
{
    delete ui;
}


void titlebar::mousePressEvent(QMouseEvent *event)
{
    isPressed = true;
    startMovePos = event->globalPos();
    QWidget::mousePressEvent(event);
}


void titlebar::mouseMoveEvent(QMouseEvent *event)
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


void titlebar::mouseReleaseEvent(QMouseEvent *event)
{
    isPressed = false;
    QWidget::mouseReleaseEvent(event);
}


void titlebar::onButtonMinClicked()
{
    QWidget *pWindow = this->window();
    pWindow->showMinimized();
}


void titlebar::onButtonCloseClicked()
{
    QWidget *pWindow = this->window();
    pWindow->close();
}


void titlebar::onButtonBackClicked()
{
    QWidget *pWindow = this->window();
    pWindow->show();
}
