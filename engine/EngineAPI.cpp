#include "EngineAPI.hpp"
#include "IEngine.hpp"

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
	gpEngine->Init();
	return INIT_OK;
};

void CEngineAPI::Shutdown()
{
	gpEngine->Shutdown();
};

void CEngineAPI::SetStartupInfo( StartupInfo_t &info )
{
};

int CEngineAPI::Run()
{
	while(true)
		gpEngine->Frame();

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