//
// Created by Quentin on 06/12/2021.
//

#include <iostream>
#include "StateNotGood.h"
#include "Plants/Plant.h"
#include "StateGood.h"


StateNotGood::StateNotGood() = default;

void StateNotGood::switchBad() {
    std::cout<<"JE SUIS DEJA MAUVAIS"<< std::endl;
}

void StateNotGood::switchGood() {
    std::cout<<"JE SWITCHE A GOOD" << std::endl;
    this->plant->switchTo(new StateGood);
}


