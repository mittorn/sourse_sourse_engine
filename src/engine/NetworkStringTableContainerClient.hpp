#pragma once

#include "networkstringtabledefs.h"

class CNetworkStringTableContainerClient final : public INetworkStringTableContainer
{
public:
	CNetworkStringTableContainerClient() = default;
	~CNetworkStringTableContainerClient() = default;
	
	INetworkStringTable *CreateStringTable( const char *tableName, int maxentries, int userdatafixedsize = 0, int userdatanetworkbits = 0 ) override;
	void RemoveAllTables() override;
	
	INetworkStringTable *FindTable( const char *tableName ) const override;
	INetworkStringTable *GetTable( TABLEID stringTable ) const override;
	int GetNumTables() const override;

	INetworkStringTable *CreateStringTableEx( const char *tableName, int maxentries, int userdatafixedsize = 0, int userdatanetworkbits = 0, bool bIsFilenames = false ) override;
	void SetAllowClientSideAddString( INetworkStringTable *table, bool bAllowClientSideAddString ) override;
};