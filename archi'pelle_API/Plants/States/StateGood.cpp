//
// Created by Quentin on 06/12/2021.
//

#include <iostream>
#include "StateGood.h"
#include "StateNotGood.h"


void StateGood::switchBad() {
    std::cout<<"State good switches to not good!" << std::endl;
    this->plant->switchTo(new StateNotGood);
}

void StateGood::switchGood() {
    std::cout<<"TOUT VA DEJA IENB CONO"<< std::endl;
}
