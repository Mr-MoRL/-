#include "refreshcircle1.h"
#include <QPainter>
#include <QRectF>
#include <QPen>

RefreshCicle1::RefreshCicle1(QWidget* parent)
    : QWidget(parent),
      angle_(0),
      timerId_(-1),
      delay_(20),
      displayedWhenStopped_(false),
      color_(Qt::green)
{
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    setFocusPolicy(Qt::NoFocus);
}


bool RefreshCicle1::isAnimated() const
{
    return (timerId_ != -1);
}


void RefreshCicle1::setDisplayedWhenStopped(bool state)
{
    displayedWhenStopped_ = state;
    update();
}


bool RefreshCicle1::isDisplayedWhenStopped() const
{
    return displayedWhenStopped_;
}


void RefreshCicle1::startAnimation()
{
    angle_ = 0;
    if (timerId_ == -1) {
        timerId_ = startTimer(delay_);
    }
}


void RefreshCicle1::stopAnimation()
{
    if (timerId_ != -1) {
        killTimer(timerId_);
    }
    timerId_ = -1;
    update();
}


void RefreshCicle1::setAnimationDelay(int delay)
{
    if (timerId_ != -1){
        killTimer(timerId_);
    }
    delay_ = delay;
    if (timerId_ != -1){
        timerId_ = startTimer(delay_);
    }
}


void RefreshCicle1::setColor(const QColor &color)
{
    color_ = color;
    update();
}


QSize RefreshCicle1::sizeHint() const
{
    return QSize(25,25);
}


void RefreshCicle1::timerEvent(QTimerEvent *) {
    angle_ = (angle_ + 3) % 360;
    update();
}


void RefreshCicle1::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    QPen pen;
    pen.setWidth(5);
    pen.setColor(QColor(73, 147, 221, 255));
    painter.setPen(pen);
    int startAngle = angle_ * 16;
    int spanAngle = (angle_ + 2) * 16;
    QRectF boundingRect(8, 8, 150, 150);
    painter.translate(0, 0);
    painter.setBrush(Qt::blue);
    painter.drawArc(boundingRect, startAngle, spanAngle);
}
