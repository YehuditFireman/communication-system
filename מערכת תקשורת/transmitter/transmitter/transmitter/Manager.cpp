#include "Manager.h"
#define SERVERPORT 8888
#define CLIENTPORT 8889
Manager::Manager()
{
	server.Bind(SERVERPORT);
	server.recive();
}
Manager::~Manager() 
{
}


