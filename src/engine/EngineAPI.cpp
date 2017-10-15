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
	if(!strcmp(pInterfaceName, VENGINE_LAUNCHER_API_VERSION))
		return static_cast<IEngineAPI*>(this);
	
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
	//mStartupInfo = info;
};

int CEngineAPI::Run()
{
	while(true)
		gpEngine->Frame();

	return RUN_OK;
};

void CEngineAPI::SetEngineWindow( void *hWnd )
{
	//mainwindow = (WinHandle_t)hWnd;
};

void CEngineAPI::PostConsoleCommand( const char *pConsoleCommand )
{
	//Cbuf_AddText(pConsoleCommand);
};

bool CEngineAPI::IsRunningSimulation() const
{
	//return mbSimulationActive;
	return true;
};

void CEngineAPI::ActivateSimulation( bool bActive )
{
	//mbSimulationActive = bActive;
};

void CEngineAPI::SetMap( const char *pMapName )
{
	//Cbuf_AddText("changelevel %s", pMapName);
};