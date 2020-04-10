#ifndef LOGINCIRCLING_H
#define LOGINCIRCLING_H

#include <QWidget>

namespace Ui {
class logincircling;
}

class logincircling : public QWidget
{
    Q_OBJECT

public:
    explicit logincircling(QWidget *parent = 0);
    ~logincircling();

private:
    Ui::logincircling *ui;
};

#endif // LOGINCIRCLING_H
