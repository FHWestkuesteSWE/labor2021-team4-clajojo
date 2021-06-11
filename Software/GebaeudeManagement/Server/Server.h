#pragma once
#include "BasicServer.h"
#include "Temperatursensor.h"

class Server : public BasicServer
{
public:
	void start(char port[]);
	Server();
	~Server();

protected:
	Temperatursensor t;
	virtual void processRequest(char request[], char answer[]);
};

