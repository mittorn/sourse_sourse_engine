#pragma once

#include "icvar.h"

class CCvarQuery final : public ICvarQuery
{
public:
	CCvarQuery() = default;
	~CCvarQuery() = default;
	
	bool Connect( CreateInterfaceFn factory ) override;
	void Disconnect() override;

	void *QueryInterface( const char *pInterfaceName ) override;

	InitReturnVal_t Init() override;
	void Shutdown() override;
	
	bool AreConVarsLinkable(const ConVar *child, const ConVar *parent) override;
};