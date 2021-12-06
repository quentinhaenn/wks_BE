//
// Created by Quentin on 06/12/2021.
//

#ifndef WKS_BE_PHMETER_H
#define WKS_BE_PHMETER_H


#include "AbstractSensor.h"

class phMeter : public AbstractSensor {
public:
    phMeter(float minValue, float maxValue, float mesuredValue);

    float getValue() const override;
    void Alert() override;

    void setMin(float newVal) override;

    void setMax(float newVal) override;

    virtual ~phMeter();
};


#endif //WKS_BE_PHMETER_H
