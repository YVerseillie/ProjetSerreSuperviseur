/* 
 * File:   IHM_Serre.h
 * Author: Verseillie
 *
 * Created on 21 novembre 2017, 14:39
 */

#ifndef _IHM_SERRE_H
#define _IHM_SERRE_H

#include "ui_IHM_Serre.h"
#include <QTimer>
class IHM_Serre : public QWidget {
    Q_OBJECT
    
public:
    IHM_Serre();
    virtual ~IHM_Serre();
    
    
public slots:
    void slotOuvrirOuvrants();
    void slotFermerOuvrants();
    void slotPulveInhibe();
    void slotPulveAuto();
    void mettreAJour();
    //void slotTemperature();
    
private:
    Ui::IHM_Serre widget;
    QTimer *timer_;
    int compteur;
    
    
};

#endif /* _IHM_SERRE_H */