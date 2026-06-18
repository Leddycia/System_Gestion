/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
    QSpinBox *spinBox_7;
    QSpinBox *spinBox_8;
    QLabel *label_10;
    QSpinBox *spinBox_9;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(516, 408);
        Dialog->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"color: rgb(0, 0, 0);"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 20, 241, 20));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 101, 16));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 260, 101, 16));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 220, 101, 16));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 180, 101, 16));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 100, 101, 16));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 140, 101, 16));
        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 310, 101, 16));
        label_9 = new QLabel(Dialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(300, 60, 101, 16));
        spinBox = new QSpinBox(Dialog);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(130, 60, 61, 25));
        spinBox_2 = new QSpinBox(Dialog);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(130, 100, 61, 25));
        spinBox_3 = new QSpinBox(Dialog);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setGeometry(QRect(130, 140, 61, 25));
        spinBox_4 = new QSpinBox(Dialog);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setGeometry(QRect(130, 180, 61, 25));
        spinBox_5 = new QSpinBox(Dialog);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setGeometry(QRect(130, 220, 61, 25));
        spinBox_6 = new QSpinBox(Dialog);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setGeometry(QRect(130, 260, 61, 25));
        spinBox_7 = new QSpinBox(Dialog);
        spinBox_7->setObjectName(QString::fromUtf8("spinBox_7"));
        spinBox_7->setGeometry(QRect(130, 310, 61, 25));
        spinBox_8 = new QSpinBox(Dialog);
        spinBox_8->setObjectName(QString::fromUtf8("spinBox_8"));
        spinBox_8->setGeometry(QRect(400, 50, 61, 25));
        label_10 = new QLabel(Dialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(300, 100, 81, 16));
        spinBox_9 = new QSpinBox(Dialog);
        spinBox_9->setObjectName(QString::fromUtf8("spinBox_9"));
        spinBox_9->setGeometry(QRect(400, 100, 61, 25));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 360, 80, 25));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; text-decoration: underline;\">Materiels Photographiques</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-weight:600;\">Camera Canon</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-weight:600;\">Slave Light</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-weight:600;\">Light</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-weight:600;\">Lens Nikon</span></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-weight:600;\">Camera Pentax</span></p></body></html>", nullptr));
        label_7->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-weight:600;\">Lens Canon</span></p></body></html>", nullptr));
        label_8->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-weight:600;\">Trepied</span></p></body></html>", nullptr));
        label_9->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-weight:600;\">Gimball</span></p></body></html>", nullptr));
        label_10->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-weight:600;\">Flash Cobra</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "Enregistrer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
