#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QTimer>

namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QMainWindow *parent = 0);
    ~MainWindow();

public slots:
    void loginButtonClicked();
    void checkIfDisplayLoginBottum(const QString&);
    void forgetpassButtonClicked();
    void newuserButtonClicked();
    void alinumLoginButtonClicked();
    void backToLastWindow();
    void setNetworkButtonClicked();
    void areanumButtonClicked(QAction *);
    void closeTheWarning();
    void circling(int);
    void closeCircling();
    void closeTheLoginCircle();
    void closeTheBackButtonWhenLogin();
    void showTheBackButtonWhenLogin();

private:
    Ui::MainWindow *ui;
    QMenu* aeramenu;
    QTimer *timer;
    QTimer *timer1;
    QTimer *timer2;
    QWidget* preWidget;
    QWidget* currentWidget;
};


#endif // MAINWINDOW_H
