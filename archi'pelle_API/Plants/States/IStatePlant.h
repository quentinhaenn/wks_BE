//
// Created by Quentin on 06/12/2021.
//

#ifndef WKS_BE_ISTATEPLANT_H
#define WKS_BE_ISTATEPLANT_H

#include "Plants/Plant.h"

class Plant;

class IStatePlant {

protected:
    Plant *plant;

public :
    virtual ~IStatePlant();
    void setPlant(Plant *newPlant);
    virtual void switchBad() = 0;
    virtual void switchGood() = 0;


};


#endif //WKS_BE_ISTATEPLANT_H
