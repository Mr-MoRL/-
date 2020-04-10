/********************************************************************************
** Form generated from reading UI file 'logincircling.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINCIRCLEING_H
#define UI_LOGINCIRCLEING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <QPalette>
#include <refreshcircle1.h>

QT_BEGIN_NAMESPACE

class Ui_logincircling
{
public:
    QLabel *logo;
    RefreshCicle1 *circle;
    QLabel *label;
    QWidget *widget;

    void setupUi(QWidget *logincircling)
    {
        if (logincircling->objectName().isEmpty())
            logincircling->setObjectName(QStringLiteral("logincircling"));
        logincircling->resize(367, 501);
        logincircling->setStyleSheet(QStringLiteral("QWidget{background-color: rgb(255, 255, 255)}"));
        logo = new QLabel(logincircling);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(117, 100, 131, 131));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/ddlogo.PNG")));
        logo->setAlignment(Qt::AlignCenter);
        logo->setAutoMask(true);
        circle = new RefreshCicle1(logincircling);
        circle->setObjectName(QStringLiteral("circle"));
        circle->setGeometry(QRect(100, 83, 166, 166));
        circle->setStyleSheet("QWidget{background-color: transparent;}");
        label = new QLabel(logincircling);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(109, 280, 151, 41));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Pi Std"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        widget = new QWidget(logincircling);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 367, 501));
        widget->raise();
        circle->raise();
        label->raise();
        logo->raise();

        retranslateUi(logincircling);

        QMetaObject::connectSlotsByName(logincircling);
    } // setupUi

    void retranslateUi(QWidget *logincircling)
    {
        logincircling->setWindowTitle(QApplication::translate("logincircling", "Form", Q_NULLPTR));
        logo->setText(QString());
        label->setText(QApplication::translate("logincircling", "\346\255\243\345\234\250\347\231\273\351\231\206...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class logincircling: public Ui_logincircling {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINCIRCLEING_H
