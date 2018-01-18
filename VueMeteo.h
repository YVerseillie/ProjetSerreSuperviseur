/* 
 * File:   VueMeteo.h
 * Author: Verseillie
 *
 * Created on 21 décembre 2017, 14:22
 */

#ifndef VUEMETEO_H
#define VUEMETEO_H
#include "BulletinMeteo.h"
#include "Observateur.h"
#include "ui_IHM_Serre.h"
#include "ui_VueMeteo.h"
#include <QWidget>

class VueMeteo : public Observateur, public QDialog{
public:
    VueMeteo(BulletinMeteo* unBulletinMeteo);
    virtual ~VueMeteo();
    virtual void mettreAJour();
private:
    BulletinMeteo* dernierBulletinMeteo;
    Ui::VueMeteo widget;
};

#endif /* VUEMETEO_H */

