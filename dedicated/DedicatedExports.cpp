#include "DedicatedExports.hpp"

EXPOSE_SINGLE_INTERFACE(CDedicatedExports, IDedicatedExports, VENGINE_DEDICATEDEXPORTS_API_VERSION)

bool CDedicatedExports::Connect(CreateInterfaceFn factory)
{
	return true;
};

void CDedicatedExports::Disconnect()
{
};

void *CDedicatedExports::QueryInterface(const char *pInterfaceName)
{
	return nullptr;
};

InitReturnVal_t CDedicatedExports::Init()
{
	return INIT_OK;
};

void CDedicatedExports::Shutdown()
{
};

void CDedicatedExports::Sys_Prints(char *text)
{
	// Sh1ft: TODO
};

void CDedicatedExports::RunServer()
{
	// Sh1ft: TODO
};