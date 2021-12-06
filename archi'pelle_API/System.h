//
// Created by Quentin on 06/12/2021.
//

#ifndef WKS_BE_SYSTEM_H
#define WKS_BE_SYSTEM_H
#include "phMeter.h"
#include "conductiMeter.h"

class System {
private :
    phMeter phMeter;
    conductiMeter conductiMeter;
public:
    System(const class phMeter &phMeter, const class conductiMeter &conductiMeter);
    float getPh();
    float getCond();
    virtual ~System();
};


#endif //WKS_BE_SYSTEM_H
