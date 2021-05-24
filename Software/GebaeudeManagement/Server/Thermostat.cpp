
#include "Thermostat.h"


Thermostat::Thermostat()
{
}

Thermostat::~Thermostat()
{
}

float Thermostat::getsolltemperatur()
{
	return solltemperatur;
}

void Thermostat::setSolltemperatur(float Wert)
{
	solltemperatur = Wert;
}
