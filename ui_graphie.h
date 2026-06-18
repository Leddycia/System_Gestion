/********************************************************************************
** Form generated from reading UI file 'graphie.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHIE_H
#define UI_GRAPHIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_graphie
{
public:
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_4;
    QComboBox *comboRectoVerso;
    QPushButton *pushButton;
    QSpinBox *spinNombrePages;
    QSpinBox *spinCopies;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QComboBox *comboCouleur;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *labelPrixTotal;

    void setupUi(QWidget *graphie)
    {
        if (graphie->objectName().isEmpty())
            graphie->setObjectName(QString::fromUtf8("graphie"));
        graphie->resize(837, 525);
        label_5 = new QLabel(graphie);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(180, 380, 161, 31));
        label_5->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: white;"));
        label_2 = new QLabel(graphie);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 180, 251, 41));
        label_2->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: white;"));
        label_4 = new QLabel(graphie);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(180, 320, 171, 31));
        label_4->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: white;"));
        comboRectoVerso = new QComboBox(graphie);
        comboRectoVerso->addItem(QString());
        comboRectoVerso->addItem(QString());
        comboRectoVerso->setObjectName(QString::fromUtf8("comboRectoVerso"));
        comboRectoVerso->setGeometry(QRect(410, 310, 241, 41));
        comboRectoVerso->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: black;"));
        pushButton = new QPushButton(graphie);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 460, 131, 51));
        pushButton->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: black;"));
        spinNombrePages = new QSpinBox(graphie);
        spinNombrePages->setObjectName(QString::fromUtf8("spinNombrePages"));
        spinNombrePages->setGeometry(QRect(410, 140, 51, 31));
        spinNombrePages->setStyleSheet(QString::fromUtf8("font-size: 20px;"));
        spinCopies = new QSpinBox(graphie);
        spinCopies->setObjectName(QString::fromUtf8("spinCopies"));
        spinCopies->setGeometry(QRect(410, 190, 51, 31));
        spinCopies->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
""));
        pushButton_2 = new QPushButton(graphie);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(470, 460, 131, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: black;"));
        label_7 = new QLabel(graphie);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(170, 20, 471, 81));
        label_7->setStyleSheet(QString::fromUtf8("font-size: 50px;\n"
"color: white;\n"
"text-decoration: underline;"));
        comboCouleur = new QComboBox(graphie);
        comboCouleur->setObjectName(QString::fromUtf8("comboCouleur"));
        comboCouleur->setGeometry(QRect(410, 250, 241, 41));
        comboCouleur->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: black;"));
        label = new QLabel(graphie);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 140, 231, 31));
        label->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: white;"));
        label_6 = new QLabel(graphie);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(-10, -10, 1051, 621));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/images/fty.jpg")));
        label_6->setScaledContents(true);
        label_3 = new QLabel(graphie);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 250, 191, 41));
        label_3->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: white;"));
        labelPrixTotal = new QLabel(graphie);
        labelPrixTotal->setObjectName(QString::fromUtf8("labelPrixTotal"));
        labelPrixTotal->setGeometry(QRect(410, 370, 241, 51));
        labelPrixTotal->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: white;"));
        label_6->raise();
        spinCopies->raise();
        label_5->raise();
        label_2->raise();
        spinNombrePages->raise();
        label->raise();
        label_3->raise();
        pushButton_2->raise();
        label_7->raise();
        comboRectoVerso->raise();
        label_4->raise();
        comboCouleur->raise();
        pushButton->raise();
        labelPrixTotal->raise();

        retranslateUi(graphie);

        QMetaObject::connectSlotsByName(graphie);
    } // setupUi

    void retranslateUi(QWidget *graphie)
    {
        graphie->setWindowTitle(QApplication::translate("graphie", "Form", nullptr));
        label_5->setText(QApplication::translate("graphie", "Prix Total :", nullptr));
        label_2->setText(QApplication::translate("graphie", "Nombres d'impression :", nullptr));
        label_4->setText(QApplication::translate("graphie", "Recto/Verso :", nullptr));
        comboRectoVerso->setItemText(0, QApplication::translate("graphie", "recto", nullptr));
        comboRectoVerso->setItemText(1, QApplication::translate("graphie", "recto-verso", nullptr));

        pushButton->setText(QApplication::translate("graphie", "Enregistrer", nullptr));
        pushButton_2->setText(QApplication::translate("graphie", "Annuler", nullptr));
        label_7->setText(QApplication::translate("graphie", "Impression du jour", nullptr));
        label->setText(QApplication::translate("graphie", "Nombre de pages :", nullptr));
        label_6->setText(QString());
        label_3->setText(QApplication::translate("graphie", "Choix de couleur :", nullptr));
        labelPrixTotal->setText(QApplication::translate("graphie", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class graphie: public Ui_graphie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHIE_H
