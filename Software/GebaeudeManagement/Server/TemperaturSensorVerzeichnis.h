#pragma once
#include "Temperatursensor.h"
class TemperaturSensorVerzeichnis
{
	public:
		TemperaturSensorVerzeichnis();
		~TemperaturSensorVerzeichnis();

		void setAnzahlTemperaturSensoren(int anzahl);
		int getAnzahlTemperaturSensoren();
		Temperatursensor* getTemperaturSensorObjekt(int objektPosition);
		void AddNewTemperaturSensorObject(int objektPosition, int Nr, string name, float StartTemp);

	private:
		Temperatursensor* TemperaturSensorObjekt[10];
		int AnzahlObjekte = 0;
};

