
#include "Thermostat.h"


Thermostat::Thermostat()
{
}
Thermostat::Thermostat(int nr, string name, float temp)
{
	Thermostat::name = name;
	Thermostat::Nr = nr;
	Thermostat::solltemperatur = temp;
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
