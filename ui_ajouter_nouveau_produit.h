/********************************************************************************
** Form generated from reading UI file 'ajouter_nouveau_produit.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTER_NOUVEAU_PRODUIT_H
#define UI_AJOUTER_NOUVEAU_PRODUIT_H

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
    QPlainTextEdit *lineNom;
    QLabel *label_3;
    QSpinBox *lineQuantite;
    QLabel *label_4;
    QPlainTextEdit *linePrix;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *ajouter_nouveau_produit)
    {
        if (ajouter_nouveau_produit->objectName().isEmpty())
            ajouter_nouveau_produit->setObjectName(QString::fromUtf8("ajouter_nouveau_produit"));
        ajouter_nouveau_produit->resize(891, 636);
        ajouter_nouveau_produit->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background-color: #0f9e99;\n"
"}\n"
""));
        label_6 = new QLabel(ajouter_nouveau_produit);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 10, 761, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("padding: 2px;   \n"
"color:white;\n"
"font-size: 40px;         "));
        label_2 = new QLabel(ajouter_nouveau_produit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 130, 171, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color:white;\n"
"fonnt-size: 15px;"));
        lineNom = new QPlainTextEdit(ajouter_nouveau_produit);
        lineNom->setObjectName(QString::fromUtf8("lineNom"));
        lineNom->setGeometry(QRect(390, 130, 291, 51));
        lineNom->setStyleSheet(QString::fromUtf8("size: 15 px;"));
        label_3 = new QLabel(ajouter_nouveau_produit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 230, 131, 61));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color:white;\n"
""));
        lineQuantite = new QSpinBox(ajouter_nouveau_produit);
        lineQuantite->setObjectName(QString::fromUtf8("lineQuantite"));
        lineQuantite->setGeometry(QRect(390, 220, 101, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        lineQuantite->setFont(font2);
        lineQuantite->setStyleSheet(QString::fromUtf8("background-color:ghostwhite;"));
        label_4 = new QLabel(ajouter_nouveau_produit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 320, 151, 61));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color:white;"));
        linePrix = new QPlainTextEdit(ajouter_nouveau_produit);
        linePrix->setObjectName(QString::fromUtf8("linePrix"));
        linePrix->setGeometry(QRect(390, 330, 111, 51));
        linePrix->setStyleSheet(QString::fromUtf8("size: 15px;"));
        pushButton_2 = new QPushButton(ajouter_nouveau_produit);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 460, 151, 51));
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
        pushButton->setGeometry(QRect(180, 460, 151, 51));
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
        label->setGeometry(QRect(-10, 0, 901, 651));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/R.jpg")));
        label->setScaledContents(true);
        label->raise();
        label_6->raise();
        label_2->raise();
        lineNom->raise();
        label_3->raise();
        lineQuantite->raise();
        label_4->raise();
        linePrix->raise();
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
        lineNom->setPlainText(QString());
        label_3->setText(QApplication::translate("ajouter_nouveau_produit", "Quantite (s)", nullptr));
        label_4->setText(QApplication::translate("ajouter_nouveau_produit", "Prix Unitaire", nullptr));
        linePrix->setPlainText(QString());
        pushButton_2->setText(QApplication::translate("ajouter_nouveau_produit", "Annuler", nullptr));
        pushButton->setText(QApplication::translate("ajouter_nouveau_produit", "Ajouter", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ajouter_nouveau_produit: public Ui_ajouter_nouveau_produit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTER_NOUVEAU_PRODUIT_H
