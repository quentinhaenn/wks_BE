//
// Created by Quentin on 08/12/2021.
//

#include "AbstractActuator.h"

#ifndef WKS_BE_PUMP_H
#define WKS_BE_PUMP_H

class ActuatorState;

class Pump : public AbstractActuator {
private :
    int activationDuration{};

public :
    Pump();
    Pump(int activationDuration);
    void switchOn() override;
    void switchOff() override;
    int getActivTime() const;
    void setActiveTime(int newTime);

};


#endif //WKS_BE_PUMP_H
