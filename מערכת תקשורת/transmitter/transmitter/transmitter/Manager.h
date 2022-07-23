#include "UDPserver.h"
#include "UDPclient.h"
#pragma once
class Manager
{
private:
	UDPserver server;
	UDPclient client;
public:

	Manager();
	~Manager();
};

