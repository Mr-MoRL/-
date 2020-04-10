#include "refreshcircle.h"
#include <QPainter>

RefreshCicle::RefreshCicle(QWidget* parent)
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


bool RefreshCicle::isAnimated() const
{
    return (timerId_ != -1);
}


void RefreshCicle::setDisplayedWhenStopped(bool state)
{
    displayedWhenStopped_ = state;
    update();
}


bool RefreshCicle::isDisplayedWhenStopped() const
{
    return displayedWhenStopped_;
}


void RefreshCicle::startAnimation()
{
    angle_ = 0;
    if (timerId_ == -1) {
        timerId_ = startTimer(delay_);
    }
}


void RefreshCicle::stopAnimation()
{
    if (timerId_ != -1) {
        killTimer(timerId_);
    }
    timerId_ = -1;
    update();
}


void RefreshCicle::setAnimationDelay(int delay)
{
    if (timerId_ != -1){
        killTimer(timerId_);
    }
    delay_ = delay;
    if (timerId_ != -1){
        timerId_ = startTimer(delay_);
    }
}


void RefreshCicle::setColor(const QColor &color)
{
    color_ = color;
    update();
}


QSize RefreshCicle::sizeHint() const
{
    return QSize(25,25);
}


void RefreshCicle::timerEvent(QTimerEvent *) {
    angle_ = (angle_ + 30) % 360;
    update();
}


void RefreshCicle::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    p.setRenderHint(QPainter::Antialiasing);
    if (!displayedWhenStopped_ && !isAnimated()) {
        p.drawPixmap(rect(), currentPix_);
        return;
    }
    int width = qMin(this->width(), this->height());
    int outerRadius = (width - 1) >> 1;
    int innerRadius = ((width - 1) >> 1) * 0.38;
    int capsuleHeight = outerRadius - innerRadius;
    int capsuleWidth  = (width > 32 ) ? capsuleHeight * 0.23 : capsuleHeight * 0.35;
    int capsuleRadius = capsuleWidth >> 1;

    for (int i = 0; i < 12; ++i) {
        QColor color = color_;
        color.setAlphaF(1.0f - (i / 12.0f));
        p.setPen(Qt::NoPen);
        p.setBrush(color);
        p.save();
        p.translate(rect().center());
        p.rotate(angle_ - i * 30.0f);
        p.drawRoundedRect(((-capsuleWidth) >> 1), -(innerRadius + capsuleHeight), capsuleWidth, capsuleHeight, capsuleRadius, capsuleRadius);
        p.restore();
    }
}
