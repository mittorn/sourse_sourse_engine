#include "ModelRender.hpp"

EXPOSE_SINGLE_INTERFACE(CModelRender, IVModelRender, VENGINE_HUDMODEL_INTERFACE_VERSION)

int CModelRender::DrawModel(  int flags,
				IClientRenderable *pRenderable,
				ModelInstanceHandle_t instance,
				int entity_index, 
				const model_t *model, 
				Vector const& origin, 
				QAngle const& angles, 
				int skin,
				int body,
				int hitboxset,
				const matrix3x4_t *modelToWorld,
				const matrix3x4_t *pLightingOffset)
{
	return 0;
};

void CModelRender::ForcedMaterialOverride( IMaterial *newMaterial, OverrideType_t nOverrideType)
{
};

void CModelRender::SetViewTarget( const CStudioHdr *pStudioHdr, int nBodyIndex, const Vector& target )
{
};

ModelInstanceHandle_t CModelRender::CreateInstance( IClientRenderable *pRenderable, LightCacheHandle_t *pCache)
{
	return MODEL_INSTANCE_INVALID;
};

void CModelRender::DestroyInstance( ModelInstanceHandle_t handle )
{
};

void CModelRender::SetStaticLighting( ModelInstanceHandle_t handle, LightCacheHandle_t* pHandle )
{
};

LightCacheHandle_t CModelRender::GetStaticLighting( ModelInstanceHandle_t handle )
{
	return -1;
};

bool CModelRender::ChangeInstance( ModelInstanceHandle_t handle, IClientRenderable *pRenderable )
{
	return false;
};

void CModelRender::AddDecal( ModelInstanceHandle_t handle, Ray_t const& ray, 
	Vector const& decalUp, int decalIndex, int body, bool noPokeThru, int maxLODToDecal )
{
};

void CModelRender::RemoveAllDecals( ModelInstanceHandle_t handle )
{
};

void CModelRender::RemoveAllDecalsFromAllModels()
{
};

matrix3x4_t* CModelRender::DrawModelShadowSetup( IClientRenderable *pRenderable, int body, int skin, DrawModelInfo_t *pInfo, matrix3x4_t *pCustomBoneToWorld)
{
	return nullptr;
};

void CModelRender::DrawModelShadow(IClientRenderable *pRenderable, const DrawModelInfo_t &info, matrix3x4_t *pCustomBoneToWorld)
{
};

bool CModelRender::RecomputeStaticLighting( ModelInstanceHandle_t handle )
{
	return false;
};

void CModelRender::ReleaseAllStaticPropColorData()
{
};

void CModelRender::RestoreAllStaticPropColorData()
{
};

int	CModelRender::DrawModelEx( ModelRenderInfo_t &pInfo )
{
	return 0;
};

int	CModelRender::DrawModelExStaticProp( ModelRenderInfo_t &pInfo )
{
	return 0;
};

bool CModelRender::DrawModelSetup( ModelRenderInfo_t &pInfo, DrawModelState_t *pState, matrix3x4_t *pCustomBoneToWorld, matrix3x4_t** ppBoneToWorldOut )
{
	return false;
};

void CModelRender::DrawModelExecute( const DrawModelState_t &state, const ModelRenderInfo_t &pInfo, matrix3x4_t *pCustomBoneToWorld)
{
};

void CModelRender::SetupLighting( const Vector &vecCenter )
{
};

int CModelRender::DrawStaticPropArrayFast( StaticPropRenderInfo_t *pProps, int count, bool bShadowDepth )
{
	return 0;
};

void CModelRender::SuppressEngineLighting( bool bSuppress )
{
};

void CModelRender::SetupColorMeshes( int nTotalVerts )
{
};

void CModelRender::AddColoredDecal( ModelInstanceHandle_t handle, Ray_t const& ray, 
	Vector const& decalUp, int decalIndex, int body, Color cColor, bool noPokeThru, int maxLODToDecal)
{
};