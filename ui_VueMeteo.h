/********************************************************************************
** Form generated from reading UI file 'VueMeteo.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VUEMETEO_H
#define UI_VUEMETEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_VueMeteo
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *VueMeteo)
    {
        if (VueMeteo->objectName().isEmpty())
            VueMeteo->setObjectName(QStringLiteral("VueMeteo"));
        VueMeteo->resize(312, 244);
        groupBox = new QGroupBox(VueMeteo);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 312, 117));
        QFont font;
        font.setPointSize(20);
        groupBox->setFont(font);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 131, 21));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(170, 40, 51, 22));
        lineEdit->setFont(font1);
        lineEdit->setReadOnly(true);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 40, 31, 21));
        label_2->setFont(font1);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 70, 51, 21));
        label_3->setFont(font1);
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 70, 51, 22));
        lineEdit_2->setFont(font1);
        lineEdit_2->setReadOnly(true);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 70, 151, 21));
        label_4->setFont(font1);
        groupBox_2 = new QGroupBox(VueMeteo);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 120, 311, 121));
        groupBox_2->setFont(font);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 40, 151, 21));
        label_5->setFont(font1);
        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(40, 80, 211, 22));
        lineEdit_3->setFont(font1);
        lineEdit_3->setAutoFillBackground(false);
        lineEdit_3->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 0);"));
        lineEdit_3->setReadOnly(true);

        retranslateUi(VueMeteo);

        QMetaObject::connectSlotsByName(VueMeteo);
    } // setupUi

    void retranslateUi(QDialog *VueMeteo)
    {
        VueMeteo->setWindowTitle(QApplication::translate("VueMeteo", "IHM_Station_alerte", 0));
        groupBox->setTitle(QApplication::translate("VueMeteo", "Station m\303\251t\303\251o", 0));
        label->setText(QApplication::translate("VueMeteo", "Temp\303\251rature", 0));
        lineEdit->setText(QApplication::translate("VueMeteo", "00.0", 0));
        label_2->setText(QApplication::translate("VueMeteo", "\302\260C", 0));
        label_3->setText(QApplication::translate("VueMeteo", "Km/h", 0));
        lineEdit_2->setText(QApplication::translate("VueMeteo", "00.0", 0));
        label_4->setText(QApplication::translate("VueMeteo", "Vitesse du vent", 0));
        groupBox_2->setTitle(QApplication::translate("VueMeteo", "Alerte", 0));
        label_5->setText(QApplication::translate("VueMeteo", "Vitesse du vent", 0));
        lineEdit_3->setText(QApplication::translate("VueMeteo", "Pas d'alerte", 0));
    } // retranslateUi

};

namespace Ui {
    class VueMeteo: public Ui_VueMeteo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VUEMETEO_H
