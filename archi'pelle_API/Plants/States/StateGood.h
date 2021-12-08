//
// Created by Quentin on 06/12/2021.
//

#ifndef WKS_BE_STATEGOOD_H
#define WKS_BE_STATEGOOD_H

#include "IStatePlant.h"

class StateGood : public IStatePlant{
public:
    void switchBad() override;

    void switchGood() override;
};


#endif //WKS_BE_STATEGOOD_H
