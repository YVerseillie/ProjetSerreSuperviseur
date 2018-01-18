/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SupervisionSerre.h
 * Author: snir2g2
 *
 * Created on 30 novembre 2017, 18:27
 */

#ifndef _SUPERVISIONSERRE_H
#define _SUPERVISIONSERRE_H

#include "ui_SupervisionSerre.h"
#include "Etat.h"
//#include "IHM_Station_alerte.h"
#include "IHM_Serre.h"

class SupervisionSerre : public QDialog {
    Q_OBJECT
public:
    SupervisionSerre();
    virtual ~SupervisionSerre();
private:
    Ui::SupervisionSerre widget;
    Etat* etatSerre;
    //IHM_Station_alerte* alerteSerre;
    IHM_Serre* affichageSerre1;
    IHM_Serre* affichageSerre2;
    IHM_Serre* affichageSerre3;
    
};

#endif /* _SUPERVISIONSERRE_H */
