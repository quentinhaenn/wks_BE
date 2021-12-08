//
// Created by Quentin on 08/12/2021.
//

#include <iostream>
#include "ActuatorState.h"

ActuatorState::~ActuatorState() {

}

void ActuatorState::setActuator(AbstractActuator *actuator) {
    this->actuator = actuator;
}

void OnState::switchOn() {
    std::cout<<"JE SUIS DEJA ALLUME" << std::endl;
}

void OnState::switchOff() {
    this->actuator->switchOff();
    std::cout<<"Je suis maintenant éteins"<<std::endl;
}

void OffState::switchOn() {
    this->actuator->switchOn();
    std::cout<<"Je m'allume!"<<std::endl;
}

void OffState::switchOff() {
    std::cout<<"Je suis déjà éteins"<<std::endl;
}
