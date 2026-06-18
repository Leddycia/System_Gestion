/********************************************************************************
** Form generated from reading UI file 'liste.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTE_H
#define UI_LISTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Liste
{
public:
    QLabel *label;
    QTableWidget *tableWidgetEmployes;

    void setupUi(QDialog *Liste)
    {
        if (Liste->objectName().isEmpty())
            Liste->setObjectName(QString::fromUtf8("Liste"));
        Liste->resize(955, 588);
        Liste->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"color: rgb(0, 0, 0);"));
        label = new QLabel(Liste);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 20, 411, 81));
        label->setStyleSheet(QString::fromUtf8("font-size: 40px;\n"
""));
        tableWidgetEmployes = new QTableWidget(Liste);
        tableWidgetEmployes->setObjectName(QString::fromUtf8("tableWidgetEmployes"));
        tableWidgetEmployes->setGeometry(QRect(110, 100, 641, 431));

        retranslateUi(Liste);

        QMetaObject::connectSlotsByName(Liste);
    } // setupUi

    void retranslateUi(QDialog *Liste)
    {
        Liste->setWindowTitle(QApplication::translate("Liste", "Dialog", nullptr));
        label->setText(QApplication::translate("Liste", "<html><head/><body><p><span style=\" font-weight:600; text-decoration: underline;\">Liste des Employes</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Liste: public Ui_Liste {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTE_H
