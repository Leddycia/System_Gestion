/********************************************************************************
** Form generated from reading UI file 'manuel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUEL_H
#define UI_MANUEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Manuel
{
public:
    QLabel *label;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Manuel)
    {
        if (Manuel->objectName().isEmpty())
            Manuel->setObjectName(QString::fromUtf8("Manuel"));
        Manuel->resize(1208, 706);
        label = new QLabel(Manuel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1231, 711));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/log.jpg")));
        label->setScaledContents(true);
        plainTextEdit = new QPlainTextEdit(Manuel);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(50, 60, 701, 411));
        plainTextEdit->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: white;"));

        retranslateUi(Manuel);

        QMetaObject::connectSlotsByName(Manuel);
    } // setupUi

    void retranslateUi(QWidget *Manuel)
    {
        Manuel->setWindowTitle(QApplication::translate("Manuel", "Form", nullptr));
        label->setText(QString());
        plainTextEdit->setPlainText(QApplication::translate("Manuel", "Page d\342\200\231aide \342\200\223 Paulinog Multiservice\n"
"\n"
"Bienvenue dans le syst\303\250me de gestion Paulinog Multiservice.\n"
"\n"
"Cette section a pour objectif de vous guider dans l\342\200\231utilisation des diff\303\251rentes fonctionnalit\303\251s du programme\n"
"et de vous aider \303\240 r\303\251soudre les difficult\303\251s les plus courantes.\n"
"\n"
"\360\237\221\245 Gestion des employ\303\251s\n"
"\n"
"Cette fonctionnalit\303\251 vous permet d\342\200\231ajouter, de modifier et d'enlever  les informations relatives aux employ\303\251s de l\342\200\231entreprise.\n"
"\n"
"Ajouter un employ\303\251 : cliquez sur \342\200\234Ajouter\342\200\235 et remplissez le formulaire avec les informations requises (nom, pr\303\251nom, poste, ID  , etc.).\n"
"\n"
"Enlever un employ\303\251 : s\303\251lectionnez l\342\200\231employ\303\251 concern\303\251 dans la liste, puis cliquez sur \342\200\234Retirer\342\200\235.\n"
"\n"
"La sauvegarde se fait de mani\303\250re automatique.\n"
"\n"
"\n"
"\360\237\217"
                        "\254 Gestion des stocks\n"
"\n"
"Le syst\303\250me g\303\250re deux types de stocks :\n"
"\n"
"1. Mat\303\251riel photographique\n"
"\n"
"2. Mat\303\251riel informatique\n"
"\n"
"Dans chaque cat\303\251gorie, vous pouvez :\n"
"\n"
"Ajouter un nouveau mat\303\251riel avec sa d\303\251signation, sa quantit\303\251 et son prix.\n"
"\n"
"Modifier les informations existantes.\n"
"\n"
"Supprimer un article lorsqu\342\200\231il n\342\200\231est plus disponible.\n"
"\n"
"\n"
"\360\237\233\240\357\270\217 Gestion des services\n"
"\n"
"Cette section regroupe les diff\303\251rents services propos\303\251s par Paulinog Multiservice, tels que :\n"
"\n"
"a. Impression de documents\n"
"\n"
"b. Photocopie\n"
"\n"
"c. Et d\342\200\231autres services \303\240 venir.\n"
"\n"
"Vous pouvez enregistrer une nouvelle demande de service, consulter l\342\200\231historique des prestations effectu\303\251es ou modifier les informations d\342\200\231un service en cours.\n"
"\n"
"\n"
"\n"
"\342\235\223 En cas de difficult\303\251\n"
"\n"
""
                        "Si vous rencontrez un probl\303\250me :\n"
"\n"
"1. V\303\251rifiez que toutes les informations requises sont bien remplies.\n"
"\n"
"2. Consultez les messages d\342\200\231erreur affich\303\251s \303\240 l\342\200\231\303\251cran.\n"
"\n"
"3. Red\303\251marrez l\342\200\231application si n\303\251cessaire.\n"
"\n"
"\n"
"Pour toute assistance technique, veuillez contacter l\342\200\231administrateur du syst\303\250me de Paulinog Multiservice.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Manuel: public Ui_Manuel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUEL_H
