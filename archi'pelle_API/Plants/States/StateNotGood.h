//
// Created by Quentin on 06/12/2021.
//

#ifndef WKS_BE_STATENOTGOOD_H
#define WKS_BE_STATENOTGOOD_H


#include "IStatePlant.h"

class StateNotGood : public IStatePlant {

public:
    void switchBad() override;
    void switchGood() override;

    StateNotGood();
};


#endif //WKS_BE_STATENOTGOOD_H
