//
// Created by Quentin on 06/12/2021.
//

#include <string>
#include <utility>
#include "Plant.h"


Plant::Plant(IStatePlant *statePlant) : currentState(nullptr){
    this->switchTo(statePlant);
}

Plant::Plant(IStatePlant *statePlant, std::string name) : currentState(nullptr) {
    this->switchTo(statePlant);
    this->plantName = std::move(name);
}

void Plant::setPhValues(float min, float max) {
    this->lowerpH = min;
    this->higherPh = max;

}

std::string Plant::getPhValues() const {
    return ("Ph edges : \n Min :" + std::to_string(this->lowerpH) + "\n Max : "
            + std::to_string(this->higherPh));
}

std::string Plant::getPlantName() const {
    return this->plantName;
}

void Plant::setPlantName(std::string newName) {
    this->plantName = std::move(newName);
}

Plant::~Plant() {
    delete currentState;
}

void Plant::switchTo(IStatePlant *state) {
    if (this->currentState != nullptr)
        delete this->currentState;
    this->currentState = state;
    this->currentState->setPlant(this);
}

void Plant::switchGood(){
    this->currentState->switchGood();
}

void Plant::switchBad(){
    this->currentState->switchBad();
}
