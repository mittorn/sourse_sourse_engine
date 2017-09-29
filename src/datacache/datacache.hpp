#pragma once

#include "datacache/idatacache.h"

class CDataCache final : public IDataCache
{
public:
	CDataCache() = default;
	~CDataCache() = default;
	
	bool Connect( CreateInterfaceFn factory ) override;
	void Disconnect() override;

	void *QueryInterface( const char *pInterfaceName ) override;

	InitReturnVal_t Init() override;
	void Shutdown() override;
	
	void SetSize( int nMaxBytes ) override;
	void SetOptions( unsigned options ) override;
	void SetSectionLimits( const char *pszSectionName, const DataCacheLimits_t &limits ) override;

	void GetStatus( DataCacheStatus_t *pStatus, DataCacheLimits_t *pLimits = NULL ) override;

	IDataCacheSection *AddSection( IDataCacheClient *pClient, const char *pszSectionName, const DataCacheLimits_t &limits = DataCacheLimits_t(), bool bSupportFastFind = false ) override;

	void RemoveSection( const char *pszClientName, bool bCallFlush = true ) override;
	void RemoveSection( IDataCacheSection *pSection, bool bCallFlush = true )	{ if ( pSection) RemoveSection( pSection->GetName() ); }

	IDataCacheSection *FindSection( const char *pszClientName ) override;

	unsigned Purge( unsigned nBytes ) override;

	unsigned Flush( bool bUnlockedOnly = true, bool bNotify = true ) override;

	void OutputReport( DataCacheReportType_t reportType = DC_SUMMARY_REPORT, const char *pszSection = NULL ) override;
};