/********************************************************************************
** Form generated from reading UI file 'accueil.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCUEIL_H
#define UI_ACCUEIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Accueil
{
public:
    QLabel *label;

    void setupUi(QWidget *Accueil)
    {
        if (Accueil->objectName().isEmpty())
            Accueil->setObjectName(QString::fromUtf8("Accueil"));
        Accueil->resize(828, 591);
        label = new QLabel(Accueil);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-50, -80, 881, 671));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/Paulinog Multiservice.jpg")));
        label->setScaledContents(true);

        retranslateUi(Accueil);

        QMetaObject::connectSlotsByName(Accueil);
    } // setupUi

    void retranslateUi(QWidget *Accueil)
    {
        Accueil->setWindowTitle(QApplication::translate("Accueil", "Form", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Accueil: public Ui_Accueil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCUEIL_H
