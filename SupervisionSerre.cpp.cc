/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   SupervisionSerre.cpp
 * Author: snir2g2
 *
 * Created on 30 novembre 2017, 18:27
 */

#include "SupervisionSerre.h"

SupervisionSerre::SupervisionSerre() {
    widget.setupUi(this);
    etatSerre = new Etat();
    widget.layoutEtat->addWidget(etatSerre);
    //alerteSerre = new IHM_Station_alerte();
    //widget.layoutAlerte->addWidget(alerteSerre);
    affichageSerre1 = new IHM_Serre();
    widget.layoutSerres->addWidget(affichageSerre1);
    affichageSerre2 = new IHM_Serre();
    widget.layoutSerres->addWidget(affichageSerre2);
    affichageSerre3 = new IHM_Serre();
    widget.layoutSerres->addWidget(affichageSerre3);
    
}

SupervisionSerre::~SupervisionSerre() {
}
