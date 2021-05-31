#include "pch.h"
#include "CppUnitTest.h"
#include "Thermostat.h"

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
	};
}
