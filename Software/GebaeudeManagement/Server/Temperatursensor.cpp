#include "Temperatursensor.h"

//Konstruktor 1: wird immer aufgerufen und soll nicht gelöscht werden
Temperatursensor::Temperatursensor()
{
	
}

//Konstruktor 2
Temperatursensor::Temperatursensor(int sensorNr, string einheit)
{
	Temperatursensor::SensorNr = sensorNr;
	Temperatursensor::einheit = einheit;
}

//Destruktor
Temperatursensor::~Temperatursensor()
{
}

void Temperatursensor::setTemperatur()
{
	if (SensorNr == 0) {
		sensorwert = 25;
	}
	else if (SensorNr == 1)
	{
		sensorwert = 15;
	}
	else {
		sensorwert = 888;
	}
}
