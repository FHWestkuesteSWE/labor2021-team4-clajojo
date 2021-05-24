#include "Sensor.h"
#include <iostream>

Sensor::Sensor()
{
	sensorwert = 0;
}

Sensor::~Sensor()
{
}

float Sensor::getSensorwert()
{
	return sensorwert;
}
