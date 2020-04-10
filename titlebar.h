#ifndef TITLEBAR_H
#define TITLEBAR_H

#include <QWidget>
#include <QPoint>
#include <QMouseEvent>

namespace Ui {
class titlebar;
}

class titlebar : public QWidget
{
    Q_OBJECT

public:
    explicit titlebar(QWidget *parent = 0);
    ~titlebar();

private:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private slots:
    void onButtonMinClicked();
    void onButtonCloseClicked();
    void onButtonBackClicked();

private:
    Ui::titlebar *ui;
    bool isPressed;
    QPoint startMovePos;
};

#endif // TITLEBAR_H
