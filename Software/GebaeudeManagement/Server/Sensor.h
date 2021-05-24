#include <string.h>
#include <string>
using namespace std;

class Sensor
{
	public:
		Sensor();
		~Sensor();

		float getSensorwert();

	private:
		float sensorwert;
		const string einheit;
		int SensorNr;

};