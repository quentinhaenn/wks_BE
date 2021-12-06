//
// Created by Quentin on 06/12/2021.
//

#ifndef WKS_BE_ABSTRACTSENSOR_H
#define WKS_BE_ABSTRACTSENSOR_H
#include <cstdio>

using namespace std;

class AbstractSensor {

public :

    AbstractSensor(float minValue, float maxValue, float mesuredValue);

    AbstractSensor();

    virtual void Alert()=0;
    virtual float getValue() const = 0;
    virtual void setMin(float newVal) = 0;
    virtual void setMax(float newVal) = 0;


protected :
    float minValue{};
    float maxValue{};


private:
    float mesuredValue{};

};


#endif //WKS_BE_ABSTRACTSENSOR_H
