/********************************************************************************
** Form generated from reading UI file 'enlever_employer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENLEVER_EMPLOYER_H
#define UI_ENLEVER_EMPLOYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_enlever_employer
{
public:
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;
    QTableWidget *tableWidgetEmployes;

    void setupUi(QDialog *enlever_employer)
    {
        if (enlever_employer->objectName().isEmpty())
            enlever_employer->setObjectName(QString::fromUtf8("enlever_employer"));
        enlever_employer->resize(1019, 610);
        enlever_employer->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background-color: #0f9e99;\n"
"}\n"
""));
        label_2 = new QLabel(enlever_employer);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 1021, 611));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/uiyo.jpg")));
        label_2->setScaledContents(true);
        label = new QLabel(enlever_employer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 20, 541, 71));
        label->setStyleSheet(QString::fromUtf8("font-size: 60px;\n"
"color: white;\n"
"text-decoration: underline;"));
        pushButton = new QPushButton(enlever_employer);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 480, 101, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font-size: 20px;"));
        tableWidgetEmployes = new QTableWidget(enlever_employer);
        tableWidgetEmployes->setObjectName(QString::fromUtf8("tableWidgetEmployes"));
        tableWidgetEmployes->setGeometry(QRect(20, 100, 771, 371));

        retranslateUi(enlever_employer);

        QMetaObject::connectSlotsByName(enlever_employer);
    } // setupUi

    void retranslateUi(QDialog *enlever_employer)
    {
        enlever_employer->setWindowTitle(QApplication::translate("enlever_employer", "Dialog", nullptr));
        label_2->setText(QString());
        label->setText(QApplication::translate("enlever_employer", "Enlever Un Employe", nullptr));
        pushButton->setText(QApplication::translate("enlever_employer", "Retirer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class enlever_employer: public Ui_enlever_employer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENLEVER_EMPLOYER_H
