#ifndef NEWUSER_H
#define NEWUSER_H

#include <QWidget>
#include <QMenu>
#include <QTimer>

namespace Ui {
class Newuser;
}

class Newuser : public QWidget
{
    Q_OBJECT

public:
    explicit Newuser(QWidget *parent = 0);
    ~Newuser();

public slots:
    void loginButtonClk();
    void checkIfChangeLoginButtom(const QString&);
    void checkIfChangeVeriCodeButtom(const QString&);
    void areanumButtonClicked(QAction *);
    void timingBegin();
    void displayTheRemainingTime();
    void closeTheWarning();

private:
    Ui::Newuser *ui;
    int time;
    QMenu* aeramenu;
    QTimer* timer;
    QTimer* timer1;
};

#endif // NEWUSER_H
