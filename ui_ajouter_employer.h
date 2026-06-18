/********************************************************************************
** Form generated from reading UI file 'ajouter_employer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTER_EMPLOYER_H
#define UI_AJOUTER_EMPLOYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Ajouter_employer
{
public:
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPlainTextEdit *lineEdit_Nom;
    QPlainTextEdit *lineEdit_Prenom;
    QPlainTextEdit *lineEdit_Email;
    QPlainTextEdit *lineEdit_Nif;
    QLabel *label_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QPlainTextEdit *lineEdit_Poste;

    void setupUi(QDialog *Ajouter_employer)
    {
        if (Ajouter_employer->objectName().isEmpty())
            Ajouter_employer->setObjectName(QString::fromUtf8("Ajouter_employer"));
        Ajouter_employer->resize(881, 583);
        Ajouter_employer->setMouseTracking(false);
        Ajouter_employer->setAutoFillBackground(false);
        Ajouter_employer->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background-color: #0f9e99;\n"
"}\n"
""));
        label_1 = new QLabel(Ajouter_employer);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(130, 130, 81, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_1->setFont(font);
        label_1->setStyleSheet(QString::fromUtf8("color:white;"));
        label_2 = new QLabel(Ajouter_employer);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 190, 111, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:white;"));
        label_3 = new QLabel(Ajouter_employer);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 260, 201, 41));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color:white;"));
        label_4 = new QLabel(Ajouter_employer);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(130, 330, 101, 31));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color:white;"));
        label_5 = new QLabel(Ajouter_employer);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(130, 390, 101, 31));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color:white;"));
        lineEdit_Nom = new QPlainTextEdit(Ajouter_employer);
        lineEdit_Nom->setObjectName(QString::fromUtf8("lineEdit_Nom"));
        lineEdit_Nom->setGeometry(QRect(360, 120, 311, 41));
        lineEdit_Nom->setStyleSheet(QString::fromUtf8("background-color:ghostwhite;"));
        lineEdit_Prenom = new QPlainTextEdit(Ajouter_employer);
        lineEdit_Prenom->setObjectName(QString::fromUtf8("lineEdit_Prenom"));
        lineEdit_Prenom->setGeometry(QRect(360, 190, 311, 41));
        lineEdit_Prenom->setStyleSheet(QString::fromUtf8("background-color:ghostwhite;"));
        lineEdit_Email = new QPlainTextEdit(Ajouter_employer);
        lineEdit_Email->setObjectName(QString::fromUtf8("lineEdit_Email"));
        lineEdit_Email->setGeometry(QRect(360, 330, 311, 41));
        lineEdit_Email->setStyleSheet(QString::fromUtf8("background-color:ghostwhite;"));
        lineEdit_Nif = new QPlainTextEdit(Ajouter_employer);
        lineEdit_Nif->setObjectName(QString::fromUtf8("lineEdit_Nif"));
        lineEdit_Nif->setGeometry(QRect(360, 390, 311, 41));
        lineEdit_Nif->setStyleSheet(QString::fromUtf8("background-color:ghostwhite;"));
        label_6 = new QLabel(Ajouter_employer);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(200, 10, 501, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("padding: 2px;   \n"
"color:white;\n"
"font-size: 40px;         "));
        pushButton = new QPushButton(Ajouter_employer);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(200, 470, 151, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: lightgray;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"}\n"
""));
        pushButton_2 = new QPushButton(Ajouter_employer);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(530, 470, 151, 51));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: lightgray;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"}\n"
""));
        label = new QLabel(Ajouter_employer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 881, 591));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/u.jpg")));
        label->setScaledContents(true);
        lineEdit_Poste = new QPlainTextEdit(Ajouter_employer);
        lineEdit_Poste->setObjectName(QString::fromUtf8("lineEdit_Poste"));
        lineEdit_Poste->setGeometry(QRect(360, 260, 311, 41));
        lineEdit_Poste->setStyleSheet(QString::fromUtf8("background-color:ghostwhite;"));
        label->raise();
        label_1->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        lineEdit_Nom->raise();
        lineEdit_Prenom->raise();
        lineEdit_Email->raise();
        lineEdit_Nif->raise();
        label_6->raise();
        pushButton->raise();
        pushButton_2->raise();
        lineEdit_Poste->raise();

        retranslateUi(Ajouter_employer);

        QMetaObject::connectSlotsByName(Ajouter_employer);
    } // setupUi

    void retranslateUi(QDialog *Ajouter_employer)
    {
        Ajouter_employer->setWindowTitle(QApplication::translate("Ajouter_employer", "Dialog", nullptr));
        label_1->setText(QApplication::translate("Ajouter_employer", "Nom", nullptr));
        label_2->setText(QApplication::translate("Ajouter_employer", "Prenom (s)", nullptr));
        label_3->setText(QApplication::translate("Ajouter_employer", "Poste", nullptr));
        label_4->setText(QApplication::translate("Ajouter_employer", "E-mail", nullptr));
        label_5->setText(QApplication::translate("Ajouter_employer", "NIU", nullptr));
        label_6->setText(QApplication::translate("Ajouter_employer", "Enregistrer un Employe", nullptr));
        pushButton->setText(QApplication::translate("Ajouter_employer", "Enregistrer", nullptr));
        pushButton_2->setText(QApplication::translate("Ajouter_employer", "Annuler", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Ajouter_employer: public Ui_Ajouter_employer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTER_EMPLOYER_H
