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

void Sensor::setSensorNr(int sensorNr) {
	Sensor::sensorNr = sensorNr;
}

float Sensor::getSensorwert()
{
	return sensorwert;
}
