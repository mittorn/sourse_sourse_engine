#pragma once

#include "engine_hlds_api.h"

class CDedicatedServerAPI final : public IDedicatedServerAPI
{
public:
	CDedicatedServerAPI() = default;
	~CDedicatedServerAPI() = default;
	
	bool Connect(CreateInterfaceFn factory) override;
	void Disconnect() override;

	void *QueryInterface(const char *pInterfaceName) override;

	InitReturnVal_t Init() override;
	void Shutdown() override;
	
	bool ModInit(ModInfo_t &info) override;
	void ModShutdown() override;
	
	bool RunFrame() override;
	
	void AddConsoleText(char *tex) override;
	
	void UpdateStatus(float *fps, int *nActive, int *nMaxPlayers, char *pszMap, int maxlen) override;
	void UpdateHostname(char *pszHostname, int maxlen) override;
};