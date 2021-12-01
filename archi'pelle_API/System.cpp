#include <iostream>
#include "System.h"

class System
{
private:
    Phmeter *m_phmeter;
    Plant *m_plant;
    Conductimeter *m_conductimeter;
    HeatSensor *m_heatSensor;
    Photoresistor *m_photoresistor;
    Pump *m_pump;

public:
    System();
    ~System();
    void print();
};

System::System()
{
    m_phmeter = new Phmeter();
    m_photoresistor = new Photoresistor();
    m_plant = new Plant();
    m_pump = new Pump();
    m_conductimeter = new Conductimeter();
    m_heatSensor = new HeatSensor();

}

System::~System()
{
    delete m_heatSensor;
    delete m_phmeter;
    delete m_plant;
    delete m_pump;
    delete m_conductimeter;
    delete m_photoresistor;
}

void System::print()
{
    Conductimeter::print();
}