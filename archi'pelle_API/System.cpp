//
// Created by Quentin on 06/12/2021.
//

#include <iostream>
#include "System.h"
#include "Plants/States/StateGood.h"


System::System(const class phMeter &phMeter, const class conductiMeter &conductiMeter, Plant plant) : phMeter(phMeter),
                                                                                                      conductiMeter(conductiMeter),
                                                                                                      plant(plant) {}

float System::getPh() {
    return this->phMeter.getValue();
}

float System::getCond() {
    return this->conductiMeter.getValue();
}

std::string System::getPlant() {
    return this->plant.getPlantName();
}

void System::setPlant(const class Plant &plant) {
    if(&this->plant != &plant)
        this->plant = plant;
}


void System::delActuator() {
    if (!this->ActuatorList.empty()) { this->ActuatorList.pop_back(); }
}

void System::addActuator(AbstractActuator *const actuator) {
    this->ActuatorList.push_back(actuator);
}

std::list<AbstractActuator*> System::getListActuator() const {
    return this->ActuatorList;
}

void System::toString() {
    for (auto& actuator : ActuatorList){
        std::cout<< actuator->getName() << std::endl;
    }
}

System::~System() = default;


