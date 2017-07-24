#pragma once

#include "idedicatedexports.h"

class CDedicatedExports final : public IDedicatedExports
{
public:
	CDedicatedExports() = default;
	~CDedicatedExports() = default;
	
	bool Connect(CreateInterfaceFn factory) override;
	void Disconnect() override;

	void *QueryInterface(const char *pInterfaceName) override;

	InitReturnVal_t Init() override;
	void Shutdown() override;
	
	void Sys_Prints(char *text) override;
	
	void RunServer() override;
};