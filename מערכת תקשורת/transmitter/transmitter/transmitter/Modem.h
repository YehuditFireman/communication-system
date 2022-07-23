#include "UDPserver.h"
#include "UDPclient.h"
#pragma once
class Modem
{
private:
	UDPserver server;
	UDPclient client;
public:
	Modem();
	~Modem(); 
};

