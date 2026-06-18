/********************************************************************************
** Form generated from reading UI file 'chatbubble.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATBUBBLE_H
#define UI_CHATBUBBLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chatbubble
{
public:

    void setupUi(QWidget *chatbubble)
    {
        if (chatbubble->objectName().isEmpty())
            chatbubble->setObjectName(QString::fromUtf8("chatbubble"));
        chatbubble->resize(400, 300);

        retranslateUi(chatbubble);

        QMetaObject::connectSlotsByName(chatbubble);
    } // setupUi

    void retranslateUi(QWidget *chatbubble)
    {
        chatbubble->setWindowTitle(QApplication::translate("chatbubble", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chatbubble: public Ui_chatbubble {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATBUBBLE_H
