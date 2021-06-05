#include "pch.h"
#include "CppUnitTest.h"
#include "Thermostat.h"
#include "Temperatursensor.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestServer
{
	TEST_CLASS(UnitTestServer)
	{
	public:
		
		TEST_METHOD(TestThemostat)
		{
			Thermostat thermo;
			float neueTemp = 33;
			float aktTemp;
			thermo.setSolltemperatur(neueTemp);
			aktTemp = thermo.getsolltemperatur();
			Assert::AreEqual(aktTemp, neueTemp);
		}

		TEST_METHOD(TestTemperatursensor)
		{
			Temperatursensor temp(0, "Celsius");
			float tempInnen = 25;
			temp.setTemperatur();
			float aktTemp = temp.Sensor::getSensorwert();
			Assert::AreEqual(aktTemp, tempInnen);
		}

		TEST_METHOD(TestTemperatursensorNoTemp)
		{
			Temperatursensor temp(2, "Celsius");
			float tempInnen = 888;
			temp.setTemperatur();
			float aktTemp = temp.Sensor::getSensorwert();
			Assert::AreEqual(aktTemp, tempInnen);
		}
	};
}