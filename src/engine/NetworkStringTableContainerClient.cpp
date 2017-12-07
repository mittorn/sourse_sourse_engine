#include "NetworkStringTableContainerClient.hpp"
#include "tier1/interface.h"

EXPOSE_SINGLE_INTERFACE(CNetworkStringTableContainerClient, INetworkStringTableContainer, INTERFACENAME_NETWORKSTRINGTABLECLIENT);

INetworkStringTable *CNetworkStringTableContainerClient::CreateStringTable( const char *tableName, int maxentries, int userdatafixedsize, int userdatanetworkbits)
{
	return nullptr;
};

void CNetworkStringTableContainerClient::RemoveAllTables()
{
};

INetworkStringTable *CNetworkStringTableContainerClient::FindTable( const char *tableName ) const
{
	return nullptr;
};

INetworkStringTable *CNetworkStringTableContainerClient::GetTable( TABLEID stringTable ) const
{
	return nullptr;
};

int CNetworkStringTableContainerClient::GetNumTables() const
{
	return 0;
};

INetworkStringTable *CNetworkStringTableContainerClient::CreateStringTableEx( const char *tableName, int maxentries, int userdatafixedsize, int userdatanetworkbits, bool bIsFilenames)
{
	return nullptr;
};

void CNetworkStringTableContainerClient::SetAllowClientSideAddString( INetworkStringTable *table, bool bAllowClientSideAddString )
{
};