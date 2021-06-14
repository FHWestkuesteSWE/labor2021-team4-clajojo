#include "ThermostatVerzeichnis.h"


ThermostatVerzeichnis::ThermostatVerzeichnis()
{
}

ThermostatVerzeichnis::~ThermostatVerzeichnis()
{
}

void ThermostatVerzeichnis::setAnzahlThermostate(int anzahl)
{
	AnzahlObjekte = anzahl;
}

int ThermostatVerzeichnis::getAnzahlThermostate()
{
	return AnzahlObjekte;
}

Thermostat* ThermostatVerzeichnis::getThermostatObjekt(int objektPosition)
{
	return ThermostatObjekt[objektPosition];
}

void ThermostatVerzeichnis::AddNewThermostatObject(int objektPosition, int Nr, string name, float StartTemp)
{
	ThermostatObjekt[objektPosition] = new Thermostat(Nr, name, StartTemp);
}
