#ifndef FORGETPASS_H
#define FORGETPASS_H

#include <QWidget>
#include <QMenu>
#include <QTimer>

namespace Ui {
class Forgetpass;
}

class Forgetpass : public QWidget
{
    Q_OBJECT

public:
    explicit Forgetpass(QWidget *parent = 0);
    ~Forgetpass();

public slots:
    void loginButtonClk();
    void checkIfChangeLoginButtom(const QString&);
    void checkIfChangeVeriCodeButtom(const QString&);
    void areanumButtonClicked(QAction *);
    void timingBegin();
    void displayTheRemainingTime();
    void closeTheWarning();

private:
    Ui::Forgetpass *ui;
    int time;
    QMenu* aeramenu;
    QTimer* timer;
    QTimer* timer1;
};

#endif // FORGETPASS_H
