//
// Created by Quentin on 06/12/2021.
//

#ifndef WKS_BE_PLANT_H
#define WKS_BE_PLANT_H


#include "Plants/States/IStatePlant.h"
#include <string>

class IStatePlant;

class Plant {

private :

    std::string plantName;
    float higherPh{};
    float lowerpH{};

    IStatePlant* currentState;


public:
    Plant(IStatePlant* statePlant);
    Plant(IStatePlant* statePlant, std::string name);
    void setPhValues(float min, float max);
    std::string getPhValues() const;
    std::string  getPlantName() const;
    void setPlantName(std::string newName);
    void switchTo(IStatePlant *state);

    ~Plant();

    void switchGood();

    void switchBad();
};


#endif //WKS_BE_PLANT_H
