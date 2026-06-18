/********************************************************************************
** Form generated from reading UI file 'enlever_prod_photo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENLEVER_PROD_PHOTO_H
#define UI_ENLEVER_PROD_PHOTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_enlever_prod_photo
{
public:
    QPushButton *pushButton;
    QSpinBox *spinQuantiteRetirer;
    QLabel *label;
    QLabel *label_2;
    QTableWidget *tableWidgetProduits;

    void setupUi(QWidget *enlever_prod_photo)
    {
        if (enlever_prod_photo->objectName().isEmpty())
            enlever_prod_photo->setObjectName(QString::fromUtf8("enlever_prod_photo"));
        enlever_prod_photo->resize(1021, 608);
        pushButton = new QPushButton(enlever_prod_photo);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(470, 490, 101, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font-size: 20px;"));
        spinQuantiteRetirer = new QSpinBox(enlever_prod_photo);
        spinQuantiteRetirer->setObjectName(QString::fromUtf8("spinQuantiteRetirer"));
        spinQuantiteRetirer->setGeometry(QRect(270, 490, 61, 41));
        spinQuantiteRetirer->setStyleSheet(QString::fromUtf8("font-size:20px;"));
        label = new QLabel(enlever_prod_photo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 40, 511, 51));
        label->setStyleSheet(QString::fromUtf8("font-size: 60px;\n"
"color: white;\n"
"text-decoration: underline;"));
        label_2 = new QLabel(enlever_prod_photo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 1021, 611));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/uiyo.jpg")));
        label_2->setScaledContents(true);
        tableWidgetProduits = new QTableWidget(enlever_prod_photo);
        tableWidgetProduits->setObjectName(QString::fromUtf8("tableWidgetProduits"));
        tableWidgetProduits->setGeometry(QRect(200, 110, 431, 371));
        label_2->raise();
        pushButton->raise();
        spinQuantiteRetirer->raise();
        label->raise();
        tableWidgetProduits->raise();

        retranslateUi(enlever_prod_photo);

        QMetaObject::connectSlotsByName(enlever_prod_photo);
    } // setupUi

    void retranslateUi(QWidget *enlever_prod_photo)
    {
        enlever_prod_photo->setWindowTitle(QApplication::translate("enlever_prod_photo", "Form", nullptr));
        pushButton->setText(QApplication::translate("enlever_prod_photo", "Retirer", nullptr));
        label->setText(QApplication::translate("enlever_prod_photo", "Enlever Un Produit", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class enlever_prod_photo: public Ui_enlever_prod_photo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENLEVER_PROD_PHOTO_H
