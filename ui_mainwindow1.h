#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "titlebar1.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *line_3;
    QCheckBox *autologin;
    QFrame *line_5;
    QPushButton *forgetpass;
    QPushButton *newuser;
    QPushButton *codelogin;
    QPushButton *passlogin;
    QLabel *logo;
    QFrame *line_4;
    QLineEdit *ddnum;
    QFrame *line_2;
    QFrame *line;
    QFrame *line_6;
    QLineEdit *ddpass;
    QCommandLinkButton *login;
    QPushButton *alinum;
    titlebar1 *widget;
    QListView *listView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(371, 551);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        MainWindow->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral("QWidget{bcakground-color: rgb(85, 170, 255);}"));
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(180, 100, 171, 20));
        line_3->setLineWidth(2);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        autologin = new QCheckBox(centralWidget);
        autologin->setObjectName(QStringLiteral("autologin"));
        autologin->setGeometry(QRect(20, 460, 91, 31));
        autologin->setCursor(QCursor(Qt::PointingHandCursor));
        autologin->setStyleSheet(QStringLiteral("QCheckBox {background-color: rgb(255, 255, 255); color: rgb(159, 159, 159); } QCheckBox:hover { background-color: rgb(255, 255, 255); color: rgb(85, 85, 255); }"));
        autologin->setChecked(false);
        autologin->setAutoRepeat(false);
        autologin->setTristate(false);
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(20, 359, 321, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        forgetpass = new QPushButton(centralWidget);
        forgetpass->setObjectName(QStringLiteral("forgetpass"));
        forgetpass->setGeometry(QRect(170, 458, 81, 28));
        forgetpass->setCursor(QCursor(Qt::PointingHandCursor));
        forgetpass->setStyleSheet(QStringLiteral("QPushButton {border: 1px solid rgba(0,0,0,0); background-color: rgb(255, 255, 255); color: rgb(159, 159, 159); } QPushButton:hover { background-color: rgb(255, 255, 255); color: rgb(85, 85, 255); }"));
        forgetpass->setFlat(true);
        newuser = new QPushButton(centralWidget);
        newuser->setObjectName(QStringLiteral("newuser"));
        newuser->setGeometry(QRect(250, 458, 91, 28));
        newuser->setCursor(QCursor(Qt::PointingHandCursor));
        newuser->setStyleSheet(QStringLiteral("QPushButton {border: 1px solid rgba(0,0,0,0); background-color: rgb(255, 255, 255); color: rgb(159, 159, 159); } QPushButton:hover { background-color: rgb(255, 255, 255); color: rgb(85, 85, 255); }"));
        newuser->setFlat(true);
        codelogin = new QPushButton(centralWidget);
        codelogin->setObjectName(QStringLiteral("codelogin"));
        codelogin->setGeometry(QRect(40, 70, 121, 31));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Myungjo Std M"));
        font.setPointSize(12);
        codelogin->setFont(font);
        codelogin->setCursor(QCursor(Qt::PointingHandCursor));
        codelogin->setStyleSheet(QStringLiteral("QPushButton {border: 1px solid rgba(0,0,0,0); background-color: rgb(255, 255, 255); color: rgb(159, 159, 159); } QPushButton:hover { background-color: rgb(255, 255, 255); color: rgb(85, 85, 255); }"));
        codelogin->setFlat(true);
        passlogin = new QPushButton(centralWidget);
        passlogin->setObjectName(QStringLiteral("passlogin"));
        passlogin->setGeometry(QRect(200, 70, 121, 31));
        passlogin->setFont(font);
        passlogin->setCursor(QCursor(Qt::PointingHandCursor));
        passlogin->setAutoFillBackground(false);
        passlogin->setStyleSheet(QStringLiteral("QPushButton {border: 1px solid rgba(0,0,0,0); background-color: rgb(255, 255, 255); color: rgb(159, 159, 159); } QPushButton:hover { background-color: rgb(255, 255, 255); color: rgb(85, 85, 255); }"));
        passlogin->setInputMethodHints(Qt::ImhNone);
        passlogin->setFlat(true);
        logo = new QLabel(centralWidget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(120, 150, 131, 131));
        logo->setTextFormat(Qt::AutoText);
        logo->setPixmap(QPixmap(QString::fromUtf8("../../DingtalkLogin/myDingtalkLogin/myDingtalkLogin/img/icons/128x128.png")));
        logo->setAlignment(Qt::AlignCenter);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(10, 100, 171, 20));
        line_4->setLineWidth(2);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        ddnum = new QLineEdit(centralWidget);
        ddnum->setObjectName(QStringLiteral("ddnum"));
        ddnum->setGeometry(QRect(120, 320, 221, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(13);
        ddnum->setFont(font1);
        ddnum->setStyleSheet(QStringLiteral("QLineEdit{border-with: 0; border-style: outset}"));
        ddnum->setDragEnabled(false);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(100, 330, 20, 23));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(250, 462, 3, 21));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(20, 407, 321, 16));
        line_6->setStyleSheet(QStringLiteral("color: rgb(250, 250, 250)"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        ddpass = new QLineEdit(centralWidget);
        ddpass->setObjectName(QStringLiteral("ddpass"));
        ddpass->setGeometry(QRect(20, 370, 321, 41));
        ddpass->setFont(font1);
        ddpass->setStyleSheet(QStringLiteral("QLineEdit{border-with: 0; border-style: outset}"));
        ddpass->setEchoMode(QLineEdit::Password);
        login = new QCommandLinkButton(centralWidget);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(310, 370, 31, 41));
        login->setAutoDefault(true);
        login->setDefault(false);
        alinum = new QPushButton(centralWidget);
        alinum->setObjectName(QStringLiteral("alinum"));
        alinum->setGeometry(QRect(0, 491, 371, 61));
        alinum->setCursor(QCursor(Qt::PointingHandCursor));
        alinum->setMouseTracking(true);
        alinum->setAutoFillBackground(false);
        alinum->setStyleSheet(QStringLiteral("QPushButton {border: 1px solid rgba(0,0,0,0); background-color: rgb(247, 247, 247); color: rgb(159, 159, 159);} QPushButton:hover {background-color: rgb(247, 247, 247); color: rgb(85, 85, 255);}"));
        alinum->setFlat(false);
        widget = new titlebar1(MainWindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 371, 51));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(85, 170, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(213, 234, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(149, 202, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(42, 85, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(56, 113, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(170, 212, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        widget->setPalette(palette);
        widget->setAutoFillBackground(false);
        widget->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255)"));
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(20, 320, 91, 41));
        listView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        passlogin->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\351\222\211\351\222\211", Q_NULLPTR));
        autologin->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\347\231\273\345\275\225", Q_NULLPTR));
        forgetpass->setText(QApplication::translate("MainWindow", "\345\277\230\350\256\260\345\257\206\347\240\201", Q_NULLPTR));
        newuser->setText(QApplication::translate("MainWindow", "\346\226\260\347\224\250\346\210\267\346\263\250\345\206\214", Q_NULLPTR));
        codelogin->setText(QApplication::translate("MainWindow", "\346\211\253\347\240\201\347\231\273\345\275\225", Q_NULLPTR));
        passlogin->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201\347\231\273\345\275\225", Q_NULLPTR));
        logo->setText(QString());
        ddnum->setText(QString());
        ddnum->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        ddpass->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", Q_NULLPTR));
        login->setText(QString());
        alinum->setText(QApplication::translate("MainWindow", "\351\230\277\351\207\214\345\233\275\351\231\205\347\253\231\345\270\220\345\217\267\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
