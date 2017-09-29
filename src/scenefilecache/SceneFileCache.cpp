#include "SceneFileCache.hpp"

EXPOSE_SINGLE_INTERFACE(CSceneFileCache, ISceneFileCache, SCENE_FILE_CACHE_INTERFACE_VERSION)

bool CSceneFileCache::Connect( CreateInterfaceFn factory )
{
	return true;
};

void CSceneFileCache::Disconnect()
{
};

void *CSceneFileCache::QueryInterface( const char *pInterfaceName )
{
	return nullptr;
};

InitReturnVal_t CSceneFileCache::Init()
{
	return INIT_OK;
};

void CSceneFileCache::Shutdown()
{
};

size_t CSceneFileCache::GetSceneBufferSize( char const *filename )
{
	return 0;
};

bool CSceneFileCache::GetSceneData( char const *filename, byte *buf, size_t bufsize )
{
	return true;
};

bool CSceneFileCache::GetSceneCachedData( char const *pFilename, SceneCachedData_t *pData )
{
	return true;
};

short CSceneFileCache::GetSceneCachedSound( int iScene, int iSound )
{
	return 0;
};

const char *CSceneFileCache::GetSceneString( short stringId )
{
	return "";
};

void CSceneFileCache::Reload()
{
};