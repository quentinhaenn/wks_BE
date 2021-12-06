//
// Created by Quentin on 06/12/2021.
//

#include <iostream>
#include "conductiMeter.h"

void conductiMeter::Alert() {
    cout << "Alert from conductimeter !";
}

float conductiMeter::getValue() const {
    return 0;
}

conductiMeter::conductiMeter(float minValue, float maxValue, float mesuredValue) : AbstractSensor(minValue, maxValue,
                                                                                                  mesuredValue) {}

conductiMeter::conductiMeter() = default;

conductiMeter::~conductiMeter() = default;

void conductiMeter::setMin(float newVal) {
    this->minValue = newVal;
}

void conductiMeter::setMax(float newVal) {
    this->maxValue = newVal;
}
