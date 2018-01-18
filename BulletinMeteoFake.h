/* 
 * File:   BulletinMeteoFake.h
 * Author: Verseillie
 *
 * Created on 11 janvier 2018, 15:31
 */

#ifndef BULLETINMETEOFAKE_H
#define BULLETINMETEOFAKE_H
#include "BulletinMeteo.h"
//#include <QTimer>

class BulletinMeteoFake : public BulletinMeteo {
//    Q_OBJECT
    
public:
    BulletinMeteoFake();
    virtual ~BulletinMeteoFake();
    
private:
//    QTimer *timer_;
    
//public slots:
//    void slotTimeOut();

};

#endif /* BULLETINMETEOFAKE_H */

