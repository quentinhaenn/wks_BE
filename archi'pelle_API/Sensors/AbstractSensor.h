#ifndef ABSTRACT_SENSOR_H_
#define ABSTRACT_SENSOR_H_

class AbstractSensor
{
private:
    float mesuredValue;

protected:
    float minValue;
    float maxValue;

public:
    AbstractSensor(); //constructeur de base de la classe
    ~AbstractSensor(); // destructeur de la classe
    AbstractSensor(float minValue, float maxValue); //constructeur surchargé 
    AbstractSensor(float minValue); //constructeur surchargé
    AbstractSensor(float maxValue); //constructeur surchargé
    float getValue() const;
    float setMin(float newVal);
    float setMax(float newVal);

};




#endif