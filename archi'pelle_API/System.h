#ifndef SYSTEM_H_
#define SYSTEM_H_

#include "./plant/Plant.h"
#include "./Sensors/Conductimeter.h"
#include "./Sensors/HeatSensor.h"
#include "./Sensors/PhMeter.h"
#include "./Sensors/Photoresistor.h"
#include "./Actuators/Pump.h"


class System
{
private:
    Phmeter m_phmeter;
    Plant m_plant;
    Conductimeter m_conductimeter;
    HeatSensor m_heatSensor;
    Photoresistor m_photoresistor;
    Pump m_pump;

public:
    System();
    ~System();
};



#endif