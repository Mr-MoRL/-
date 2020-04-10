/********************************************************************************
** Form generated from reading UI file 'newuser.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWUSER_H
#define UI_NEWUSER_H

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

class Ui_newuser
{
public:
    QWidget *NewUser;
    QLineEdit *ddpass;
    QPushButton *login;
    QFrame *line_1;
    QFrame *line_2;
    QFrame *line_3;
    QPushButton *sendVeriCode;
    QLabel *label_1;
    QLineEdit *ddnum;
    QLabel *label_2;
    QPushButton *areanum_2;
    QLabel *warning;
    QLabel *warning_2;

    void setupUi(QWidget *newuser)
    {
        if (newuser->objectName().isEmpty())
            newuser->setObjectName(QStringLiteral("newuser"));
        newuser->resize(371, 501);
        NewUser = new QWidget(newuser);
        NewUser->setObjectName(QStringLiteral("NewUser"));
        NewUser->setGeometry(QRect(0, 0, 371, 501));
        NewUser->setStyleSheet(QStringLiteral("QWidget{background-color: rgb(255, 255, 255)}"));
        ddpass = new QLineEdit(NewUser);
        ddpass->setObjectName(QStringLiteral("ddpass"));
        ddpass->setGeometry(QRect(32, 230, 305, 41));
        ddpass->setMaxLength(4);
        QRegExp regx("[0-9]+$");
        QValidator* validator = new QRegExpValidator(regx, ddpass);
        ddpass->setValidator(validator);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(13);
        ddpass->setFont(font);
        ddpass->setStyleSheet(QStringLiteral("QLineEdit{border-with: 0; border-style: outset}"));
        ddpass->setEchoMode(QLineEdit::Normal);
        login = new QPushButton(NewUser);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(32, 318, 305, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Myungjo Std M"));
        font1.setPointSize(12);
        login->setFont(font1);
        login->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(245, 245, 245); color: rgb(159, 159, 159); border:1px groove rgb(227, 227, 227);border-radius:5px; padding:2px 4px;}"));
        line_1 = new QFrame(NewUser);
        line_1->setObjectName(QStringLiteral("line_1"));
        line_1->setGeometry(QRect(32, 220, 305, 16));
        line_1->setFrameShape(QFrame::HLine);
        line_1->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(NewUser);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(112, 190, 20, 23));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(NewUser);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(32, 265, 305, 20));
        line_3->setStyleSheet(QStringLiteral("color: rgb(250, 250, 250)"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        sendVeriCode = new QPushButton(NewUser);
        sendVeriCode->setObjectName(QStringLiteral("sendVeriCode"));
        sendVeriCode->setGeometry(QRect(236, 238, 93, 28));
        sendVeriCode->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(245, 245, 245); color: rgb(159, 159, 159); border:1px groove rgb(227, 227, 227);border-radius:5px; padding:2px 4px;}"));
        sendVeriCode->setFlat(false);
        label_1 = new QLabel(NewUser);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(32, 70, 301, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font2.setPointSize(16);
        label_1->setFont(font2);
        label_1->setAlignment(Qt::AlignCenter);
        ddnum = new QLineEdit(NewUser);
        ddnum->setObjectName(QStringLiteral("ddnum"));
        ddnum->setGeometry(QRect(130, 180, 205, 41));
        ddnum->setFont(font);
        ddnum->setStyleSheet(QStringLiteral("QLineEdit{border-with: 0; border-style: outset}"));
        ddnum->setDragEnabled(false);
        QValidator* validator1 = new QRegExpValidator(regx, ddnum);
        ddnum->setValidator(validator);
        label_2 = new QLabel(NewUser);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(32, 100, 301, 31));
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);
        areanum_2 = new QPushButton(NewUser);
        areanum_2->setObjectName(QStringLiteral("areanum_2"));
        areanum_2->setGeometry(QRect(32, 180, 81, 41));
        areanum_2->setFont(font);
        areanum_2->setCursor(QCursor(Qt::PointingHandCursor));
        areanum_2->setContextMenuPolicy(Qt::ActionsContextMenu);
        areanum_2->setStyleSheet(QStringLiteral("QPushButton {text-align:left; border: 1px solid rgba(0,0,0,0); } QPushButton::menu-indicator {subcontrol-position: right center; subcontrol-origin: padding}"));
        areanum_2->setFlat(true);
        warning = new QLabel(NewUser);
        warning->setObjectName(QStringLiteral("warning"));
        warning->setGeometry(QRect(36, 24, 298, 45));
        warning->setPixmap(QPixmap(QString::fromUtf8(":/invalidePhone.PNG")));
        warning_2 = new QLabel(NewUser);
        warning_2->setObjectName(QStringLiteral("warning_2"));
        warning_2->setGeometry(QRect(36, 24, 298, 45));
        warning_2->setPixmap(QPixmap(QString::fromUtf8(":/wrongVerifycode.PNG")));
        ddpass->raise();
        login->raise();
        line_1->raise();
        line_3->raise();
        sendVeriCode->raise();
        label_1->raise();
        ddnum->raise();
        label_2->raise();
        areanum_2->raise();
        line_2->raise();
        warning->raise();
        warning_2->raise();

        retranslateUi(newuser);

        QMetaObject::connectSlotsByName(newuser);
    } // setupUi

    void retranslateUi(QWidget *newuser)
    {
        newuser->setWindowTitle(QApplication::translate("newuser", "Form", Q_NULLPTR));
        ddpass->setPlaceholderText(QApplication::translate("newuser", "\350\257\267\350\276\223\345\205\245\351\252\214\350\257\201\347\240\201", Q_NULLPTR));
        login->setText(QApplication::translate("newuser", "\346\263\250\345\206\214", Q_NULLPTR));
        sendVeriCode->setText(QApplication::translate("newuser", "\345\217\221\351\200\201\351\252\214\350\257\201\347\240\201", Q_NULLPTR));
        label_1->setText(QApplication::translate("newuser", "\346\254\242\350\277\216\344\275\277\347\224\250\351\222\211\351\222\211", Q_NULLPTR));
        ddnum->setText(QString());
        ddnum->setPlaceholderText(QApplication::translate("newuser", "\350\257\267\350\276\223\345\205\245\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("newuser", "\345\217\252\351\234\200\344\270\244\346\255\245\345\256\214\346\210\220\346\263\250\345\206\214", Q_NULLPTR));
        areanum_2->setText(QApplication::translate("newuser", "+86        ", Q_NULLPTR));
        warning->setText(QString());
        warning_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Newuser: public Ui_newuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWUSER_H
