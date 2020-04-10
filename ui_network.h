/********************************************************************************
** Form generated from reading UI file 'network.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORK_H
#define UI_NETWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <QValidator>

QT_BEGIN_NAMESPACE

class Ui_network
{
public:
    QWidget *widget;
    QLabel *typeText;
    QLabel *addrType;
    QLabel *portType;
    QLabel *userType;
    QLabel *passType;
    QPushButton *login;
    QPushButton *cancel;
    QLineEdit *addr;
    QLineEdit *port;
    QLineEdit *usernum;
    QLineEdit *password;
    QPushButton *test;
    QLabel *browser;
    QPushButton *type;
    QLabel *testing;
    QLabel *failconnect;
    QLabel *invalidInput;

    void setupUi(QWidget *network)
    {
        if (network->objectName().isEmpty())
            network->setObjectName(QStringLiteral("network"));
        network->resize(371, 585);
        widget = new QWidget(network);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 371, 585));
        widget->setStyleSheet(QStringLiteral("QWidget{background-color: rgb(255, 255, 255)}"));
        typeText = new QLabel(widget);
        typeText->setObjectName(QStringLiteral("typeText"));
        typeText->setGeometry(QRect(36, 20, 41, 31));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Pi Std"));
        font.setPointSize(12);
        typeText->setFont(font);
        addrType = new QLabel(widget);
        addrType->setObjectName(QStringLiteral("addrType"));
        addrType->setGeometry(QRect(36, 112, 41, 31));
        addrType->setFont(font);
        portType = new QLabel(widget);
        portType->setObjectName(QStringLiteral("portType"));
        portType->setGeometry(QRect(36, 207, 41, 31));
        portType->setFont(font);
        userType = new QLabel(widget);
        userType->setObjectName(QStringLiteral("userType"));
        userType->setGeometry(QRect(36, 300, 71, 31));
        userType->setFont(font);
        passType = new QLabel(widget);
        passType->setObjectName(QStringLiteral("passType"));
        passType->setGeometry(QRect(36, 395, 71, 31));
        passType->setFont(font);
        login = new QPushButton(widget);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(130, 500, 93, 51));
        login->setFont(font);
        login->setCursor(QCursor(Qt::PointingHandCursor));
        login->setStyleSheet(QStringLiteral("QPushButton {border: 1px solid rgba(0,0,0,0); background-color: rgb(81, 163, 245); color: rgb(255, 255, 255); border-radius:5px; padding:2px 4px;} QPushButton:hover { background-color: rgb(85, 170, 255); color: rgb(255, 255, 255); }"));
        cancel = new QPushButton(widget);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(240, 500, 93, 51));
        cancel->setFont(font);
        cancel->setCursor(QCursor(Qt::PointingHandCursor));
        cancel->setStyleSheet(QStringLiteral("QPushButton {border: 1px solid rgba(0,0,0,0); background-color: rgb(244, 244, 244); color: rgb(0, 0, 0); border-radius:5px; padding:2px 4px;}"));
        addr = new QLineEdit(widget);
        addr->setObjectName(QStringLiteral("addr"));
        addr->setGeometry(QRect(36, 145, 298, 45));
        addr->setFont(font);
        addr->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255); color: rgb(0, 0, 0); border:1px groove rgb(227, 227, 227);border-radius:5px; padding:2px 10px;"));
        port = new QLineEdit(widget);
        port->setObjectName(QStringLiteral("port"));
        port->setGeometry(QRect(36, 240, 298, 45));
        port->setFont(font);
        port->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255); color: rgb(0, 0, 0); border:1px groove rgb(227, 227, 227);border-radius:5px; padding:2px 10px;"));
        port->setMaxLength(5);
        QRegExp regx("[0-9]+$");
        QValidator* validator = new QRegExpValidator(regx, port);
        port->setValidator(validator);
        usernum = new QLineEdit(widget);
        usernum->setObjectName(QStringLiteral("usernum"));
        usernum->setGeometry(QRect(36, 332, 298, 45));
        usernum->setFont(font);
        usernum->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255); color: rgb(0, 0, 0); border:1px groove rgb(227, 227, 227);border-radius:5px; padding:2px 10px;"));
        password = new QLineEdit(widget);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(36, 430, 298, 45));
        password->setFont(font);
        password->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255); color: rgb(0, 0, 0); border:1px groove rgb(227, 227, 227);border-radius:5px; padding:2px 10px;"));
        password->setEchoMode(QLineEdit::Password);
        test = new QPushButton(widget);
        test->setObjectName(QStringLiteral("test"));
        test->setGeometry(QRect(36, 513, 51, 31));
        test->setFont(font);
        test->setCursor(QCursor(Qt::PointingHandCursor));
        test->setStyleSheet(QStringLiteral("QPushButton {border: 1px solid rgba(0,0,0,0); color: rgb(85, 85, 255)}"));
        test->setFlat(true);
        browser = new QLabel(widget);
        browser->setObjectName(QStringLiteral("browser"));
        browser->setGeometry(QRect(36, 20, 298, 45));
        browser->setPixmap(QPixmap(QString::fromUtf8(":/warningNetwork.PNG")));
        type = new QPushButton(widget);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(36, 50, 298, 45));
        type->setFont(font);
        type->setContextMenuPolicy(Qt::ActionsContextMenu);
        type->setStyleSheet(QStringLiteral("QPushButton {text-align:left; background-color: rgb(255, 255, 255); color: rgb(0, 0, 0); border:1px groove rgb(227, 227, 227); border-radius:5px; padding: 2px 10px;} QPushButton::menu-indicator {subcontrol-position: right center; subcontrol-origin: padding}"));
        testing = new QLabel(widget);
        testing->setObjectName(QStringLiteral("testing"));
        testing->setGeometry(QRect(36, 20, 298, 45));
        testing->setPixmap(QPixmap(QString::fromUtf8(":/testing.PNG")));
        failconnect = new QLabel(widget);
        failconnect->setObjectName(QStringLiteral("failconnect"));
        failconnect->setGeometry(QRect(36, 20, 298, 45));
        failconnect->setPixmap(QPixmap(QString::fromUtf8(":/failConnect.PNG")));
        invalidInput = new QLabel(widget);
        invalidInput->setObjectName(QStringLiteral("invalidInput"));
        invalidInput->setGeometry(QRect(36, 20, 298, 45));
        invalidInput->setPixmap(QPixmap(QString::fromUtf8(":/invalidInput.PNG")));
        typeText->raise();
        addrType->raise();
        portType->raise();
        userType->raise();
        passType->raise();
        login->raise();
        cancel->raise();
        addr->raise();
        port->raise();
        usernum->raise();
        password->raise();
        test->raise();
        type->raise();
        browser->raise();
        testing->raise();
        failconnect->raise();
        invalidInput->raise();

        retranslateUi(network);

        QMetaObject::connectSlotsByName(network);
    } // setupUi

    void retranslateUi(QWidget *network)
    {
        network->setWindowTitle(QApplication::translate("network", "Form", Q_NULLPTR));
        typeText->setText(QApplication::translate("network", "\347\261\273\345\236\213", Q_NULLPTR));
        addrType->setText(QApplication::translate("network", "\345\234\260\345\235\200", Q_NULLPTR));
        portType->setText(QApplication::translate("network", "\347\253\257\345\217\243", Q_NULLPTR));
        userType->setText(QApplication::translate("network", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        passType->setText(QApplication::translate("network", "\345\257\206\347\240\201", Q_NULLPTR));
        login->setText(QApplication::translate("network", "\347\241\256\345\256\232", Q_NULLPTR));
        cancel->setText(QApplication::translate("network", "\345\217\226\346\266\210", Q_NULLPTR));
        test->setText(QApplication::translate("network", "\346\265\213\350\257\225", Q_NULLPTR));
        browser->setText(QString());
        type->setText(QApplication::translate("network", "\344\270\215\344\275\277\347\224\250\344\273\243\347\220\206", Q_NULLPTR));
        testing->setText(QString());
        failconnect->setText(QString());
        invalidInput->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class network: public Ui_network {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORK_H
