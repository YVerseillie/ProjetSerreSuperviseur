/* 
 * File:   BulletinMeteo.cpp
 * Author: Verseillie
 * 
 * Created on 21 décembre 2017, 14:24
 */

#include "BulletinMeteo.h"

BulletinMeteo::BulletinMeteo() {
}

BulletinMeteo::~BulletinMeteo() {
}

void BulletinMeteo::setAlerteVent(bool alerte){
    alerteVent = alerte;
    notifier();
}

void BulletinMeteo::setTemperature(int temperature){
    this->temperature = temperature;
    notifier();
}

void BulletinMeteo::setVitesseVent(int vitesse){
    vitesseVent = vitesse;
    notifier();
}