/*
 * File:   main.cpp
 * Author: Verseillie
 *
 * Created on 30 novembre 2017, 18:26
 */

#include <QApplication>
#include "SupervisionSerre.h"
#include "BulletinMeteo.h"
#include "VueMeteo.h"
#include <QThread>

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    BulletinMeteo* bulletin = new BulletinMeteo();
    VueMeteo* vueMeteo = new VueMeteo(bulletin);
    
    vueMeteo->show();
    
    bulletin->setTemperature(12);
    
    /*
    SupervisionSerre* supervision = new SupervisionSerre();
    supervision->show();
    */
    
    return app.exec();
}
