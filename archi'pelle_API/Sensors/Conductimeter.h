#ifndef CONDUCTIMETER_H_
#define CONDUCTIMETER_H_

#include "AbstractSensor.h"

class Conductimeter : public AbstractSensor
{
    private:
    /*data*/

    public:
    Conductimeter();
    Conductimeter(float minValue);
    Conductimeter(float maxValue);
    Conductimeter(float minValue, float maxValue);
    ~Conductimeter();
    void print();
};

#endif