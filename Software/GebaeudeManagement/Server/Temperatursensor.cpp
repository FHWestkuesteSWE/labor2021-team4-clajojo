#include "Temperatursensor.h"

//Konstruktor 1: wird immer aufgerufen und soll nicht gelöscht werden
Temperatursensor::Temperatursensor()
{
	
}

//Konstruktor 2
Temperatursensor::Temperatursensor(int sensorNr, string name, float StartTemp)
{
	Temperatursensor::SensorNr = sensorNr;
	Temperatursensor::name = name;
	Temperatursensor::sensorwert = StartTemp;
}

//Destruktor
Temperatursensor::~Temperatursensor()
{
}

void Temperatursensor::setTemperatur(float temp)
{
	
}


