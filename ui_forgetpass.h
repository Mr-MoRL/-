/********************************************************************************
** Form generated from reading UI file 'forgetpass.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGETPASS_H
#define UI_FORGETPASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <QValidator>

QT_BEGIN_NAMESPACE

class Ui_forgetpass
{
public:
    QWidget *ForgetPass;
    QLabel *label;
    QLineEdit *ddnum;
    QFrame *line_3;
    QFrame *line_1;
    QFrame *line_2;
    QLineEdit *ddpass;
    QPushButton *sendVeriCode;
    QPushButton *login;
    QPushButton *areanum_2;
    QLabel *warning;
    QLabel *warning_1;

    void setupUi(QWidget *forgetpass)
    {
        if (forgetpass->objectName().isEmpty())
            forgetpass->setObjectName(QStringLiteral("forgetpass"));
        forgetpass->resize(371, 500);
        ForgetPass = new QWidget(forgetpass);
        ForgetPass->setObjectName(QStringLiteral("ForgetPass"));
        ForgetPass->setGeometry(QRect(0, 0, 371, 501));
        ForgetPass->setStyleSheet(QStringLiteral("QWidget{background-color: rgb(255, 255, 255)}"));
        label = new QLabel(ForgetPass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(36, 90, 121, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font.setPointSize(16);
        label->setFont(font);
        ddnum = new QLineEdit(ForgetPass);
        ddnum->setObjectName(QStringLiteral("ddnum"));
        ddnum->setGeometry(QRect(134, 172, 205, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(13);
        ddnum->setFont(font1);
        ddnum->setStyleSheet(QStringLiteral("QLineEdit{border-with: 0; border-style: outset}"));
        ddnum->setDragEnabled(false);
        //ddnum->setMaxLength(5);
        QRegExp regx("[0-9]+$");
        QValidator* validator = new QRegExpValidator(regx, ddnum);
        ddnum->setValidator(validator);
        line_3 = new QFrame(ForgetPass);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(116, 182, 20, 23));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_1 = new QFrame(ForgetPass);
        line_1->setObjectName(QStringLiteral("line_1"));
        line_1->setGeometry(QRect(36, 257, 305, 20));
        line_1->setStyleSheet(QStringLiteral("color: rgb(250, 250, 250)"));
        line_1->setFrameShape(QFrame::HLine);
        line_1->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(ForgetPass);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(36, 212, 305, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        ddpass = new QLineEdit(ForgetPass);
        ddpass->setObjectName(QStringLiteral("ddpass"));
        ddpass->setGeometry(QRect(36, 222, 305, 41));
        ddpass->setFont(font1);
        ddpass->setStyleSheet(QStringLiteral("QLineEdit{border-with: 0; border-style: outset}"));
        ddpass->setEchoMode(QLineEdit::Normal);
        ddpass->setMaxLength(4);
        QValidator* validator1 = new QRegExpValidator(regx, ddpass);
        ddpass->setValidator(validator1);
        sendVeriCode = new QPushButton(ForgetPass);
        sendVeriCode->setObjectName(QStringLiteral("sendVeriCode"));
        sendVeriCode->setGeometry(QRect(240, 230, 93, 28));
        sendVeriCode->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(245, 245, 245); color: rgb(159, 159, 159); border:1px groove rgb(227, 227, 227);border-radius:5px; padding:2px 4px;}"));
        sendVeriCode->setFlat(false);
        login = new QPushButton(ForgetPass);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(36, 310, 305, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Adobe Myungjo Std M"));
        font2.setPointSize(12);
        login->setFont(font2);
        login->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(245, 245, 245); color: rgb(159, 159, 159); border:1px groove rgb(227, 227, 227);border-radius:5px; padding:2px 4px;}"));
        areanum_2 = new QPushButton(ForgetPass);
        areanum_2->setObjectName(QStringLiteral("areanum_2"));
        areanum_2->setGeometry(QRect(36, 172, 81, 41));
        areanum_2->setFont(font1);
        areanum_2->setCursor(QCursor(Qt::PointingHandCursor));
        areanum_2->setContextMenuPolicy(Qt::ActionsContextMenu);
        areanum_2->setStyleSheet(QStringLiteral("QPushButton {text-align:left; border: 1px solid rgba(0,0,0,0); } QPushButton::menu-indicator {subcontrol-position: right center; subcontrol-origin: padding}"));
        areanum_2->setFlat(true);
        warning = new QLabel(ForgetPass);
        warning->setObjectName(QStringLiteral("warning"));
        warning->setGeometry(QRect(36, 33, 298, 45));
        warning->setPixmap(QPixmap(QString::fromUtf8(":/invalidePhone.PNG")));
        warning_1 = new QLabel(ForgetPass);
        warning_1->setObjectName(QStringLiteral("warning_1"));
        warning_1->setGeometry(QRect(36, 33, 298, 45));
        warning_1->setPixmap(QPixmap(QString::fromUtf8(":/wrongVerifycode.PNG")));
        label->raise();
        ddnum->raise();
        line_1->raise();
        line_2->raise();
        ddpass->raise();
        sendVeriCode->raise();
        login->raise();
        areanum_2->raise();
        line_3->raise();
        warning->raise();
        warning_1->raise();

        retranslateUi(forgetpass);

        QMetaObject::connectSlotsByName(forgetpass);
    } // setupUi

    void retranslateUi(QWidget *forgetpass)
    {
        forgetpass->setWindowTitle(QApplication::translate("forgetpass", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("forgetpass", "\345\277\230\350\256\260\345\257\206\347\240\201", Q_NULLPTR));
        ddnum->setText(QString());
        ddnum->setPlaceholderText(QApplication::translate("forgetpass", "\350\257\267\350\276\223\345\205\245\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        ddpass->setPlaceholderText(QApplication::translate("forgetpass", "\350\257\267\350\276\223\345\205\245\351\252\214\350\257\201\347\240\201", Q_NULLPTR));
        sendVeriCode->setText(QApplication::translate("forgetpass", "\345\217\221\351\200\201\351\252\214\350\257\201\347\240\201", Q_NULLPTR));
        login->setText(QApplication::translate("forgetpass", "\347\241\256\345\256\232", Q_NULLPTR));
        areanum_2->setText(QApplication::translate("forgetpass", "+86        ", Q_NULLPTR));
        warning->setText(QString());
        warning_1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Forgetpass: public Ui_forgetpass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGETPASS_H
