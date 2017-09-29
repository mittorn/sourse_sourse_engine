#pragma once

#include "scenefilecache/ISceneFileCache.h"

class CSceneFileCache final : public ISceneFileCache
{
public:
	CSceneFileCache() = default;
	~CSceneFileCache() = default;
	
	bool Connect( CreateInterfaceFn factory ) override;
	void Disconnect() override;

	void *QueryInterface( const char *pInterfaceName ) override;

	InitReturnVal_t Init() override;
	void Shutdown() override;
	
	size_t GetSceneBufferSize( char const *filename ) override;
	bool GetSceneData( char const *filename, byte *buf, size_t bufsize ) override;

	bool GetSceneCachedData( char const *pFilename, SceneCachedData_t *pData ) override;
	short GetSceneCachedSound( int iScene, int iSound ) override;
	const char *GetSceneString( short stringId ) override;

	void Reload() override;
};