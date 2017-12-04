#include "ModelInfoServer.hpp"
#include "tier1/interface.h"

EXPOSE_SINGLE_INTERFACE(CModelInfoServer, IVModelInfo, VMODELINFO_SERVER_INTERFACE_VERSION);

const model_t *CModelInfoServer::GetModel( int modelindex )
{
	return nullptr;
};

int CModelInfoServer::GetModelIndex( const char *name ) const
{
	return 0;
};

const char *CModelInfoServer::GetModelName( const model_t *model ) const
{
	return "";
};

vcollide_t *CModelInfoServer::GetVCollide( const model_t *model )
{
	return nullptr;
};

vcollide_t *CModelInfoServer::GetVCollide( int modelindex )
{
	return nullptr;
};

void CModelInfoServer::GetModelBounds( const model_t *model, Vector& mins, Vector& maxs ) const
{
};

void CModelInfoServer::GetModelRenderBounds( const model_t *model, Vector& mins, Vector& maxs ) const
{
};

int CModelInfoServer::GetModelFrameCount( const model_t *model ) const
{
	return 0;
};

int CModelInfoServer::GetModelType( const model_t *model ) const
{
	return 0;
};

void *CModelInfoServer::GetModelExtraData( const model_t *model )
{
	return nullptr;
};

bool CModelInfoServer::ModelHasMaterialProxy( const model_t *model ) const
{
	return false;
};

bool CModelInfoServer::IsTranslucent( model_t const* model ) const
{
	return false;
};

bool CModelInfoServer::IsTranslucentTwoPass( const model_t *model ) const
{
	return false;
};

void CModelInfoServer::RecomputeTranslucency( const model_t *model, int nSkin, int nBody, void /*IClientRenderable*/ *pClientRenderable, float fInstanceAlphaModulate)
{
};

int CModelInfoServer::GetModelMaterialCount( const model_t* model ) const
{
	return 0;
};

void CModelInfoServer::GetModelMaterials( const model_t *model, int count, IMaterial** ppMaterial )
{
};

bool CModelInfoServer::IsModelVertexLit( const model_t *model ) const
{
	return false;
};

const char *CModelInfoServer::GetModelKeyValueText( const model_t *model )
{
	return "";
};

bool CModelInfoServer::GetModelKeyValue( const model_t *model, CUtlBuffer &buf ) // supports keyvalue blocks in submodels
{
	return false;
};

float CModelInfoServer::GetModelRadius( const model_t *model )
{
	return 0.0f;
};

const studiohdr_t *CModelInfoServer::FindModel( const studiohdr_t *pStudioHdr, void **cache, const char *modelname ) const
{
	return nullptr;
};

const studiohdr_t *CModelInfoServer::FindModel( void *cache ) const
{
	return nullptr;
};

virtualmodel_t *CModelInfoServer::GetVirtualModel( const studiohdr_t *pStudioHdr ) const
{
	return nullptr;
};

byte *CModelInfoServer::GetAnimBlock( const studiohdr_t *pStudioHdr, int iBlock ) const
{
	return nullptr;
};

void CModelInfoServer::GetModelMaterialColorAndLighting( const model_t *model, Vector const& origin,
	QAngle const& angles, trace_t* pTrace, Vector& lighting, Vector& matColor )
{
};

void CModelInfoServer::GetIlluminationPoint( const model_t *model, IClientRenderable *pRenderable, Vector const& origin, 
	QAngle const& angles, Vector* pLightingCenter )
{
};

int CModelInfoServer::GetModelContents( int modelIndex )
{
	return 0;
};

studiohdr_t *CModelInfoServer::GetStudiomodel( const model_t *mod )
{
	return nullptr;
};

int CModelInfoServer::GetModelSpriteWidth( const model_t *model ) const
{
	return 0;
};

int CModelInfoServer::GetModelSpriteHeight( const model_t *model ) const
{
	return 0;
};

void CModelInfoServer::SetLevelScreenFadeRange( float flMinSize, float flMaxSize )
{
};

void CModelInfoServer::GetLevelScreenFadeRange( float *pMinArea, float *pMaxArea ) const
{
};

void CModelInfoServer::SetViewScreenFadeRange( float flMinSize, float flMaxSize )
{
};

unsigned char CModelInfoServer::ComputeLevelScreenFade( const Vector &vecAbsOrigin, float flRadius, float flFadeScale ) const
{
	return 0;
};

unsigned char CModelInfoServer::ComputeViewScreenFade( const Vector &vecAbsOrigin, float flRadius, float flFadeScale ) const
{
	return 0;
};

int CModelInfoServer::GetAutoplayList( const studiohdr_t *pStudioHdr, unsigned short **pAutoplayList ) const
{
	return 0;
};

CPhysCollide *CModelInfoServer::GetCollideForVirtualTerrain( int index )
{
	return nullptr;
};

bool CModelInfoServer::IsUsingFBTexture( const model_t *model, int nSkin, int nBody, void /*IClientRenderable*/ *pClientRenderable ) const
{
	return false;
};

MDLHandle_t CModelInfoServer::GetCacheHandle( const model_t *model ) const
{
	return 0;
};

int CModelInfoServer::GetBrushModelPlaneCount( const model_t *model ) const
{
	return 0;
};

void CModelInfoServer::GetBrushModelPlane( const model_t *model, int nIndex, cplane_t &plane, Vector *pOrigin ) const
{
};

int CModelInfoServer::GetSurfacepropsForVirtualTerrain( int index )
{
	return 0;
};

void CModelInfoServer::OnLevelChange()
{
};

int CModelInfoServer::GetModelClientSideIndex( const char *name ) const
{
	return 0;
};

int CModelInfoServer::RegisterDynamicModel( const char *name, bool bClientSide )
{
	return 0;
};

bool CModelInfoServer::IsDynamicModelLoading( int modelIndex )
{
	return false;
};

void CModelInfoServer::AddRefDynamicModel( int modelIndex )
{
};

void CModelInfoServer::ReleaseDynamicModel( int modelIndex )
{
};

bool CModelInfoServer::RegisterModelLoadCallback( int modelindex, IModelLoadCallback* pCallback, bool bCallImmediatelyIfLoaded)
{
	return false;
};

void CModelInfoServer::UnregisterModelLoadCallback( int modelindex, IModelLoadCallback* pCallback )
{
};