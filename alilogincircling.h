#ifndef ALILOGINCIRCLING_H
#define ALILOGINCIRCLING_H

#include <QWidget>

namespace Ui {
class aliLogincircling;
}

class aliLogincircling : public QWidget
{
    Q_OBJECT

public:
    explicit aliLogincircling(QWidget *parent = 0);
    ~aliLogincircling();

private:
    Ui::aliLogincircling *ui;
};

#endif // ALILOGINCIRCLING_H
