/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(400, 300);
        pushButton = new QPushButton(login);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 230, 80, 25));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;}"));
        pushButton_2 = new QPushButton(login);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 230, 80, 25));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;}"));
        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 70, 71, 16));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 20px;\n"
"color: white;\n"
"}"));
        label_2 = new QLabel(login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 130, 81, 16));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 15px;\n"
"color: white;\n"
"}\n"
""));
        label_3 = new QLabel(login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 180, 81, 16));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 15px;\n"
"color: white;\n"
"}\n"
""));
        lineEdit = new QLineEdit(login);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 120, 171, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font-size:15px}"));
        lineEdit_2 = new QLineEdit(login);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 170, 171, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font-size:15px}"));
        label_4 = new QLabel(login);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(4, 5, 391, 291));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/log.jpg")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(login);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 120, 31, 31));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/icons/user.png")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(login);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 160, 41, 41));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/icons/password-strenght.png")));
        label_6->setScaledContents(true);
        label_7 = new QLabel(login);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(180, 10, 51, 51));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/icons/user (1).png")));
        label_7->setScaledContents(true);
        label_4->raise();
        pushButton->raise();
        pushButton_2->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Form", nullptr));
        pushButton->setText(QApplication::translate("login", "OK", nullptr));
        pushButton_2->setText(QApplication::translate("login", " EXIT", nullptr));
        label->setText(QApplication::translate("login", "LOGIN", nullptr));
        label_2->setText(QApplication::translate("login", "USERNAME", nullptr));
        label_3->setText(QApplication::translate("login", "PASSWORD", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
