/********************************************************************************
** Form generated from reading UI file 'alilogincircling.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALILOGINCIRCLING_H
#define UI_ALILOGINCIRCLING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <refreshcircle1.h>

QT_BEGIN_NAMESPACE

class Ui_aliLogincircling
{
public:
    QLabel *label;
    RefreshCicle1 *circle;
    QWidget *widget;
    QLabel *logo;

    void setupUi(QWidget *aliLogincircling)
    {
        if (aliLogincircling->objectName().isEmpty())
            aliLogincircling->setObjectName(QStringLiteral("aliLogincircling"));
        aliLogincircling->resize(367, 501);
        label = new QLabel(aliLogincircling);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(109, 280, 151, 41));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Pi Std"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        circle = new RefreshCicle1(aliLogincircling);
        circle->setObjectName(QStringLiteral("circle"));
        circle->setGeometry(QRect(100, 83, 166, 166));
        circle->setStyleSheet(QStringLiteral("QWidget{background-color: transparent;}"));
        widget = new QWidget(aliLogincircling);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 367, 501));
        widget->setStyleSheet(QStringLiteral("QWidget{background-color: rgb(255, 255, 255)}"));
        logo = new QLabel(aliLogincircling);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(117, 100, 131, 131));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/Alilogo.PNG")));
        logo->setAlignment(Qt::AlignCenter);
        widget->raise();
        label->raise();
        logo->raise();
        circle->raise();

        retranslateUi(aliLogincircling);

        QMetaObject::connectSlotsByName(aliLogincircling);
    } // setupUi

    void retranslateUi(QWidget *aliLogincircling)
    {
        aliLogincircling->setWindowTitle(QApplication::translate("aliLogincircling", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("aliLogincircling", "\346\255\243\345\234\250\346\216\210\346\235\203...", Q_NULLPTR));
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class aliLogincircling: public Ui_aliLogincircling {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALILOGINCIRCLING_H
