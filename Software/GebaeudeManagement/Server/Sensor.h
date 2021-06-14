#include <string.h>
#include <string>
using namespace std;

/*Sensor is the superclass for all Sensors which include the "Temperatursensor"- and "Durchflusssensor"-Class (yet to be written, 06.06.21).
Every Sensor has the attributes value ("sensorwert"), unit ("einheit") and a number for identification ("sensorNr").
The superclass contains a get() method for the "sensorwert" and set() methods for "sensorNr" and "einheit".*/

class Sensor
{
	public:
		Sensor();
		~Sensor();

		float getSensorwert();
		void setSensorNr(int sensorNr);
		void setEinheit(string einehit);
		void setSensorName(string name);


	protected:
		float sensorwert;
		string einheit;
		int SensorNr;
		string SensorName;

};