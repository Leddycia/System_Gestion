/********************************************************************************
** Form generated from reading UI file 'liste_photoco.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTE_PHOTOCO_H
#define UI_LISTE_PHOTOCO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Liste_photoco
{
public:
    QTableWidget *tableWidgetPhotocopies;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *Liste_photoco)
    {
        if (Liste_photoco->objectName().isEmpty())
            Liste_photoco->setObjectName(QString::fromUtf8("Liste_photoco"));
        Liste_photoco->resize(1001, 630);
        tableWidgetPhotocopies = new QTableWidget(Liste_photoco);
        tableWidgetPhotocopies->setObjectName(QString::fromUtf8("tableWidgetPhotocopies"));
        tableWidgetPhotocopies->setGeometry(QRect(160, 90, 501, 381));
        label_2 = new QLabel(Liste_photoco);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 1001, 631));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/io.jpg")));
        label_2->setScaledContents(true);
        label = new QLabel(Liste_photoco);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 10, 401, 81));
        label->setStyleSheet(QString::fromUtf8("font-size: 40px;\n"
"color: white;\n"
"text-decoration: underline;\n"
""));
        label_2->raise();
        tableWidgetPhotocopies->raise();
        label->raise();

        retranslateUi(Liste_photoco);

        QMetaObject::connectSlotsByName(Liste_photoco);
    } // setupUi

    void retranslateUi(QWidget *Liste_photoco)
    {
        Liste_photoco->setWindowTitle(QApplication::translate("Liste_photoco", "Form", nullptr));
        label_2->setText(QString());
        label->setText(QApplication::translate("Liste_photoco", "<html><head/><body><p>Liste des Photocopies</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Liste_photoco: public Ui_Liste_photoco {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTE_PHOTOCO_H
