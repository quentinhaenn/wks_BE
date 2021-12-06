//
// Created by Quentin on 06/12/2021.
//

#include <iostream>
#include "phMeter.h"

float phMeter::getValue() const {
    return AbstractSensor::getValue();

}

void phMeter::Alert() {
    cout << "Alerte du Ph-mètre!";
}

void phMeter::setMin(float newVal) {
    this->minValue = newVal;
}

void phMeter::setMax(float newVal) {
    this->maxValue = newVal;
}

phMeter::phMeter(float minValue, float maxValue, float mesuredValue) : AbstractSensor(minValue, maxValue,
                                                                                      mesuredValue) {}

phMeter::~phMeter() = default;

