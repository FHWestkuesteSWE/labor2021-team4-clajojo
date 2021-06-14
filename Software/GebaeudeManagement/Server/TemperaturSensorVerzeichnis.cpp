#include "TemperaturSensorVerzeichnis.h"

TemperaturSensorVerzeichnis::TemperaturSensorVerzeichnis()
{
}

TemperaturSensorVerzeichnis::~TemperaturSensorVerzeichnis()
{
}

void TemperaturSensorVerzeichnis::setAnzahlTemperaturSensoren(int anzahl)
{
	AnzahlObjekte = anzahl;
}

int TemperaturSensorVerzeichnis::getAnzahlTemperaturSensoren()
{
	return AnzahlObjekte;
}

Temperatursensor* TemperaturSensorVerzeichnis::getTemperaturSensorObjekt(int objektPosition)
{
	return TemperaturSensorObjekt[objektPosition];
}

void TemperaturSensorVerzeichnis::AddNewTemperaturSensorObject(int objektPosition, int Nr, string name, float StartTemp)
{
	TemperaturSensorObjekt[objektPosition] = new Temperatursensor(Nr, name, StartTemp);
}
