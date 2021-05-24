class Thermostat
{
	public:
		Thermostat();
		~Thermostat();

		float getsolltemperatur();
		void setSolltemperatur(float Wert);

	private:
		float solltemperatur;
};