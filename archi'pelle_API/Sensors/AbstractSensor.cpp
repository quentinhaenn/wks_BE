#include <iostream>
#include <string>
#include "AbstractSensor.h"

using namespace std;

class AbstractSensor
{
private:
    float mesuredValue;

protected:
    float minValue;
    float maxValue;

public:
    AbstractSensor();
    AbstractSensor(float minValue, float maxValue);
    AbstractSensor(float minValue);
    AbstractSensor(float maxValue);
    ~AbstractSensor();
    void Alert();
    float getValue() const;
    void setMin(float newVal);
    void setMax(float newVal);

};

AbstractSensor::AbstractSensor()
{
    minValue = 0.0;
    maxValue = 0.0;
    mesuredValue = 0.0;
}

AbstractSensor::AbstractSensor(float minValue, float maxValue)
{
    this->maxValue = maxValue;
    this->minValue = minValue;
    mesuredValue = 0.0;
}

AbstractSensor::AbstractSensor(float minValue)
{
    this->minValue = minValue;
    maxValue = 0.0;
    mesuredValue = 0.0;
}

AbstractSensor::AbstractSensor(float maxValue)
{
    this->maxValue = maxValue;
    minValue = 0.0;
    mesuredValue = 0.0;
}

AbstractSensor::~AbstractSensor()
{
}

void AbstractSensor::Alert()
{

}

float AbstractSensor::getValue() const
{
    return mesuredValue;
}

void AbstractSensor::setMin(float newVal)
{
    this->minValue = newVal;
}

void AbstractSensor::setMax(float newVal)
{
    this->maxValue = newVal;
}


