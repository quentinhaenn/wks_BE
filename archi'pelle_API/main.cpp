
#include <iostream>
#include "System.h"
#include "Plants/States/StateGood.h"

using namespace std;
int main(){
    Plant PlantFraise(new StateGood);
    Plant PlantFramboise(new StateGood, "Framboises");
    phMeter phMeter(0,50,35);
    conductiMeter conductiMeter(0,50,20);
    System system(phMeter, conductiMeter, PlantFramboise);
    float ph = system.getPh();
    float cond = system.getCond();
    cout << "Le PH est de : " << ph << "\n";
    cout << "La conductimétrie de : " << cond << "\n";

    cout << "la première plante est :" << PlantFramboise.getPlantName() << "\n";

    PlantFraise.setPlantName("Fraise");

    cout << "la seconde plante est :" << PlantFraise.getPlantName() << "\n";

    PlantFramboise.setPhValues(0,50);

    cout << "les limites de la framboise sont " + PlantFramboise.getPhValues();

    return 0;
}