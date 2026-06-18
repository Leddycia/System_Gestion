/********************************************************************************
** Form generated from reading UI file 'ajouter_nouveau_produit_info.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTER_NOUVEAU_PRODUIT_INFO_H
#define UI_AJOUTER_NOUVEAU_PRODUIT_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ajouter_nouveau_produit
{
public:
    QLabel *label_6;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *ajouter_nouveau_produit)
    {
        if (ajouter_nouveau_produit->objectName().isEmpty())
            ajouter_nouveau_produit->setObjectName(QString::fromUtf8("ajouter_nouveau_produit"));
        ajouter_nouveau_produit->resize(664, 572);
        ajouter_nouveau_produit->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background-color: #0f9e99;\n"
"}\n"
""));
        label_6 = new QLabel(ajouter_nouveau_produit);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 30, 541, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("padding: 2px;   \n"
"color:white;\n"
"font-size: xx-large;         "));
        label_2 = new QLabel(ajouter_nouveau_produit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 160, 161, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color:white;"));
        plainTextEdit = new QPlainTextEdit(ajouter_nouveau_produit);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(320, 150, 291, 51));
        label_3 = new QLabel(ajouter_nouveau_produit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 250, 121, 61));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color:white;\n"
""));
        spinBox = new QSpinBox(ajouter_nouveau_produit);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(320, 260, 101, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        spinBox->setFont(font2);
        spinBox->setStyleSheet(QString::fromUtf8("background-color:ghostwhite;"));
        label_4 = new QLabel(ajouter_nouveau_produit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(130, 360, 151, 41));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color:white;"));
        plainTextEdit_2 = new QPlainTextEdit(ajouter_nouveau_produit);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(320, 350, 111, 51));
        pushButton_2 = new QPushButton(ajouter_nouveau_produit);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(450, 460, 151, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton_2->setFont(font3);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: lightgray;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"}\n"
""));
        pushButton = new QPushButton(ajouter_nouveau_produit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(130, 460, 151, 51));
        pushButton->setFont(font3);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: lightgray;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"}\n"
""));
        label = new QLabel(ajouter_nouveau_produit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 661, 541));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/camera.jpg")));
        label->setScaledContents(true);
        label->raise();
        label_6->raise();
        label_2->raise();
        plainTextEdit->raise();
        label_3->raise();
        spinBox->raise();
        label_4->raise();
        plainTextEdit_2->raise();
        pushButton_2->raise();
        pushButton->raise();

        retranslateUi(ajouter_nouveau_produit);

        QMetaObject::connectSlotsByName(ajouter_nouveau_produit);
    } // setupUi

    void retranslateUi(QDialog *ajouter_nouveau_produit)
    {
        ajouter_nouveau_produit->setWindowTitle(QApplication::translate("ajouter_nouveau_produit", "Dialog", nullptr));
        label_6->setText(QApplication::translate("ajouter_nouveau_produit", "Ajouter un nouveau produit au stock", nullptr));
        label_2->setText(QApplication::translate("ajouter_nouveau_produit", "Nom du Produit", nullptr));
        label_3->setText(QApplication::translate("ajouter_nouveau_produit", "Quantite (s)", nullptr));
        label_4->setText(QApplication::translate("ajouter_nouveau_produit", "Prix Unitaire", nullptr));
        pushButton_2->setText(QApplication::translate("ajouter_nouveau_produit", "Annuler", nullptr));
        pushButton->setText(QApplication::translate("ajouter_nouveau_produit", "Ajouter", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ajouter_nouveau_produit: public Ui_ajouter_nouveau_produit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTER_NOUVEAU_PRODUIT_INFO_H
