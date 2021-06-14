#include <string.h>
#include <string>
using namespace std;

class Thermostat
{
	public:
		Thermostat();
		Thermostat(int nr, string name, float temp);
		~Thermostat();

		float getsolltemperatur();
		void setSolltemperatur(float Wert);

	private:
		float solltemperatur = 0;
		string name;
		int Nr = 0;
};