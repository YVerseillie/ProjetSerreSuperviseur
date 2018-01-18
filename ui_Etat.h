/********************************************************************************
** Form generated from reading UI file 'Etat.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ETAT_H
#define UI_ETAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Etat
{
public:
    QGroupBox *groupBox;
    QLabel *labelPulverisationGen;
    QLineEdit *lineEditAutoriseGen;
    QLabel *labelPulverisationParSerre;
    QFrame *frameSerre1;
    QLabel *labelSerre1;
    QLineEdit *lineEditAutoriseS1;
    QLabel *labelWarningS1;
    QFrame *frameSerre2;
    QLabel *labelSerre2;
    QLineEdit *lineEditAutoriseS2;
    QLabel *labelWarningS2;
    QFrame *frameSerre3;
    QLabel *labelSerre3;
    QLineEdit *lineEditAutoriseS3;
    QLabel *labelWarningS3;
    QLabel *labelWarningMain;

    void setupUi(QWidget *Etat)
    {
        if (Etat->objectName().isEmpty())
            Etat->setObjectName(QStringLiteral("Etat"));
        Etat->resize(312, 379);
        groupBox = new QGroupBox(Etat);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 10, 312, 368));
        QFont font;
        font.setPointSize(20);
        groupBox->setFont(font);
        labelPulverisationGen = new QLabel(groupBox);
        labelPulverisationGen->setObjectName(QStringLiteral("labelPulverisationGen"));
        labelPulverisationGen->setGeometry(QRect(20, 50, 201, 21));
        QFont font1;
        font1.setPointSize(12);
        labelPulverisationGen->setFont(font1);
        lineEditAutoriseGen = new QLineEdit(groupBox);
        lineEditAutoriseGen->setObjectName(QStringLiteral("lineEditAutoriseGen"));
        lineEditAutoriseGen->setGeometry(QRect(20, 80, 113, 22));
        lineEditAutoriseGen->setFont(font1);
        lineEditAutoriseGen->setReadOnly(true);
        labelPulverisationParSerre = new QLabel(groupBox);
        labelPulverisationParSerre->setObjectName(QStringLiteral("labelPulverisationParSerre"));
        labelPulverisationParSerre->setGeometry(QRect(20, 140, 201, 21));
        labelPulverisationParSerre->setFont(font1);
        frameSerre1 = new QFrame(groupBox);
        frameSerre1->setObjectName(QStringLiteral("frameSerre1"));
        frameSerre1->setGeometry(QRect(20, 210, 81, 101));
        frameSerre1->setFrameShape(QFrame::StyledPanel);
        frameSerre1->setFrameShadow(QFrame::Raised);
        labelSerre1 = new QLabel(frameSerre1);
        labelSerre1->setObjectName(QStringLiteral("labelSerre1"));
        labelSerre1->setGeometry(QRect(10, 10, 59, 14));
        QFont font2;
        font2.setPointSize(11);
        labelSerre1->setFont(font2);
        lineEditAutoriseS1 = new QLineEdit(frameSerre1);
        lineEditAutoriseS1->setObjectName(QStringLiteral("lineEditAutoriseS1"));
        lineEditAutoriseS1->setGeometry(QRect(10, 40, 61, 22));
        QFont font3;
        font3.setPointSize(10);
        lineEditAutoriseS1->setFont(font3);
        lineEditAutoriseS1->setReadOnly(true);
        labelWarningS1 = new QLabel(frameSerre1);
        labelWarningS1->setObjectName(QStringLiteral("labelWarningS1"));
        labelWarningS1->setEnabled(false);
        labelWarningS1->setGeometry(QRect(24, 70, 41, 31));
        labelWarningS1->setPixmap(QPixmap(QString::fromUtf8("../../Images/Test.png")));
        frameSerre2 = new QFrame(groupBox);
        frameSerre2->setObjectName(QStringLiteral("frameSerre2"));
        frameSerre2->setGeometry(QRect(110, 210, 81, 101));
        frameSerre2->setFrameShape(QFrame::StyledPanel);
        frameSerre2->setFrameShadow(QFrame::Raised);
        labelSerre2 = new QLabel(frameSerre2);
        labelSerre2->setObjectName(QStringLiteral("labelSerre2"));
        labelSerre2->setGeometry(QRect(10, 10, 59, 14));
        labelSerre2->setFont(font2);
        lineEditAutoriseS2 = new QLineEdit(frameSerre2);
        lineEditAutoriseS2->setObjectName(QStringLiteral("lineEditAutoriseS2"));
        lineEditAutoriseS2->setGeometry(QRect(10, 40, 61, 22));
        lineEditAutoriseS2->setFont(font3);
        lineEditAutoriseS2->setReadOnly(true);
        labelWarningS2 = new QLabel(frameSerre2);
        labelWarningS2->setObjectName(QStringLiteral("labelWarningS2"));
        labelWarningS2->setEnabled(false);
        labelWarningS2->setGeometry(QRect(24, 70, 41, 31));
        labelWarningS2->setPixmap(QPixmap(QString::fromUtf8("../../Images/Test.png")));
        frameSerre3 = new QFrame(groupBox);
        frameSerre3->setObjectName(QStringLiteral("frameSerre3"));
        frameSerre3->setGeometry(QRect(200, 210, 81, 101));
        frameSerre3->setFrameShape(QFrame::StyledPanel);
        frameSerre3->setFrameShadow(QFrame::Raised);
        labelSerre3 = new QLabel(frameSerre3);
        labelSerre3->setObjectName(QStringLiteral("labelSerre3"));
        labelSerre3->setGeometry(QRect(10, 10, 59, 14));
        labelSerre3->setFont(font2);
        lineEditAutoriseS3 = new QLineEdit(frameSerre3);
        lineEditAutoriseS3->setObjectName(QStringLiteral("lineEditAutoriseS3"));
        lineEditAutoriseS3->setGeometry(QRect(10, 40, 61, 22));
        lineEditAutoriseS3->setFont(font3);
        lineEditAutoriseS3->setReadOnly(true);
        labelWarningS3 = new QLabel(frameSerre3);
        labelWarningS3->setObjectName(QStringLiteral("labelWarningS3"));
        labelWarningS3->setEnabled(false);
        labelWarningS3->setGeometry(QRect(24, 70, 41, 31));
        labelWarningS3->setPixmap(QPixmap(QString::fromUtf8("../../Images/Test.png")));
        labelWarningMain = new QLabel(groupBox);
        labelWarningMain->setObjectName(QStringLiteral("labelWarningMain"));
        labelWarningMain->setEnabled(false);
        labelWarningMain->setGeometry(QRect(150, 76, 41, 31));
        labelWarningMain->setPixmap(QPixmap(QString::fromUtf8("../../Images/Test.png")));

        retranslateUi(Etat);

        QMetaObject::connectSlotsByName(Etat);
    } // setupUi

    void retranslateUi(QWidget *Etat)
    {
        Etat->setWindowTitle(QApplication::translate("Etat", "Form", 0));
        groupBox->setTitle(QApplication::translate("Etat", "Etat", 0));
        labelPulverisationGen->setText(QApplication::translate("Etat", "Pulv\303\251risation g\303\251n\303\251rale", 0));
        lineEditAutoriseGen->setText(QApplication::translate("Etat", "Autoris\303\251", 0));
        labelPulverisationParSerre->setText(QApplication::translate("Etat", "Pulv\303\251risation par serre", 0));
        labelSerre1->setText(QApplication::translate("Etat", "Serre 1", 0));
        lineEditAutoriseS1->setText(QApplication::translate("Etat", "Autoris\303\251", 0));
        labelWarningS1->setText(QString());
        labelSerre2->setText(QApplication::translate("Etat", "Serre 2", 0));
        lineEditAutoriseS2->setText(QApplication::translate("Etat", "Autoris\303\251", 0));
        labelWarningS2->setText(QString());
        labelSerre3->setText(QApplication::translate("Etat", "Serre 3", 0));
        lineEditAutoriseS3->setText(QApplication::translate("Etat", "Autoris\303\251", 0));
        labelWarningS3->setText(QString());
        labelWarningMain->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Etat: public Ui_Etat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ETAT_H
