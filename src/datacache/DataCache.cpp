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

void CDataCache::GetStatus( DataCacheStatus_t *pStatus, DataCacheLimits_t *pLimits)
{
};

IDataCacheSection *CDataCache::AddSection( IDataCacheClient *pClient, const char *pszSectionName, const DataCacheLimits_t &limits, bool bSupportFastFind)
{
	return nullptr;
};

void CDataCache::RemoveSection( const char *pszClientName, bool bCallFlush)
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

unsigned CDataCache::Flush( bool bUnlockedOnly, bool bNotify)
{
	return 0;
};

void CDataCache::OutputReport( DataCacheReportType_t reportType, const char *pszSection)
{
};