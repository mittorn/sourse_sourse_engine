#include "ModelInfoClient.hpp"

EXPOSE_SINGLE_INTERFACE(CModelInfoClient, IVModelInfoClient, VMODELINFO_CLIENT_INTERFACE_VERSION)

const model_t *CModelInfoClient::GetModel( int modelindex )
{
	return nullptr;
};

int CModelInfoClient::GetModelIndex( const char *name ) const
{
	return 0;
};

const char *CModelInfoClient::GetModelName( const model_t *model ) const
{
	return "";
};

vcollide_t *CModelInfoClient::GetVCollide( const model_t *model )
{
	return nullptr;
};

vcollide_t *CModelInfoClient::GetVCollide( int modelindex )
{
	return nullptr;
};

void CModelInfoClient::GetModelBounds( const model_t *model, Vector& mins, Vector& maxs ) const
{
};

void CModelInfoClient::GetModelRenderBounds( const model_t *model, Vector& mins, Vector& maxs ) const
{
};

int CModelInfoClient::GetModelFrameCount( const model_t *model ) const
{
	return 0;
};

int CModelInfoClient::GetModelType( const model_t *model ) const
{
	return 0;
};

void *CModelInfoClient::GetModelExtraData( const model_t *model )
{
	return nullptr;
};

bool CModelInfoClient::ModelHasMaterialProxy( const model_t *model ) const
{
	return false;
};

bool CModelInfoClient::IsTranslucent( model_t const* model ) const
{
	return false;
};

bool CModelInfoClient::IsTranslucentTwoPass( const model_t *model ) const
{
	return false;
};

void CModelInfoClient::RecomputeTranslucency( const model_t *model, int nSkin, int nBody, void /*IClientRenderable*/ *pClientRenderable, float fInstanceAlphaModulate=1.0f)
{
};

int CModelInfoClient::GetModelMaterialCount( const model_t* model ) const
{
	return 0;
};

void CModelInfoClient::GetModelMaterials( const model_t *model, int count, IMaterial** ppMaterial )
{
};

bool CModelInfoClient::IsModelVertexLit( const model_t *model ) const
{
	return false;
};

const char *CModelInfoClient::GetModelKeyValueText( const model_t *model )
{
	return "";
};

bool CModelInfoClient::GetModelKeyValue( const model_t *model, CUtlBuffer &buf ) // supports keyvalue blocks in submodels
{
	return false;
};

float CModelInfoClient::GetModelRadius( const model_t *model )
{
	return 0.0f;
};

const studiohdr_t *CModelInfoClient::FindModel( const studiohdr_t *pStudioHdr, void **cache, const char *modelname ) const
{
	return nullptr;
};

const studiohdr_t *CModelInfoClient::FindModel( void *cache ) const
{
	return nullptr;
};

virtualmodel_t *CModelInfoClient::GetVirtualModel( const studiohdr_t *pStudioHdr ) const
{
	return nullptr;
};

byte *CModelInfoClient::GetAnimBlock( const studiohdr_t *pStudioHdr, int iBlock ) const
{
	return nullptr;
};

void CModelInfoClient::GetModelMaterialColorAndLighting( const model_t *model, Vector const& origin,
	QAngle const& angles, trace_t* pTrace, Vector& lighting, Vector& matColor )
{
};

void CModelInfoClient::GetIlluminationPoint( const model_t *model, IClientRenderable *pRenderable, Vector const& origin, 
	QAngle const& angles, Vector* pLightingCenter )
{
};

int CModelInfoClient::GetModelContents( int modelIndex )
{
	return 0;
};

studiohdr_t *CModelInfoClient::GetStudiomodel( const model_t *mod )
{
	return nullptr;
};

int CModelInfoClient::GetModelSpriteWidth( const model_t *model ) const
{
	return 0;
};

int CModelInfoClient::GetModelSpriteHeight( const model_t *model ) const
{
	return 0;
};

void CModelInfoClient::SetLevelScreenFadeRange( float flMinSize, float flMaxSize )
{
};

void CModelInfoClient::GetLevelScreenFadeRange( float *pMinArea, float *pMaxArea ) const
{
};

void CModelInfoClient::SetViewScreenFadeRange( float flMinSize, float flMaxSize )
{
};

unsigned char CModelInfoClient::ComputeLevelScreenFade( const Vector &vecAbsOrigin, float flRadius, float flFadeScale ) const
{
	return 0;
};

unsigned char CModelInfoClient::ComputeViewScreenFade( const Vector &vecAbsOrigin, float flRadius, float flFadeScale ) const
{
	return 0;
};

int CModelInfoClient::GetAutoplayList( const studiohdr_t *pStudioHdr, unsigned short **pAutoplayList ) const
{
	return 0;
};

CPhysCollide *CModelInfoClient::GetCollideForVirtualTerrain( int index )
{
	return nullptr;
};

bool CModelInfoClient::IsUsingFBTexture( const model_t *model, int nSkin, int nBody, void /*IClientRenderable*/ *pClientRenderable ) const
{
	return false;
};

MDLHandle_t CModelInfoClient::GetCacheHandle( const model_t *model ) const
{
	return 0;
};

int CModelInfoClient::GetBrushModelPlaneCount( const model_t *model ) const
{
	return 0;
};

void CModelInfoClient::GetBrushModelPlane( const model_t *model, int nIndex, cplane_t &plane, Vector *pOrigin ) const
{
};

int CModelInfoClient::GetSurfacepropsForVirtualTerrain( int index )
{
	return 0;
};

void CModelInfoClient::OnLevelChange()
{
};

int CModelInfoClient::GetModelClientSideIndex( const char *name ) const
{
	return 0;
};

int CModelInfoClient::RegisterDynamicModel( const char *name, bool bClientSide )
{
	return 0;
};

bool CModelInfoClient::IsDynamicModelLoading( int modelIndex )
{
	return false;
};

void CModelInfoClient::AddRefDynamicModel( int modelIndex )
{
};

void CModelInfoClient::ReleaseDynamicModel( int modelIndex )
{
};

bool CModelInfoClient::RegisterModelLoadCallback( int modelindex, IModelLoadCallback* pCallback, bool bCallImmediatelyIfLoaded = true )
{
	return false;
};

void CModelInfoClient::UnregisterModelLoadCallback( int modelindex, IModelLoadCallback* pCallback )
{
};

void CModelInfoClient::OnDynamicModelsStringTableChange( int nStringIndex, const char *pString, const void *pData )
{
};

const model_t *CModelInfoClient::FindOrLoadModel( const char *name )
{
	return nullptr;
};