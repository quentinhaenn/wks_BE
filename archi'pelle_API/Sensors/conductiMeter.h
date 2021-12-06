//
// Created by Quentin on 06/12/2021.
//

#ifndef WKS_BE_CONDUCTIMETER_H
#define WKS_BE_CONDUCTIMETER_H


#include "AbstractSensor.h"

class conductiMeter : public AbstractSensor {
public:
    conductiMeter(float minValue, float maxValue, float mesuredValue);

    conductiMeter();

public:
    void Alert() override;

    float getValue() const override;

    virtual ~conductiMeter();

    void setMin(float newVal) override;

    void setMax(float newVal) override;

};


#endif //WKS_BE_CONDUCTIMETER_H
