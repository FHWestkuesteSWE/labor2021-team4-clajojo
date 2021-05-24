#include <string.h>
#include <string>
using namespace std;

class Sensor
{
	public:
		Sensor();
		~Sensor();

		float getSensorwert();
		void setSensorNr(int sensorNr);
		void setEinheit(string einehit);


	protected:
		float sensorwert;
		string einheit;
		int SensorNr;

};