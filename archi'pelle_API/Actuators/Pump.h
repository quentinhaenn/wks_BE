#ifndef PUMP_H_
#define PUMP_H_

#include "AbstractActuator.h"
#include "IState.h"

class Pump : public AbstractActuator, IState
{
    private:
    IState *currentState;
    IState *onState;
    IState *offState;

    public:
    Pump();
    ~Pump();
    void switchOn();
    void switchOff();
}; 

#endif