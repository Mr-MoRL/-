/********************************************************************************
** Form generated from reading UI file 'alinum.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALINUM_H
#define UI_ALINUM_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <alilogincircling.h>

QT_BEGIN_NAMESPACE

class Ui_alinum
{
public:
    QWidget *Alinum;
    QLabel *label_3;
    QLabel *label_1;
    QLineEdit *ddpass;
    QFrame *line_1;
    QFrame *line_3;
    QLineEdit *ddnum;
    QCheckBox *autologin;
    QCheckBox *agreeItem;
    QPushButton *forgetpass;
    QFrame *line_2;
    QPushButton *newuser;
    QCommandLinkButton *login;
    QPushButton *protocol;
    QLabel *warning;
    QLabel *warning_1;
    aliLogincircling *widget;

    void setupUi(QWidget *alinum)
    {
        if (alinum->objectName().isEmpty())
            alinum->setObjectName(QStringLiteral("alinum"));
        alinum->resize(371, 501);
        Alinum = new QWidget(alinum);
        Alinum->setObjectName(QStringLiteral("Alinum"));
        Alinum->setGeometry(QRect(0, 0, 371, 501));
        Alinum->setStyleSheet(QStringLiteral("QWidget{background-color: rgb(255, 255, 255)}"));
        label_3 = new QLabel(Alinum);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(1, 40, 371, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        label_1 = new QLabel(Alinum);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(121, 110, 131, 131));
        label_1->setPixmap(QPixmap(QString::fromUtf8(":/Alilogo.PNG")));
        label_1->setAlignment(Qt::AlignCenter);
        ddpass = new QLineEdit(Alinum);
        ddpass->setObjectName(QStringLiteral("ddpass"));
        ddpass->setGeometry(QRect(36, 340, 305, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(13);
        ddpass->setFont(font1);
        ddpass->setStyleSheet(QStringLiteral("QLineEdit{border-with: 0; border-style: outset}"));
        ddpass->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        ddpass->setEchoMode(QLineEdit::Password);
        line_1 = new QFrame(Alinum);
        line_1->setObjectName(QStringLiteral("line_1"));
        line_1->setGeometry(QRect(32, 330, 305, 16));
        line_1->setFrameShape(QFrame::HLine);
        line_1->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(Alinum);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(32, 375, 305, 20));
        line_3->setStyleSheet(QStringLiteral("color: rgb(250, 250, 250)"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        ddnum = new QLineEdit(Alinum);
        ddnum->setObjectName(QStringLiteral("ddnum"));
        ddnum->setGeometry(QRect(36, 290, 304, 41));
        ddnum->setFont(font1);
        ddnum->setStyleSheet(QStringLiteral("QLineEdit{border-with: 0; border-style: outset}"));
        ddnum->setInputMethodHints(Qt::ImhHiddenText);
        ddnum->setDragEnabled(false);
        autologin = new QCheckBox(Alinum);
        autologin->setObjectName(QStringLiteral("autologin"));
        autologin->setGeometry(QRect(30, 410, 91, 31));
        autologin->setCursor(QCursor(Qt::PointingHandCursor));
        autologin->setStyleSheet(QStringLiteral("QCheckBox {background-color: rgb(255, 255, 255); color: rgb(159, 159, 159); } QCheckBox:hover { background-color: rgb(255, 255, 255); color: rgb(85, 85, 255); }"));
        autologin->setChecked(false);
        autologin->setAutoRepeat(false);
        autologin->setTristate(false);
        agreeItem = new QCheckBox(Alinum);
        agreeItem->setObjectName(QStringLiteral("agreeItem"));
        agreeItem->setGeometry(QRect(30, 440, 131, 31));
        agreeItem->setCursor(QCursor(Qt::PointingHandCursor));
        agreeItem->setStyleSheet(QStringLiteral("QCheckBox {background-color: rgb(255, 255, 255); color: rgb(159, 159, 159); } QCheckBox:hover { background-color: rgb(255, 255, 255); color: rgb(85, 85, 255); }"));
        agreeItem->setChecked(false);
        agreeItem->setAutoRepeat(false);
        agreeItem->setTristate(false);
        forgetpass = new QPushButton(Alinum);
        forgetpass->setObjectName(QStringLiteral("forgetpass"));
        forgetpass->setGeometry(QRect(180, 411, 71, 28));
        forgetpass->setCursor(QCursor(Qt::PointingHandCursor));
        forgetpass->setStyleSheet(QStringLiteral("QPushButton {border: 1px solid rgba(0,0,0,0); background-color: rgb(255, 255, 255); color: rgb(159, 159, 159); } QPushButton:hover { background-color: rgb(255, 255, 255); color: rgb(85, 85, 255); }"));
        forgetpass->setFlat(true);
        line_2 = new QFrame(Alinum);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(250, 415, 3, 20));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        newuser = new QPushButton(Alinum);
        newuser->setObjectName(QStringLiteral("newuser"));
        newuser->setGeometry(QRect(253, 411, 81, 28));
        newuser->setCursor(QCursor(Qt::PointingHandCursor));
        newuser->setStyleSheet(QStringLiteral("QPushButton {border: 1px solid rgba(0,0,0,0); background-color: rgb(255, 255, 255); color: rgb(159, 159, 159); } QPushButton:hover { background-color: rgb(255, 255, 255); color: rgb(85, 85, 255); }"));
        newuser->setFlat(true);
        login = new QCommandLinkButton(Alinum);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(300, 340, 31, 41));
        login->setStyleSheet(QStringLiteral("border: 1px solid rgba(0,0,0,0);"));
        protocol = new QPushButton(Alinum);
        protocol->setObjectName(QStringLiteral("protocol"));
        protocol->setGeometry(QRect(156, 443, 101, 25));
        protocol->setCursor(QCursor(Qt::PointingHandCursor));
        protocol->setStyleSheet(QStringLiteral("QPushButton {border: 1px solid rgba(0,0,0,0); color: rgb(85, 85, 255);}"));
        protocol->setFlat(true);
        warning = new QLabel(Alinum);
        warning->setObjectName(QStringLiteral("warning"));
        warning->setGeometry(QRect(36, 20, 298, 81));
        warning->setPixmap(QPixmap(QString::fromUtf8(":/agreeProtocol.PNG")));
        warning_1 = new QLabel(Alinum);
        warning_1->setObjectName(QStringLiteral("warning_1"));
        warning_1->setGeometry(QRect(36, 20, 298, 45));
        warning_1->setPixmap(QPixmap(QString::fromUtf8(":/wrongAlinum.PNG")));
        widget = new aliLogincircling(alinum);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 371, 501));
        widget->setStyleSheet(QStringLiteral("QWidget{background-color: rgb(255, 255, 255)}"));

        retranslateUi(alinum);

        QMetaObject::connectSlotsByName(alinum);
    } // setupUi

    void retranslateUi(QWidget *alinum)
    {
        alinum->setWindowTitle(QApplication::translate("alinum", "Form", Q_NULLPTR));
        label_3->setText(QApplication::translate("alinum", "\351\230\277\351\207\214\345\267\264\345\267\264\345\233\275\351\231\205\347\253\231", Q_NULLPTR));
        label_1->setText(QString());
        ddpass->setPlaceholderText(QApplication::translate("alinum", "\350\257\267\350\276\223\345\205\245\351\252\214\350\257\201\347\240\201", Q_NULLPTR));
        ddnum->setText(QString());
        ddnum->setPlaceholderText(QApplication::translate("alinum", "\350\257\267\350\276\223\345\205\245\344\274\232\345\221\230ID/\351\202\256\347\256\261", Q_NULLPTR));
        autologin->setText(QApplication::translate("alinum", "\350\207\252\345\212\250\347\231\273\345\275\225", Q_NULLPTR));
        agreeItem->setText(QApplication::translate("alinum", "\345\267\262\347\273\217\351\230\205\350\257\273\345\271\266\345\220\214\346\204\217", Q_NULLPTR));
        forgetpass->setText(QApplication::translate("alinum", "\345\277\230\350\256\260\345\257\206\347\240\201", Q_NULLPTR));
        newuser->setText(QApplication::translate("alinum", "\346\226\260\347\224\250\346\210\267\346\263\250\345\206\214", Q_NULLPTR));
        login->setText(QString());
        protocol->setText(QApplication::translate("alinum", "\347\224\250\346\210\267\346\216\210\346\235\203\345\215\217\350\256\256", Q_NULLPTR));
        warning->setText(QString());
        warning_1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Alinum: public Ui_alinum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALINUM_H
