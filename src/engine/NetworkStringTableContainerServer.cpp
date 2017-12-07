#include "NetworkStringTableContainerServer.hpp"
#include "tier1/interface.h"

EXPOSE_SINGLE_INTERFACE(CNetworkStringTableContainerServer, INetworkStringTableContainer, INTERFACENAME_NETWORKSTRINGTABLESERVER);

INetworkStringTable *CNetworkStringTableContainerServer::CreateStringTable( const char *tableName, int maxentries, int userdatafixedsize, int userdatanetworkbits )
{
	return nullptr;
};

void CNetworkStringTableContainerServer::RemoveAllTables()
{
};

INetworkStringTable *CNetworkStringTableContainerServer::FindTable( const char *tableName ) const
{
	return nullptr;
};

INetworkStringTable *CNetworkStringTableContainerServer::GetTable( TABLEID stringTable ) const
{
	return nullptr;
};

int CNetworkStringTableContainerServer::GetNumTables() const
{
	return 0;
};

INetworkStringTable *CNetworkStringTableContainerServer::CreateStringTableEx( const char *tableName, int maxentries, int userdatafixedsize, int userdatanetworkbits, bool bIsFilenames)
{
	return nullptr;
};

void CNetworkStringTableContainerServer::SetAllowClientSideAddString( INetworkStringTable *table, bool bAllowClientSideAddString )
{
};