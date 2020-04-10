#ifndef REFRESHCIRCLE_H
#define REFRESHCIRCLE_H

#include <QWidget>
#include <QColor>

class RefreshCicle : public QWidget
{
    Q_OBJECT

public:
    RefreshCicle(QWidget* parent = 0);
    int animationDelay() const {
        return delay_;
    }

    bool isAnimated () const;               //动画是否正在进行中
    bool isDisplayedWhenStopped() const;    //动画完毕后，是否隐藏动画
    virtual QSize sizeHint() const;

    const QColor& color() const {          //获取当前动图的颜色
        return color_;
    }

    void setBackground(const QString &_icon) {
        currentPix_ = QPixmap(_icon);
    }

signals:
    void Finished(void);

public slots:
    void startAnimation();                      //开始动画
    void stopAnimation();                       //停止动画
    void setAnimationDelay(int delay);          //设置转速
    void setDisplayedWhenStopped(bool state);   //是否隐藏动画
    void setColor(const QColor &color);         //设置动画颜色

protected:
    virtual void timerEvent(QTimerEvent * event);
    virtual void paintEvent(QPaintEvent * event);

private:
    unsigned int angle_;         //角度
    int timerId_;                //定时器
    int delay_;                  //转速
    bool displayedWhenStopped_;  //是否隐藏动画
    QColor color_;               //颜色
    QPixmap currentPix_;         //背景图
};

#endif // REFRESHCIRCLE_H
