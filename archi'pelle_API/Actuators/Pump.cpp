//
// Created by Quentin on 08/12/2021.
//

#include "Pump.h"

Pump::Pump() {
}

Pump::Pump(int activationDuration) {
    this->activationDuration = activationDuration;
}

void Pump::switchOn() {

}

void Pump::switchOff() {

}

int Pump::getActivTime() const {
    return this->activationDuration;
}

void Pump::setActiveTime(int newTime) {
    this->activationDuration = newTime;
}
