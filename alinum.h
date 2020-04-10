#ifndef ALINUM_H
#define ALINUM_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class Alinum;
}

class Alinum : public QWidget
{
    Q_OBJECT

public:
    explicit Alinum(QWidget *parent = 0);
    ~Alinum();

signals:
    void function();

public slots:
    void loginButtonClk();
    void checkIfDisplayLoginBottum(const QString&);
    void forgetpassButtonClicked();
    void newuserButtonClicked();
    void protocolButtonClicked();
    void closeTheWarning();
    void closeTheLoginCircle();

private:
    Ui::Alinum *ui;
    QTimer* timer;
    QTimer *timer2;
};

#endif // ALINUM_H
