#include "datacache.hpp"

EXPOSE_SINGLE_INTERFACE(CDataCache, IDataCache, DATACACHE_INTERFACE_VERSION)

bool CDataCache::Connect( CreateInterfaceFn factory )
{
	return true;
};

void CDataCache::Disconnect()
{
};

void *CDataCache::QueryInterface( const char *pInterfaceName )
{
	return nullptr;
};

InitReturnVal_t CDataCache::Init()
{
	return INIT_OK;
};

void CDataCache::Shutdown()
{
};

void CDataCache::SetSize( int nMaxBytes )
{
};

void CDataCache::SetOptions( unsigned options )
{
};

void CDataCache::SetSectionLimits( const char *pszSectionName, const DataCacheLimits_t &limits )
{
};

void CDataCache::GetStatus( DataCacheStatus_t *pStatus, DataCacheLimits_t *pLimits = NULL )
{
};

IDataCacheSection *CDataCache::AddSection( IDataCacheClient *pClient, const char *pszSectionName, const DataCacheLimits_t &limits = DataCacheLimits_t(), bool bSupportFastFind = false )
{
	return nullptr;
};

void CDataCache::RemoveSection( const char *pszClientName, bool bCallFlush = true )
{
};

void CDataCache::RemoveSection( IDataCacheSection *pSection, bool bCallFlush = true )	{ if ( pSection) RemoveSection( pSection->GetName() ); }
{
};

IDataCacheSection *CDataCache::FindSection( const char *pszClientName )
{
	return nullptr;
};

unsigned CDataCache::Purge( unsigned nBytes )
{
	return 0;
};

unsigned CDataCache::Flush( bool bUnlockedOnly = true, bool bNotify = true )
{
	return 0;
};

void CDataCache::OutputReport( DataCacheReportType_t reportType = DC_SUMMARY_REPORT, const char *pszSection = NULL )
{
};