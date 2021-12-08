//
// Created by Quentin on 08/12/2021.
//

#include <string>
#include "AbstractActuator.h"


int AbstractActuator::getNbInstances() const {
    return this->nbInstances;
}

void AbstractActuator::setState(ActuatorState* newState) {
    this->currentState = newState;
    this->currentState->setActuator(this);
}

std::string AbstractActuator::getName() const {
    return this->actuatorName;
}

void AbstractActuator::setName(std::string name) {
    this->actuatorName = name;
}

AbstractActuator::~AbstractActuator() {
    delete this->currentState;
}
