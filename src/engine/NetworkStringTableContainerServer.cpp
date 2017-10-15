#include "NetworkStringTableContainer.hpp"

EXPOSE_SINGLE_INTERFACE(CNetworkStringTableContainerServer, INetworkStringTableContainer, INTERFACENAME_NETWORKSTRINGTABLESERVER)

INetworkStringTable *CNetworkStringTableContainerServer::CreateStringTable( const char *tableName, int maxentries, int userdatafixedsize = 0, int userdatanetworkbits = 0 )
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

INetworkStringTable *CNetworkStringTableContainerServer::CreateStringTableEx( const char *tableName, int maxentries, int userdatafixedsize = 0, int userdatanetworkbits = 0, bool bIsFilenames = false )
{
	return nullptr;
};

void CNetworkStringTableContainerServer::SetAllowClientSideAddString( INetworkStringTable *table, bool bAllowClientSideAddString )
{
};