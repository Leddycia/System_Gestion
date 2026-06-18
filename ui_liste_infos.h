/********************************************************************************
** Form generated from reading UI file 'liste_infos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTE_INFOS_H
#define UI_LISTE_INFOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_liste_infos
{
public:
    QTableWidget *tableWidgetEmployes;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *liste_infos)
    {
        if (liste_infos->objectName().isEmpty())
            liste_infos->setObjectName(QString::fromUtf8("liste_infos"));
        liste_infos->resize(991, 577);
        tableWidgetEmployes = new QTableWidget(liste_infos);
        tableWidgetEmployes->setObjectName(QString::fromUtf8("tableWidgetEmployes"));
        tableWidgetEmployes->setGeometry(QRect(150, 80, 501, 381));
        label_2 = new QLabel(liste_infos);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-10, -10, 1001, 631));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/io.jpg")));
        label_2->setScaledContents(true);
        label = new QLabel(liste_infos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 0, 601, 81));
        label->setStyleSheet(QString::fromUtf8("font-size: 40px;\n"
"color: white;\n"
"text-decoration: underline;\n"
""));
        label_2->raise();
        label->raise();
        tableWidgetEmployes->raise();

        retranslateUi(liste_infos);

        QMetaObject::connectSlotsByName(liste_infos);
    } // setupUi

    void retranslateUi(QWidget *liste_infos)
    {
        liste_infos->setWindowTitle(QApplication::translate("liste_infos", "Form", nullptr));
        label_2->setText(QString());
        label->setText(QApplication::translate("liste_infos", "<html><head/><body><p>Liste des Materiels Informatiques</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class liste_infos: public Ui_liste_infos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTE_INFOS_H
