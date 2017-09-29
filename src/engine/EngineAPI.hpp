#pragma once

#include "engine_launcher_api.h"

class CEngineAPI final : public IEngineAPI
{
public:
	CEngineAPI() = default;
	~CEngineAPI() = default;
	
	bool Connect( CreateInterfaceFn factory ) override;
	void Disconnect() override;

	void *QueryInterface( const char *pInterfaceName ) override;

	InitReturnVal_t Init() override;
	void Shutdown() override;
	
	void SetStartupInfo( StartupInfo_t &info ) override;

	int Run() override;

	void SetEngineWindow( void *hWnd ) override;

	void PostConsoleCommand( const char *pConsoleCommand ) override;

	bool IsRunningSimulation() const override;
	void ActivateSimulation( bool bActive ) override;

	void SetMap( const char *pMapName ) override;
};