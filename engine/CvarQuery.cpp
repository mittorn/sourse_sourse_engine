#include "CvarQuery.hpp"

//EXPOSE_SINGLE_INTERFACE(CCvarQuery, ICvarQuery, CVAR_QUERY_INTERFACE_VERSION)

bool CCvarQuery::Connect( CreateInterfaceFn factory )
{
	return true;
};

void CCvarQuery::Disconnect()
{
};

void *CCvarQuery::QueryInterface( const char *pInterfaceName )
{
	return nullptr;
};

InitReturnVal_t CCvarQuery::Init()
{
	return INIT_OK;
};

void CCvarQuery::Shutdown()
{
};

bool CCvarQuery::AreConVarsLinkable(const ConVar *child, const ConVar *parent)
{
	return false;
};