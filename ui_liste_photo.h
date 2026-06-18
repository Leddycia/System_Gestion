/********************************************************************************
** Form generated from reading UI file 'liste_photo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTE_PHOTO_H
#define UI_LISTE_PHOTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_liste_photo
{
public:
    QTableWidget *tableWidgetEmployes;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *liste_photo)
    {
        if (liste_photo->objectName().isEmpty())
            liste_photo->setObjectName(QString::fromUtf8("liste_photo"));
        liste_photo->resize(1000, 610);
        tableWidgetEmployes = new QTableWidget(liste_photo);
        tableWidgetEmployes->setObjectName(QString::fromUtf8("tableWidgetEmployes"));
        tableWidgetEmployes->setGeometry(QRect(160, 80, 501, 381));
        label_2 = new QLabel(liste_photo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, -10, 1001, 631));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/io.jpg")));
        label_2->setScaledContents(true);
        label = new QLabel(liste_photo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 0, 641, 81));
        label->setStyleSheet(QString::fromUtf8("font-size: 40px;\n"
"color: white;\n"
""));
        label_2->raise();
        tableWidgetEmployes->raise();
        label->raise();

        retranslateUi(liste_photo);

        QMetaObject::connectSlotsByName(liste_photo);
    } // setupUi

    void retranslateUi(QWidget *liste_photo)
    {
        liste_photo->setWindowTitle(QApplication::translate("liste_photo", "Form", nullptr));
        label_2->setText(QString());
        label->setText(QApplication::translate("liste_photo", "<html><head/><body><p>Liste des Materiels Photographiques</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class liste_photo: public Ui_liste_photo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTE_PHOTO_H
