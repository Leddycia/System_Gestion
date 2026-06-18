/********************************************************************************
** Form generated from reading UI file 'liste_emp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTE_EMP_H
#define UI_LISTE_EMP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_liste_emp
{
public:
    QTableWidget *tableWidgetEmployes;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *liste_emp)
    {
        if (liste_emp->objectName().isEmpty())
            liste_emp->setObjectName(QString::fromUtf8("liste_emp"));
        liste_emp->resize(995, 630);
        tableWidgetEmployes = new QTableWidget(liste_emp);
        tableWidgetEmployes->setObjectName(QString::fromUtf8("tableWidgetEmployes"));
        tableWidgetEmployes->setGeometry(QRect(100, 90, 641, 431));
        label = new QLabel(liste_emp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 10, 451, 81));
        label->setStyleSheet(QString::fromUtf8("font-size: 40px;\n"
"color: white;\n"
""));
        label_2 = new QLabel(liste_emp);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 1001, 631));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/io.jpg")));
        label_2->setScaledContents(true);
        label_2->raise();
        tableWidgetEmployes->raise();
        label->raise();

        retranslateUi(liste_emp);

        QMetaObject::connectSlotsByName(liste_emp);
    } // setupUi

    void retranslateUi(QWidget *liste_emp)
    {
        liste_emp->setWindowTitle(QApplication::translate("liste_emp", "Form", nullptr));
        label->setText(QApplication::translate("liste_emp", "<html><head/><body><p><span style=\" font-weight:600; text-decoration: underline;\">Liste des Employes</span></p></body></html>", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class liste_emp: public Ui_liste_emp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTE_EMP_H
