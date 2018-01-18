/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Etat.h
 * Author: snir2g2
 *
 * Created on 21 novembre 2017, 15:37
 */

#ifndef _ETAT_H
#define _ETAT_H

#include "ui_Etat.h"

class Etat : public QWidget {
    Q_OBJECT
public:
    Etat();
    virtual ~Etat();
private:
    Ui::Etat widget;
};

#endif /* _ETAT_H */
