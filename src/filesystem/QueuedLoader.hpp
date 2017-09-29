#pragma once

#include "filesystem/IQueuedLoader.h"

class CQueuedLoader final : public IQueuedLoader
{
public:
	CQueuedLoader() = default;
	~CQueuedLoader() = default;
	
	bool Connect( CreateInterfaceFn factory ) override;
	void Disconnect() override;

	void *QueryInterface( const char *pInterfaceName ) override;

	InitReturnVal_t Init() override;
	void Shutdown() override;
	
	void InstallLoader( ResourcePreload_t type, IResourcePreload *pLoader ) override;
	void InstallProgress( ILoaderProgress *pProgress ) override;

	bool BeginMapLoading( const char *pMapName, bool bLoadForHDR, bool bOptimizeMapReload ) override;
	void EndMapLoading( bool bAbort ) override;
	bool AddJob( const LoaderJob_t *pLoaderJob ) override;

	void AddMapResource( const char *pFilename ) override;

	void DynamicLoadMapResource( const char *pFilename, DynamicResourceCallback_t pCallback, void *pContext, void *pContext2 ) override;
	void QueueDynamicLoadFunctor( CFunctor* pFunctor ) override;
	bool CompleteDynamicLoad() override;

	bool ClaimAnonymousJob( const char *pFilename, QueuedLoaderCallback_t pCallback, void *pContext, void *pContext2 = NULL ) override;
	bool ClaimAnonymousJob( const char *pFilename, void **pData, int *pDataSize, LoaderError_t *pError = NULL ) override;

	bool IsMapLoading() const override;
	bool IsSameMapLoading() const override;
	bool IsFinished() const override;

	bool IsBatching() const override;
	bool IsDynamic() const override;

	int GetSpewDetail() const override;

	void PurgeAll() override;
};