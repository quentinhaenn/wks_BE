//
// Created by Quentin on 08/12/2021.
//

#ifndef WKS_BE_ACTUATORSTATE_H
#define WKS_BE_ACTUATORSTATE_H


#include "AbstractActuator.h"

class AbstractActuator;

class ActuatorState {
protected:
    AbstractActuator *actuator;

public :
    virtual ~ActuatorState();
    void setActuator(AbstractActuator* actuator);

    virtual void switchOn() = 0;
    virtual void switchOff() =0;

};

class OnState : public ActuatorState {

public:
    void switchOn() override;
    void switchOff() override;
};

class OffState : public ActuatorState {
public :
    void switchOn() override;
    void switchOff() override;
};

#endif //WKS_BE_ACTUATORSTATE_H
