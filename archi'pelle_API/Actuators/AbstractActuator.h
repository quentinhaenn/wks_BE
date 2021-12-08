//
// Created by Quentin on 08/12/2021.
//

#ifndef WKS_BE_ABSTRACTACTUATOR_H
#define WKS_BE_ABSTRACTACTUATOR_H

#include "ActuatorState.h"
#include <string>

class ActuatorState;

class AbstractActuator {
private :
    ActuatorState* currentState;
    int nbInstances = 0;
    std::string actuatorName;
public:

    int getNbInstances() const;
    void setState(ActuatorState* newState);
    virtual void switchOn() =0;
    virtual void switchOff() =0;
    std::string getName() const;
    void setName(std::string name);
    virtual ~AbstractActuator();
};


#endif //WKS_BE_ABSTRACTACTUATOR_H
