/********************************************************************************
** Form generated from reading UI file 'chatbotwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATBOTWIDGET_H
#define UI_CHATBOTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chatbotwidget
{
public:

    void setupUi(QWidget *chatbotwidget)
    {
        if (chatbotwidget->objectName().isEmpty())
            chatbotwidget->setObjectName(QString::fromUtf8("chatbotwidget"));
        chatbotwidget->resize(400, 300);

        retranslateUi(chatbotwidget);

        QMetaObject::connectSlotsByName(chatbotwidget);
    } // setupUi

    void retranslateUi(QWidget *chatbotwidget)
    {
        chatbotwidget->setWindowTitle(QApplication::translate("chatbotwidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chatbotwidget: public Ui_chatbotwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATBOTWIDGET_H
