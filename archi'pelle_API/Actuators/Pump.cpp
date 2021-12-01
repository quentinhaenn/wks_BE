#include <iostream>
#include "Pump.h"
#include "OnState.h"
#include "OffState.h"

using namespace std;

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

Pump::Pump()
{
    onState = new OnState();
    offState = new OffState();
}

Pump::~Pump() 
{
    delete onState;
    delete offState;    
}

void Pump::switchOn()
{
    if(currentState != onState ){
        currentState = onState;
    }else
    {
        cout << "DEJA ALLUME";
    }
}

void Pump::switchOff()
{
    if(currentState != offState)
    {
        currentState = offState;
    }else
    {
        cout << "DEJA ETEINT";
    }
    
}