/********************************************************************************
** Form generated from reading UI file 'liste_impres.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTE_IMPRES_H
#define UI_LISTE_IMPRES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_liste_impres
{
public:
    QTableWidget *tableWidgetImpression;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *liste_impres)
    {
        if (liste_impres->objectName().isEmpty())
            liste_impres->setObjectName(QString::fromUtf8("liste_impres"));
        liste_impres->resize(1001, 629);
        tableWidgetImpression = new QTableWidget(liste_impres);
        tableWidgetImpression->setObjectName(QString::fromUtf8("tableWidgetImpression"));
        tableWidgetImpression->setGeometry(QRect(160, 90, 501, 381));
        label_2 = new QLabel(liste_impres);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 1001, 631));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/io.jpg")));
        label_2->setScaledContents(true);
        label = new QLabel(liste_impres);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 10, 381, 81));
        label->setStyleSheet(QString::fromUtf8("font-size: 40px;\n"
"color: white;\n"
"text-decoration: underline;\n"
""));
        label_2->raise();
        tableWidgetImpression->raise();
        label->raise();

        retranslateUi(liste_impres);

        QMetaObject::connectSlotsByName(liste_impres);
    } // setupUi

    void retranslateUi(QWidget *liste_impres)
    {
        liste_impres->setWindowTitle(QApplication::translate("liste_impres", "Form", nullptr));
        label_2->setText(QString());
        label->setText(QApplication::translate("liste_impres", "<html><head/><body><p>Liste des Impressions</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class liste_impres: public Ui_liste_impres {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTE_IMPRES_H
