/* 
 * File:   BulletinMeteo.h
 * Author: Verseillie
 *
 * Created on 21 décembre 2017, 14:24
 */

#ifndef BULLETINMETEO_H
#define BULLETINMETEO_H
#include "Observable.h"

class BulletinMeteo : public Observable{
public:
    BulletinMeteo();
    virtual ~BulletinMeteo();
    
    int getTemperature(){return temperature;};
    int getVitesseVent(){return vitesseVent;};
    bool getAlerteVent(){return alerteVent;};
    void setVitesseVent(int vitesse);
    void setTemperature(int temperature);
    void setAlerteVent(bool alerte);

private:
    int temperature;
    int vitesseVent;
    bool alerteVent;
};

#endif /* BULLETINMETEO_H */

