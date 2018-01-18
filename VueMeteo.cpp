/* 
 * File:   VueMeteo.cpp
 * Author: snir2g22
 * 
 * Created on 21 décembre 2017, 14:22
 */

#include "VueMeteo.h"
#include <QString>

VueMeteo::VueMeteo(BulletinMeteo* unBulletinMeteo) {
    this->dernierBulletinMeteo = unBulletinMeteo;
    this->dernierBulletinMeteo->addObservateur(this);
    widget.setupUi(this);
    
}

VueMeteo::~VueMeteo() {
    
}

void VueMeteo::mettreAJour(){
    
    widget.lineEdit->setText(QString::number(dernierBulletinMeteo->getTemperature()));
    widget.lineEdit_2->setText(QString::number(dernierBulletinMeteo->getVitesseVent()));
    
    
    if (dernierBulletinMeteo->getAlerteVent()){
        widget.lineEdit_3->setText("Alerte");
        widget.lineEdit_3->setStyleSheet("background-color: rgb(255, 0, 0);");
    }else{
        widget.lineEdit_3->setText("Pas d'alerte");
        widget.lineEdit_3->setStyleSheet("background-color: rgb(0, 255, 0);");
    }
}
