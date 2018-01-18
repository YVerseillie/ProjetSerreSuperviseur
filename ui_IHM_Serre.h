/********************************************************************************
** Form generated from reading UI file 'IHM_Serre.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IHM_SERRE_H
#define UI_IHM_SERRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IHM_Serre
{
public:
    QGroupBox *Serre;
    QLabel *LabelHumidite;
    QLabel *LabelLuminosite;
    QLabel *LabelCelsus;
    QLabel *LabelPercent;
    QLabel *LabelLux;
    QPushButton *btnPulveAuto;
    QLabel *LabelPulvi;
    QGroupBox *groupBox;
    QLabel *label;
    QPushButton *btnPulveInhibe;
    QComboBox *comboBox;
    QLineEdit *lineEditTemperature;
    QLineEdit *lineEditHumidite;
    QLineEdit *lineEditLuminosite;
    QLineEdit *lineEditPulverivation;
    QLabel *LabelPulvi_2;
    QLineEdit *lineEditOuvertA;
    QLabel *LabelPercent_2;
    QLabel *LabelTemperature;
    QPushButton *btnOuvrantsFermer;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QLineEdit *lineEditNbrOuvrir;
    QLabel *label_3;
    QPushButton *btnOuvrantsOuvrir;

    void setupUi(QWidget *IHM_Serre)
    {
        if (IHM_Serre->objectName().isEmpty())
            IHM_Serre->setObjectName(QStringLiteral("IHM_Serre"));
        IHM_Serre->resize(450, 788);
        Serre = new QGroupBox(IHM_Serre);
        Serre->setObjectName(QStringLiteral("Serre"));
        Serre->setGeometry(QRect(0, 0, 450, 788));
        QFont font;
        font.setPointSize(20);
        Serre->setFont(font);
        LabelHumidite = new QLabel(Serre);
        LabelHumidite->setObjectName(QStringLiteral("LabelHumidite"));
        LabelHumidite->setGeometry(QRect(20, 200, 181, 31));
        QFont font1;
        font1.setPointSize(16);
        LabelHumidite->setFont(font1);
        LabelLuminosite = new QLabel(Serre);
        LabelLuminosite->setObjectName(QStringLiteral("LabelLuminosite"));
        LabelLuminosite->setGeometry(QRect(20, 290, 181, 31));
        LabelLuminosite->setFont(font1);
        LabelCelsus = new QLabel(Serre);
        LabelCelsus->setObjectName(QStringLiteral("LabelCelsus"));
        LabelCelsus->setGeometry(QRect(340, 110, 41, 31));
        LabelCelsus->setFont(font1);
        LabelPercent = new QLabel(Serre);
        LabelPercent->setObjectName(QStringLiteral("LabelPercent"));
        LabelPercent->setGeometry(QRect(340, 200, 31, 31));
        LabelPercent->setFont(font1);
        LabelLux = new QLabel(Serre);
        LabelLux->setObjectName(QStringLiteral("LabelLux"));
        LabelLux->setGeometry(QRect(340, 290, 41, 31));
        LabelLux->setFont(font1);
        btnPulveAuto = new QPushButton(Serre);
        btnPulveAuto->setObjectName(QStringLiteral("btnPulveAuto"));
        btnPulveAuto->setGeometry(QRect(30, 480, 134, 62));
        QFont font2;
        font2.setPointSize(14);
        btnPulveAuto->setFont(font2);
        LabelPulvi = new QLabel(Serre);
        LabelPulvi->setObjectName(QStringLiteral("LabelPulvi"));
        LabelPulvi->setGeometry(QRect(20, 380, 181, 31));
        LabelPulvi->setFont(font1);
        groupBox = new QGroupBox(Serre);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(170, 440, 251, 121));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 101, 21));
        QFont font3;
        font3.setPointSize(12);
        label->setFont(font3);
        btnPulveInhibe = new QPushButton(groupBox);
        btnPulveInhibe->setObjectName(QStringLiteral("btnPulveInhibe"));
        btnPulveInhibe->setGeometry(QRect(150, 40, 81, 61));
        btnPulveInhibe->setFont(font2);
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 80, 121, 22));
        comboBox->setFont(font3);
        lineEditTemperature = new QLineEdit(Serre);
        lineEditTemperature->setObjectName(QStringLiteral("lineEditTemperature"));
        lineEditTemperature->setGeometry(QRect(240, 110, 91, 31));
        lineEditTemperature->setFont(font1);
        lineEditTemperature->setReadOnly(true);
        lineEditHumidite = new QLineEdit(Serre);
        lineEditHumidite->setObjectName(QStringLiteral("lineEditHumidite"));
        lineEditHumidite->setGeometry(QRect(240, 200, 91, 31));
        lineEditHumidite->setFont(font1);
        lineEditHumidite->setReadOnly(true);
        lineEditLuminosite = new QLineEdit(Serre);
        lineEditLuminosite->setObjectName(QStringLiteral("lineEditLuminosite"));
        lineEditLuminosite->setGeometry(QRect(240, 290, 91, 31));
        lineEditLuminosite->setFont(font1);
        lineEditLuminosite->setReadOnly(true);
        lineEditPulverivation = new QLineEdit(Serre);
        lineEditPulverivation->setObjectName(QStringLiteral("lineEditPulverivation"));
        lineEditPulverivation->setGeometry(QRect(240, 380, 151, 31));
        lineEditPulverivation->setFont(font1);
        lineEditPulverivation->setReadOnly(true);
        LabelPulvi_2 = new QLabel(Serre);
        LabelPulvi_2->setObjectName(QStringLiteral("LabelPulvi_2"));
        LabelPulvi_2->setGeometry(QRect(30, 600, 251, 31));
        LabelPulvi_2->setFont(font1);
        lineEditOuvertA = new QLineEdit(Serre);
        lineEditOuvertA->setObjectName(QStringLiteral("lineEditOuvertA"));
        lineEditOuvertA->setGeometry(QRect(290, 600, 51, 31));
        lineEditOuvertA->setFont(font1);
        lineEditOuvertA->setReadOnly(true);
        LabelPercent_2 = new QLabel(Serre);
        LabelPercent_2->setObjectName(QStringLiteral("LabelPercent_2"));
        LabelPercent_2->setGeometry(QRect(350, 600, 31, 31));
        LabelPercent_2->setFont(font1);
        LabelTemperature = new QLabel(Serre);
        LabelTemperature->setObjectName(QStringLiteral("LabelTemperature"));
        LabelTemperature->setGeometry(QRect(20, 110, 181, 31));
        LabelTemperature->setFont(font1);
        btnOuvrantsFermer = new QPushButton(Serre);
        btnOuvrantsFermer->setObjectName(QStringLiteral("btnOuvrantsFermer"));
        btnOuvrantsFermer->setGeometry(QRect(30, 680, 101, 62));
        btnOuvrantsFermer->setFont(font2);
        groupBox_2 = new QGroupBox(Serre);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(160, 650, 231, 91));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 40, 81, 16));
        label_2->setFont(font3);
        lineEditNbrOuvrir = new QLineEdit(groupBox_2);
        lineEditNbrOuvrir->setObjectName(QStringLiteral("lineEditNbrOuvrir"));
        lineEditNbrOuvrir->setGeometry(QRect(20, 60, 41, 22));
        lineEditNbrOuvrir->setFont(font3);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 60, 21, 20));
        label_3->setFont(font3);
        btnOuvrantsOuvrir = new QPushButton(groupBox_2);
        btnOuvrantsOuvrir->setObjectName(QStringLiteral("btnOuvrantsOuvrir"));
        btnOuvrantsOuvrir->setGeometry(QRect(130, 40, 81, 41));
        btnOuvrantsOuvrir->setFont(font2);

        retranslateUi(IHM_Serre);

        QMetaObject::connectSlotsByName(IHM_Serre);
    } // setupUi

    void retranslateUi(QWidget *IHM_Serre)
    {
        IHM_Serre->setWindowTitle(QApplication::translate("IHM_Serre", "Form", 0));
        Serre->setTitle(QApplication::translate("IHM_Serre", "Serre", 0));
        LabelHumidite->setText(QApplication::translate("IHM_Serre", "Humidit\303\251", 0));
        LabelLuminosite->setText(QApplication::translate("IHM_Serre", "Luminosit\303\251", 0));
        LabelCelsus->setText(QApplication::translate("IHM_Serre", "\302\260C", 0));
        LabelPercent->setText(QApplication::translate("IHM_Serre", "%", 0));
        LabelLux->setText(QApplication::translate("IHM_Serre", "lux", 0));
        btnPulveAuto->setText(QApplication::translate("IHM_Serre", "Autoris\303\251", 0));
        LabelPulvi->setText(QApplication::translate("IHM_Serre", "Pulv\303\251risation", 0));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("IHM_Serre", "Inhiber pour :", 0));
        btnPulveInhibe->setText(QApplication::translate("IHM_Serre", "Inhib\303\251", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("IHM_Serre", "15 minutes", 0)
         << QApplication::translate("IHM_Serre", "30 minutes", 0)
         << QApplication::translate("IHM_Serre", "1 heure", 0)
         << QApplication::translate("IHM_Serre", "2 heures", 0)
         << QApplication::translate("IHM_Serre", "4 heures", 0)
         << QApplication::translate("IHM_Serre", "8 heures", 0)
         << QApplication::translate("IHM_Serre", "24 heures", 0)
        );
        lineEditTemperature->setText(QApplication::translate("IHM_Serre", "0.00", 0));
        lineEditHumidite->setText(QApplication::translate("IHM_Serre", "0.0", 0));
        lineEditLuminosite->setText(QApplication::translate("IHM_Serre", "0000", 0));
        lineEditPulverivation->setText(QApplication::translate("IHM_Serre", "Activ\303\251", 0));
        LabelPulvi_2->setText(QApplication::translate("IHM_Serre", "Ouvrants ouvert \303\240 ", 0));
        lineEditOuvertA->setText(QApplication::translate("IHM_Serre", "0", 0));
        LabelPercent_2->setText(QApplication::translate("IHM_Serre", "%", 0));
        LabelTemperature->setText(QApplication::translate("IHM_Serre", "Temp\303\251rature", 0));
        btnOuvrantsFermer->setText(QApplication::translate("IHM_Serre", "Fermer", 0));
        groupBox_2->setTitle(QString());
        label_2->setText(QApplication::translate("IHM_Serre", "Ouvrir \303\240 :", 0));
        lineEditNbrOuvrir->setText(QApplication::translate("IHM_Serre", "000", 0));
        label_3->setText(QApplication::translate("IHM_Serre", "%", 0));
        btnOuvrantsOuvrir->setText(QApplication::translate("IHM_Serre", "Ouvrir", 0));
    } // retranslateUi

};

namespace Ui {
    class IHM_Serre: public Ui_IHM_Serre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IHM_SERRE_H
