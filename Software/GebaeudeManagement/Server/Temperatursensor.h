#include "Sensor.h"

class Temperatursensor : public Sensor
{	//�ber (k�nstliche) Kommentare kann der SourceMonitor manipuliert werden --> Grenzen
	public:
		Temperatursensor();
		Temperatursensor(int sensorNr, std::string einheit);
		~Temperatursensor();
		void setTemperatur();

	//private:
		
};
