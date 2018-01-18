/* 
 * File:   Observable.h
 * Author: ocommeng
 *
 * Created on 26 novembre 2017, 23:27
 */

#ifndef OBSERVABLE_H
#define OBSERVABLE_H
#include <vector>
#include "Observateur.h"

class Observateur;

class Observable {
public:
    Observable();
    void addObservateur(Observateur* obs);
    void delObservateur(Observateur* obs);
    virtual ~Observable();
    void notifier();
    
private:
    std::vector<Observateur*> listeObservateurs;
};

#endif /* OBSERVABLE_H */