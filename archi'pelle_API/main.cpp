
#include <iostream>
#include "System.h"

using namespace std;
int main(){
    phMeter phMeter(0,50,35);
    conductiMeter conductiMeter(0,50,20);
    System system(phMeter, conductiMeter);
    float ph = system.getPh();
    float cond = system.getCond();
    cout << "Le PH est de : " << ph << "\n";
    cout << "La conductimétrie de : " << cond << "\n";


    return 0;
}