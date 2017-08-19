#include "DedicatedServerAPI.hpp"
#include "IEngine.hpp"

EXPOSE_SINGLE_INTERFACE(CDedicatedServerAPI, IDedicatedServerAPI, VENGINE_HLDS_API_VERSION)

bool CDedicatedServerAPI::Connect(CreateInterfaceFn factory)
{
	return true;
};

void CDedicatedServerAPI::Disconnect()
{
};

void *CDedicatedServerAPI::QueryInterface(const char *pInterfaceName)
{
	return nullptr;
};

InitReturnVal_t CDedicatedServerAPI::Init()
{
	gpEngine->Init();
	return INIT_OK;
};

void CDedicatedServerAPI::Shutdown()
{
	gpEngine->Shutdown();
};

bool CDedicatedServerAPI::ModInit(ModInfo_t &info)
{
	return true;
};

void CDedicatedServerAPI::ModShutdown()
{
};

bool CDedicatedServerAPI::RunFrame()
{
	gpEngine->Frame(); // GetEngine()->
	return true;
};

void CDedicatedServerAPI::AddConsoleText(char *tex)
{
};

void CDedicatedServerAPI::UpdateStatus(float *fps, int *nActive, int *nMaxPlayers, char *pszMap, int maxlen)
{
};

void CDedicatedServerAPI::UpdateHostname(char *pszHostname, int maxlen)
{
};