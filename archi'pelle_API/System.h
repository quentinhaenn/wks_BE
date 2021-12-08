//
// Created by Quentin on 06/12/2021.
//

#ifndef WKS_BE_SYSTEM_H
#define WKS_BE_SYSTEM_H

#include <string>
#include <vector>
#include <list>
#include "phMeter.h"
#include "conductiMeter.h"
#include "Plants/Plant.h"
#include "Actuators.h"

class System {
private :
    phMeter phMeter;
    conductiMeter conductiMeter;
    Plant plant;
    list <AbstractActuator*> ActuatorList;

public:
    System(const class phMeter &phMeter, const class conductiMeter &conductiMeter, Plant plant);
    float getPh();
    float getCond();
    virtual ~System();
    std::string getPlant();
    void setPlant(const class Plant &plant);
    void addActuator(AbstractActuator* const actuator);
    void delActuator();
    std::list<AbstractActuator*> getListActuator() const;
    void toString();
};


#endif //WKS_BE_SYSTEM_H
