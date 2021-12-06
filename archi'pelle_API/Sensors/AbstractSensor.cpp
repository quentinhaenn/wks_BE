//
// Created by Quentin on 06/12/2021.
//

#include <iostream>
#include "AbstractSensor.h"

using namespace std;

void AbstractSensor::Alert() {
    cout << "ALERTE !" ;
}

float AbstractSensor::getValue() const {
    return this->mesuredValue;
}

void AbstractSensor::setMax(float newVal) {
}

void AbstractSensor::setMin(float newVal) {
}

AbstractSensor::AbstractSensor(float minValue, float maxValue, float mesuredValue) : minValue(minValue),
                                                                                     maxValue(maxValue),
                                                                                     mesuredValue(mesuredValue) {}

AbstractSensor::AbstractSensor() = default;


