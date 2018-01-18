/*
 * File:   IHM_Serre.cpp
 * Author: Verseillie
 *
 * Created on 21 novembre 2017, 14:39
 */

#include "IHM_Serre.h"
#include <QString>
#include <iostream>

using namespace std;

IHM_Serre::IHM_Serre() {
    widget.setupUi(this);
    this->timer_ = new QTimer(this);
    
    connect(widget.btnOuvrantsOuvrir, SIGNAL(clicked()),this,SLOT(slotOuvrirOuvrants()));
    connect(widget.btnOuvrantsFermer, SIGNAL(clicked()),this,SLOT(slotFermerOuvrants()));
    connect(widget.btnPulveAuto, SIGNAL(clicked()),this,SLOT(slotPulveAuto()));
    connect(widget.btnPulveInhibe, SIGNAL(clicked()),this,SLOT(slotPulveInhibe()));
    connect(timer_, SIGNAL(timeout()),this,SLOT(mettreAJour()));
    
    timer_->start(2000);
}

IHM_Serre::~IHM_Serre() {
}

void IHM_Serre::slotOuvrirOuvrants(){

}

void IHM_Serre::slotFermerOuvrants(){

}
void IHM_Serre::slotPulveAuto(){

}
void IHM_Serre::slotPulveInhibe(){

}

void IHM_Serre::mettreAJour(){
    widget.lineEditTemperature->setText(QString::number(rand()%100));
    widget.lineEditHumidite->setText(QString::number(rand()%100));
    widget.lineEditOuvertA->setText(QString::number(rand()%100));
    widget.lineEditPulverivation->setText(QString::number(rand()%100));
    widget.lineEditLuminosite->setText(QString::number(rand()%100));

}