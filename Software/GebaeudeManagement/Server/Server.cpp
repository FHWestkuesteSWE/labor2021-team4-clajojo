#define _CRT_SECURE_NO_WARNINGS
#include "Server.h"
#include <string.h>
#include <algorithm>
#include "Filereader.h"

Server::Server()
{
	Filereader reader;
	reader.ErzeugeTemperatursensoren();
	reader.ErzeugeThermostate();
}

void Server::start(char port[]) {
	BasicServer::start(port);
}

void Server::processRequest(char req[], char ans[]) {
	//strncpy(ans, req, std::min<int>(1024, strlen(ans) + 1));
	t.setTemperatur();
	float n = 0.5;
	switch (req[0])
	{
	case 'a':
		n = t.getSensorwert();
		break;
	case 'i':
		n = t.getSensorwert();
		break;
	}
	sprintf(ans, "%f", n);
}

Server::~Server()
{
}
