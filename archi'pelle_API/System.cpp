//
// Created by Quentin on 06/12/2021.
//

#include "System.h"

System::System(const class phMeter &phMeter, const class conductiMeter &conductiMeter) : phMeter(phMeter),
                                                                             conductiMeter(conductiMeter) {}

float System::getPh() {
    return this->phMeter.getValue();
}

float System::getCond() {
    return this->conductiMeter.getValue();
}


