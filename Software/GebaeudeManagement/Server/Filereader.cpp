#include "Filereader.h"
#include "Thermostat.h"
#include "ThermostatVerzeichnis.h"
#include "TemperaturSensorVerzeichnis.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <list>
#include <iterator>

using namespace std;

void Filereader::readFile()
{
}
void Filereader::ErzeugeThermostate()
{
    ifstream datei("Thermostate.dat");
    string zeile;
    ThermostatVerzeichnis Thermostate;
    while (getline(datei, zeile)) {
        stringstream buffer(zeile);
        int Nr = 0;
        string Name;
        buffer >> Nr >> Name;

        Thermostate.AddNewThermostatObject(Nr, Nr, Name, 25);
        Thermostate.setAnzahlThermostate(Nr);
    }
}
void Filereader::ErzeugeTemperatursensoren()
{
    ifstream datei("TemperaturSensoren.dat");
    string zeile;
    TemperaturSensorVerzeichnis Temperatursensoren;
    while (getline(datei, zeile)) {
        stringstream buffer(zeile);
        int Nr = 0;
        string Name;
        buffer >> Nr >> Name;

        Temperatursensoren.AddNewTemperaturSensorObject(Nr, Nr, Name, 25);
        Temperatursensoren.setAnzahlTemperaturSensoren(Nr);
    }
}