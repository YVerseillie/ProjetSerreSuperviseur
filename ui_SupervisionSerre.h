/********************************************************************************
** Form generated from reading UI file 'SupervisionSerre.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPERVISIONSERRE_H
#define UI_SUPERVISIONSERRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SupervisionSerre
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *layoutEtat;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *layoutAlerte;
    QGroupBox *DonneesClimatiques;
    QLabel *label;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *layoutSerres;
    QPushButton *buttonPulverisation;
    QPushButton *buttonOuvrants;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *SupervisionSerre)
    {
        if (SupervisionSerre->objectName().isEmpty())
            SupervisionSerre->setObjectName(QStringLiteral("SupervisionSerre"));
        SupervisionSerre->resize(1920, 1080);
        horizontalLayoutWidget = new QWidget(SupervisionSerre);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 240, 321, 401));
        layoutEtat = new QHBoxLayout(horizontalLayoutWidget);
        layoutEtat->setObjectName(QStringLiteral("layoutEtat"));
        layoutEtat->setSizeConstraint(QLayout::SetDefaultConstraint);
        layoutEtat->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget_2 = new QWidget(SupervisionSerre);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(30, 640, 321, 291));
        layoutAlerte = new QHBoxLayout(horizontalLayoutWidget_2);
        layoutAlerte->setObjectName(QStringLiteral("layoutAlerte"));
        layoutAlerte->setSizeConstraint(QLayout::SetDefaultConstraint);
        layoutAlerte->setContentsMargins(0, 0, 0, 0);
        DonneesClimatiques = new QGroupBox(SupervisionSerre);
        DonneesClimatiques->setObjectName(QStringLiteral("DonneesClimatiques"));
        DonneesClimatiques->setGeometry(QRect(450, 60, 1371, 931));
        QFont font;
        font.setPointSize(20);
        DonneesClimatiques->setFont(font);
        label = new QLabel(DonneesClimatiques);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 171, 41));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        horizontalLayoutWidget_3 = new QWidget(DonneesClimatiques);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(40, 110, 1321, 791));
        layoutSerres = new QHBoxLayout(horizontalLayoutWidget_3);
        layoutSerres->setObjectName(QStringLiteral("layoutSerres"));
        layoutSerres->setContentsMargins(0, 0, 0, 0);
        buttonPulverisation = new QPushButton(SupervisionSerre);
        buttonPulverisation->setObjectName(QStringLiteral("buttonPulverisation"));
        buttonPulverisation->setGeometry(QRect(30, 120, 151, 81));
        QFont font2;
        font2.setPointSize(12);
        buttonPulverisation->setFont(font2);
        buttonOuvrants = new QPushButton(SupervisionSerre);
        buttonOuvrants->setObjectName(QStringLiteral("buttonOuvrants"));
        buttonOuvrants->setGeometry(QRect(200, 120, 151, 81));
        buttonOuvrants->setFont(font2);
        label_2 = new QLabel(SupervisionSerre);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 70, 121, 31));
        label_3 = new QLabel(SupervisionSerre);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 70, 151, 31));

        retranslateUi(SupervisionSerre);

        QMetaObject::connectSlotsByName(SupervisionSerre);
    } // setupUi

    void retranslateUi(QDialog *SupervisionSerre)
    {
        SupervisionSerre->setWindowTitle(QApplication::translate("SupervisionSerre", "SupervisionSerre", 0));
        DonneesClimatiques->setTitle(QApplication::translate("SupervisionSerre", "Donn\303\251es climatiques", 0));
        label->setText(QApplication::translate("SupervisionSerre", "Vue g\303\251n\303\251rale", 0));
        buttonPulverisation->setText(QApplication::translate("SupervisionSerre", "Activer/D\303\251sactiver", 0));
        buttonOuvrants->setText(QApplication::translate("SupervisionSerre", "Ouvrir/Fermer", 0));
        label_2->setText(QApplication::translate("SupervisionSerre", "Gestion de la \n"
"pulv\303\251risation", 0));
        label_3->setText(QApplication::translate("SupervisionSerre", "Forcer l'ouverture ou la \n"
"fermeture des ouvrants", 0));
    } // retranslateUi

};

namespace Ui {
    class SupervisionSerre: public Ui_SupervisionSerre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPERVISIONSERRE_H
