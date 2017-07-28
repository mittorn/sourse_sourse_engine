#include "QueuedLoader.hpp"

EXPOSE_SINGLE_INTERFACE(CQueuedLoader, IQueuedLoader, QUEUEDLOADER_INTERFACE_VERSION)

bool CQueuedLoader::Connect( CreateInterfaceFn factory )
{
	return true;
};

void CQueuedLoader::Disconnect()
{
};

void *CQueuedLoader::QueryInterface( const char *pInterfaceName )
{
	return nullptr;
};

InitReturnVal_t CQueuedLoader::Init()
{
	return INIT_OK;
};

void CQueuedLoader::Shutdown()
{
};

void CQueuedLoader::InstallLoader( ResourcePreload_t type, IResourcePreload *pLoader )
{
};

void CQueuedLoader::InstallProgress( ILoaderProgress *pProgress )
{
};

bool CQueuedLoader::BeginMapLoading( const char *pMapName, bool bLoadForHDR, bool bOptimizeMapReload )
{
	return false;
};

void CQueuedLoader::EndMapLoading( bool bAbort )
{
};

bool CQueuedLoader::AddJob( const LoaderJob_t *pLoaderJob )
{
	return false;
};

void CQueuedLoader::AddMapResource( const char *pFilename )
{
};

void CQueuedLoader::DynamicLoadMapResource( const char *pFilename, DynamicResourceCallback_t pCallback, void *pContext, void *pContext2 )
{
};

void CQueuedLoader::QueueDynamicLoadFunctor( CFunctor* pFunctor )
{
};

bool CQueuedLoader::CompleteDynamicLoad()
{
	return false;
};

bool CQueuedLoader::ClaimAnonymousJob( const char *pFilename, QueuedLoaderCallback_t pCallback, void *pContext, void *pContext2 = NULL )
{
	return false;
};

bool CQueuedLoader::ClaimAnonymousJob( const char *pFilename, void **pData, int *pDataSize, LoaderError_t *pError = NULL )
{
	return false;
};

bool CQueuedLoader::IsMapLoading() const
{
	return false;
};

bool CQueuedLoader::IsSameMapLoading() const
{
	return false;
};

bool CQueuedLoader::IsFinished() const
{
	return false;
};

bool CQueuedLoader::IsBatching() const
{
	return false;
};

bool CQueuedLoader::IsDynamic() const
{
	return false;
};

int CQueuedLoader::GetSpewDetail() const
{
	return 0;
};

void CQueuedLoader::PurgeAll()
{
};