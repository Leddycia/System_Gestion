/********************************************************************************
** Form generated from reading UI file 'enlever_prod_info.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENLEVER_PROD_INFO_H
#define UI_ENLEVER_PROD_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_enlever_prod_info
{
public:
    QTableWidget *tableWidgetProduits;
    QSpinBox *spinQuantiteRetirer;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *enlever_prod_info)
    {
        if (enlever_prod_info->objectName().isEmpty())
            enlever_prod_info->setObjectName(QString::fromUtf8("enlever_prod_info"));
        enlever_prod_info->resize(1017, 609);
        tableWidgetProduits = new QTableWidget(enlever_prod_info);
        tableWidgetProduits->setObjectName(QString::fromUtf8("tableWidgetProduits"));
        tableWidgetProduits->setGeometry(QRect(200, 110, 431, 371));
        spinQuantiteRetirer = new QSpinBox(enlever_prod_info);
        spinQuantiteRetirer->setObjectName(QString::fromUtf8("spinQuantiteRetirer"));
        spinQuantiteRetirer->setGeometry(QRect(270, 490, 61, 41));
        spinQuantiteRetirer->setStyleSheet(QString::fromUtf8("font-size:20px;"));
        pushButton = new QPushButton(enlever_prod_info);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(470, 490, 101, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font-size: 20px;"));
        label = new QLabel(enlever_prod_info);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 40, 511, 51));
        label->setStyleSheet(QString::fromUtf8("font-size: 60px;\n"
"color: white;\n"
"text-decoration: underline;"));
        label_2 = new QLabel(enlever_prod_info);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 1021, 611));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/uiyo.jpg")));
        label_2->setScaledContents(true);
        label_2->raise();
        tableWidgetProduits->raise();
        spinQuantiteRetirer->raise();
        pushButton->raise();
        label->raise();

        retranslateUi(enlever_prod_info);

        QMetaObject::connectSlotsByName(enlever_prod_info);
    } // setupUi

    void retranslateUi(QWidget *enlever_prod_info)
    {
        enlever_prod_info->setWindowTitle(QApplication::translate("enlever_prod_info", "Form", nullptr));
        pushButton->setText(QApplication::translate("enlever_prod_info", "Retirer", nullptr));
        label->setText(QApplication::translate("enlever_prod_info", "Enlever Un Produit", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class enlever_prod_info: public Ui_enlever_prod_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENLEVER_PROD_INFO_H
