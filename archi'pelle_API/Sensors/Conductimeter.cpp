#include <iostream>
#include "Conductimeter.h"

class Conductimeter : public AbstractSensor
{
    private:
    /*data*/
    public:
    /*methods*/
    Conductimeter();
    Conductimeter(float minValue);
    Conductimeter(float maxValue);
    Conductimeter(float minValue, float maxValue);
    ~Conductimeter();
    void print();
};

Conductimeter::Conductimeter(float minValue, float maxValue) : AbstractSensor(minValue,maxValue) 
{

}

Conductimeter::Conductimeter() : AbstractSensor()
{
    this->maxValue = 10;
    this->minValue = 0;
}

void Conductimeter::print()
{   
    std::cout << "La valeur de conductimétrie est : \n" << mesuredValue;
}