#include "Server.h"
#include "Filereader.h"

int main(int argc, char* argv[]) {
	//Temperatursensor innen(0, "Celsius");
	//Temperatursensor au�en(1, "Celsius");

	Server s;
	s.start(argv[1]);
	return 0;
}