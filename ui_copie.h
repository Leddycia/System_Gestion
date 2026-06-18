/********************************************************************************
** Form generated from reading UI file 'copie.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COPIE_H
#define UI_COPIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_copie
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QSpinBox *spinNombrePages;
    QSpinBox *spinCopies;
    QComboBox *comboCouleur;
    QComboBox *comboRectoVerso;
    QLabel *label_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QLabel *labelPrixTotal;

    void setupUi(QWidget *copie)
    {
        if (copie->objectName().isEmpty())
            copie->setObjectName(QString::fromUtf8("copie"));
        copie->resize(1029, 611);
        label = new QLabel(copie);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 150, 231, 31));
        label->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: white;"));
        label_2 = new QLabel(copie);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 190, 251, 41));
        label_2->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: white;"));
        label_3 = new QLabel(copie);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 260, 191, 41));
        label_3->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: white;"));
        label_4 = new QLabel(copie);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 330, 171, 31));
        label_4->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: white;"));
        label_5 = new QLabel(copie);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(190, 390, 161, 31));
        label_5->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: white;"));
        spinNombrePages = new QSpinBox(copie);
        spinNombrePages->setObjectName(QString::fromUtf8("spinNombrePages"));
        spinNombrePages->setGeometry(QRect(400, 150, 51, 31));
        spinNombrePages->setStyleSheet(QString::fromUtf8("font-size: 20px;"));
        spinCopies = new QSpinBox(copie);
        spinCopies->setObjectName(QString::fromUtf8("spinCopies"));
        spinCopies->setGeometry(QRect(400, 200, 51, 31));
        spinCopies->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
""));
        comboCouleur = new QComboBox(copie);
        comboCouleur->setObjectName(QString::fromUtf8("comboCouleur"));
        comboCouleur->setGeometry(QRect(400, 260, 241, 41));
        comboCouleur->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: black;"));
        comboRectoVerso = new QComboBox(copie);
        comboRectoVerso->addItem(QString());
        comboRectoVerso->addItem(QString());
        comboRectoVerso->setObjectName(QString::fromUtf8("comboRectoVerso"));
        comboRectoVerso->setGeometry(QRect(400, 330, 241, 41));
        comboRectoVerso->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: black;"));
        label_6 = new QLabel(copie);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 0, 1051, 621));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/images/fty.jpg")));
        label_6->setScaledContents(true);
        pushButton = new QPushButton(copie);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 470, 131, 51));
        pushButton->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: black;"));
        pushButton_2 = new QPushButton(copie);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(480, 470, 131, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: black;"));
        label_7 = new QLabel(copie);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(160, 30, 471, 81));
        label_7->setStyleSheet(QString::fromUtf8("font-size: 50px;\n"
"color: white;\n"
"text-decoration: underline;"));
        labelPrixTotal = new QLabel(copie);
        labelPrixTotal->setObjectName(QString::fromUtf8("labelPrixTotal"));
        labelPrixTotal->setGeometry(QRect(400, 390, 241, 51));
        labelPrixTotal->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: white;"));
        label_6->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        spinNombrePages->raise();
        spinCopies->raise();
        comboCouleur->raise();
        comboRectoVerso->raise();
        pushButton->raise();
        pushButton_2->raise();
        label_7->raise();
        labelPrixTotal->raise();

        retranslateUi(copie);

        QMetaObject::connectSlotsByName(copie);
    } // setupUi

    void retranslateUi(QWidget *copie)
    {
        copie->setWindowTitle(QApplication::translate("copie", "Form", nullptr));
        label->setText(QApplication::translate("copie", "Nombre de pages :", nullptr));
        label_2->setText(QApplication::translate("copie", "Nombres de copie :", nullptr));
        label_3->setText(QApplication::translate("copie", "Choix de couleur :", nullptr));
        label_4->setText(QApplication::translate("copie", "Recto/Verso :", nullptr));
        label_5->setText(QApplication::translate("copie", "Prix Total :", nullptr));
        comboRectoVerso->setItemText(0, QApplication::translate("copie", "recto", nullptr));
        comboRectoVerso->setItemText(1, QApplication::translate("copie", "recto-verso", nullptr));

        label_6->setText(QString());
        pushButton->setText(QApplication::translate("copie", "Enregistrer", nullptr));
        pushButton_2->setText(QApplication::translate("copie", "Annuler", nullptr));
        label_7->setText(QApplication::translate("copie", "Photocopies du jour", nullptr));
        labelPrixTotal->setText(QApplication::translate("copie", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class copie: public Ui_copie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COPIE_H
