#ifndef TITLEBAR1_H
#define TITLEBAR1_H

#include <QWidget>
#include <QPoint>
#include <QMouseEvent>

namespace Ui {
class titlebar1;
}

class titlebar1 : public QWidget
{
    Q_OBJECT

public:
    explicit titlebar1(QWidget *parent = 0);
    ~titlebar1();

private:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private slots:
    void onButtonMinClicked();
    void onButtonCloseClicked();

private:
    Ui::titlebar1 *ui;
    bool isPressed;
    QPoint startMovePos;
};

#endif // TITLEBAR1_H
