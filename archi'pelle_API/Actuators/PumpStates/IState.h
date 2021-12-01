#ifndef ISTATE_H_
#define ISTATE_H_

class IState
{

public:

    virtual ~IState();
    virtual void switchOn();
    virtual void switchOff();
};



#endif