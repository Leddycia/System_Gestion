/********************************************************************************
** Form generated from reading UI file 'ajouter_article_en_stock.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTER_ARTICLE_EN_STOCK_H
#define UI_AJOUTER_ARTICLE_EN_STOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ajouter_article_en_stock
{
public:
    QPlainTextEdit *lineNom;
    QPlainTextEdit *linePrix;
    QLabel *label_6;
    QSpinBox *lineQuantite;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;

    void setupUi(QDialog *ajouter_article_en_stock)
    {
        if (ajouter_article_en_stock->objectName().isEmpty())
            ajouter_article_en_stock->setObjectName(QString::fromUtf8("ajouter_article_en_stock"));
        ajouter_article_en_stock->resize(899, 625);
        ajouter_article_en_stock->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background-color: #0f9e99;\n"
"}\n"
""));
        lineNom = new QPlainTextEdit(ajouter_article_en_stock);
        lineNom->setObjectName(QString::fromUtf8("lineNom"));
        lineNom->setGeometry(QRect(370, 120, 291, 51));
        lineNom->setStyleSheet(QString::fromUtf8("size: 15 px;"));
        linePrix = new QPlainTextEdit(ajouter_article_en_stock);
        linePrix->setObjectName(QString::fromUtf8("linePrix"));
        linePrix->setGeometry(QRect(370, 310, 111, 51));
        linePrix->setStyleSheet(QString::fromUtf8("size: 15px;"));
        label_6 = new QLabel(ajouter_article_en_stock);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 0, 761, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("padding: 2px;   \n"
"color:white;\n"
"font-size: 40px;         "));
        lineQuantite = new QSpinBox(ajouter_article_en_stock);
        lineQuantite->setObjectName(QString::fromUtf8("lineQuantite"));
        lineQuantite->setGeometry(QRect(370, 210, 101, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        lineQuantite->setFont(font1);
        lineQuantite->setStyleSheet(QString::fromUtf8("background-color:ghostwhite;"));
        label_2 = new QLabel(ajouter_article_en_stock);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 120, 171, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color:white;\n"
"fonnt-size: 15px;"));
        pushButton = new QPushButton(ajouter_article_en_stock);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(180, 450, 151, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton->setFont(font3);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: lightgray;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"}\n"
""));
        pushButton_2 = new QPushButton(ajouter_article_en_stock);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 450, 151, 51));
        pushButton_2->setFont(font3);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: lightgray;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"}\n"
""));
        label = new QLabel(ajouter_article_en_stock);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, -20, 901, 651));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/gh.jpg")));
        label->setScaledContents(true);
        label_4 = new QLabel(ajouter_article_en_stock);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 310, 151, 61));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color:white;"));
        label_3 = new QLabel(ajouter_article_en_stock);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 220, 131, 61));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color:white;\n"
""));
        label->raise();
        lineNom->raise();
        linePrix->raise();
        label_6->raise();
        lineQuantite->raise();
        label_2->raise();
        pushButton->raise();
        pushButton_2->raise();
        label_4->raise();
        label_3->raise();

        retranslateUi(ajouter_article_en_stock);

        QMetaObject::connectSlotsByName(ajouter_article_en_stock);
    } // setupUi

    void retranslateUi(QDialog *ajouter_article_en_stock)
    {
        ajouter_article_en_stock->setWindowTitle(QApplication::translate("ajouter_article_en_stock", "Dialog", nullptr));
        lineNom->setPlainText(QString());
        linePrix->setPlainText(QString());
        label_6->setText(QApplication::translate("ajouter_article_en_stock", "Ajouter un nouveau produit au stock", nullptr));
        label_2->setText(QApplication::translate("ajouter_article_en_stock", "Nom du Produit", nullptr));
        pushButton->setText(QApplication::translate("ajouter_article_en_stock", "Ajouter", nullptr));
        pushButton_2->setText(QApplication::translate("ajouter_article_en_stock", "Annuler", nullptr));
        label->setText(QString());
        label_4->setText(QApplication::translate("ajouter_article_en_stock", "Prix Unitaire", nullptr));
        label_3->setText(QApplication::translate("ajouter_article_en_stock", "Quantite (s)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ajouter_article_en_stock: public Ui_ajouter_article_en_stock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTER_ARTICLE_EN_STOCK_H
