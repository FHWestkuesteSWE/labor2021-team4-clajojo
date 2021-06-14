#include "Sensor.h"

class Temperatursensor : public Sensor
{	//über (künstliche) Kommentare kann der SourceMonitor manipuliert werden --> Grenzen
	public:
		Temperatursensor();
		Temperatursensor(int sensorNr, string name, float StartTemp);
		~Temperatursensor();
		void setTemperatur(float temp);

	private:
};
