#include "Sensor.h"

class Temperatursensor : public Sensor
{
	public:
		Temperatursensor();
		Temperatursensor(int sensorNr, string einheit);
		~Temperatursensor();
		void setTemperatur();

	//private:
		
};
