#include "Temperatursensor.h"

Temperatursensor::Temperatursensor()
{
	
}

Temperatursensor::Temperatursensor(int sensorNr, string einheit)
{
	Temperatursensor::SensorNr = sensorNr;
	Temperatursensor::einheit = einheit;
}


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
