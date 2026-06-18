/********************************************************************************
** Form generated from reading UI file 'ventes.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTES_H
#define UI_VENTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ventes
{
public:

    void setupUi(QWidget *Ventes)
    {
        if (Ventes->objectName().isEmpty())
            Ventes->setObjectName(QString::fromUtf8("Ventes"));
        Ventes->resize(400, 300);

        retranslateUi(Ventes);

        QMetaObject::connectSlotsByName(Ventes);
    } // setupUi

    void retranslateUi(QWidget *Ventes)
    {
        Ventes->setWindowTitle(QApplication::translate("Ventes", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ventes: public Ui_Ventes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTES_H
