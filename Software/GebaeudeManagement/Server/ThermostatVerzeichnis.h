#pragma once
#include "Thermostat.h"
class ThermostatVerzeichnis
{
	public:
		ThermostatVerzeichnis();
		~ThermostatVerzeichnis();

		void setAnzahlThermostate(int anzahl);
		int getAnzahlThermostate();
		Thermostat* getThermostatObjekt(int objektPosition);
		void AddNewThermostatObject(int objektPosition, int Nr, string name, float StartTemp);

	private:
		Thermostat* ThermostatObjekt[10];
		int AnzahlObjekte = 0;
};

