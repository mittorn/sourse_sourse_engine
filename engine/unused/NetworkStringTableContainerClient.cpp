#include "NetworkStringTableContainer.hpp"

EXPOSE_SINGLE_INTERFACE(CNetworkStringTableContainerClient, INetworkStringTableContainer, INTERFACENAME_NETWORKSTRINGTABLECLIENT)

INetworkStringTable *CNetworkStringTableContainerClient::CreateStringTable( const char *tableName, int maxentries, int userdatafixedsize = 0, int userdatanetworkbits = 0 )
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

INetworkStringTable *CNetworkStringTableContainerClient::CreateStringTableEx( const char *tableName, int maxentries, int userdatafixedsize = 0, int userdatanetworkbits = 0, bool bIsFilenames = false )
{
	return nullptr;
};

void CNetworkStringTableContainerClient::SetAllowClientSideAddString( INetworkStringTable *table, bool bAllowClientSideAddString )
{
};