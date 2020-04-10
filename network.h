#ifndef NETWORK_H
#define NETWORK_H

#include <QWidget>
#include <QMenu>
#include <QTimer>

namespace Ui {
class network;
}

class network : public QWidget
{
    Q_OBJECT

public:
    explicit network(QWidget *parent = 0);
    ~network();

private slots:
    void onButtonTestClicked();
    void areanumButtonClicked(QAction *);
    void closeTheWarning();
    void closeTheTesting();

private:
    Ui::network *ui;
    QMenu* aeramenu;
    QTimer* timer;
    QTimer* timer1;
};

#endif // NETWORK_H
