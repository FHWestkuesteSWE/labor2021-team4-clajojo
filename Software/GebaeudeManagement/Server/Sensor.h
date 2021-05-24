#pragma once
class Sensor
{
public:
	float getTemp(int id);

protected:
	const int id;
	float temp;
};

