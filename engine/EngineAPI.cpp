#include "EngineAPI.hpp"

EXPOSE_SINGLE_INTERFACE(CEngineAPI, IEngineAPI, VENGINE_LAUNCHER_API_VERSION)

bool CEngineAPI::Connect( CreateInterfaceFn factory )
{
	return true;
};

void CEngineAPI::Disconnect()
{
};

void *CEngineAPI::QueryInterface( const char *pInterfaceName )
{
	return nullptr;
};

InitReturnVal_t CEngineAPI::Init()
{
	return INIT_OK;
};

void CEngineAPI::Shutdown()
{
};

void CEngineAPI::SetStartupInfo( StartupInfo_t &info )
{
};

int CEngineAPI::Run()
{
	return RUN_OK;
};

void CEngineAPI::SetEngineWindow( void *hWnd )
{
};

void CEngineAPI::PostConsoleCommand( const char *pConsoleCommand )
{
};

bool CEngineAPI::IsRunningSimulation() const
{
	return true;
};

void CEngineAPI::ActivateSimulation( bool bActive )
{
};

void CEngineAPI::SetMap( const char *pMapName )
{
};