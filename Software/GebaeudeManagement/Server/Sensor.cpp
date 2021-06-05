#include "Sensor.h"
#include <iostream>

//Konstruktor
Sensor::Sensor()
{
	sensorwert = 0;
}

//Destruktor
Sensor::~Sensor()
{
}

float Sensor::getSensorwert()
{
	return sensorwert;
}
