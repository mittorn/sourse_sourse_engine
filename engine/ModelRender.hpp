#pragma once

#include "engine/ivmodelrender.h"

class CModelRender final : public IVModelRender
{
public:
	CModelRender() = default;
	~CModelRender() = default;
	
	int DrawModel(  int flags,
					IClientRenderable *pRenderable,
					ModelInstanceHandle_t instance,
					int entity_index, 
					const model_t *model, 
					Vector const& origin, 
					QAngle const& angles, 
					int skin,
					int body,
					int hitboxset,
					const matrix3x4_t *modelToWorld = NULL,
					const matrix3x4_t *pLightingOffset = NULL ) override;

	void ForcedMaterialOverride( IMaterial *newMaterial, OverrideType_t nOverrideType = OVERRIDE_NORMAL ) override;

	void SetViewTarget( const CStudioHdr *pStudioHdr, int nBodyIndex, const Vector& target ) override;

	ModelInstanceHandle_t CreateInstance( IClientRenderable *pRenderable, LightCacheHandle_t *pCache = NULL ) override;
	void DestroyInstance( ModelInstanceHandle_t handle ) override;

	void SetStaticLighting( ModelInstanceHandle_t handle, LightCacheHandle_t* pHandle ) override;
	LightCacheHandle_t GetStaticLighting( ModelInstanceHandle_t handle ) override;

	bool ChangeInstance( ModelInstanceHandle_t handle, IClientRenderable *pRenderable ) override;

	void AddDecal( ModelInstanceHandle_t handle, Ray_t const& ray, 
		Vector const& decalUp, int decalIndex, int body, bool noPokeThru = false, int maxLODToDecal = ADDDECAL_TO_ALL_LODS ) override;

	void RemoveAllDecals( ModelInstanceHandle_t handle ) override;
	void RemoveAllDecalsFromAllModels() override;

	matrix3x4_t* DrawModelShadowSetup( IClientRenderable *pRenderable, int body, int skin, DrawModelInfo_t *pInfo, matrix3x4_t *pCustomBoneToWorld = NULL ) override;
	void DrawModelShadow(  IClientRenderable *pRenderable, const DrawModelInfo_t &info, matrix3x4_t *pCustomBoneToWorld = NULL ) override;

	bool RecomputeStaticLighting( ModelInstanceHandle_t handle ) override;

	void ReleaseAllStaticPropColorData() override;
	void RestoreAllStaticPropColorData() override;

	int	DrawModelEx( ModelRenderInfo_t &pInfo ) override;

	int	DrawModelExStaticProp( ModelRenderInfo_t &pInfo ) override;

	bool DrawModelSetup( ModelRenderInfo_t &pInfo, DrawModelState_t *pState, matrix3x4_t *pCustomBoneToWorld, matrix3x4_t** ppBoneToWorldOut ) override;
	void DrawModelExecute( const DrawModelState_t &state, const ModelRenderInfo_t &pInfo, matrix3x4_t *pCustomBoneToWorld = NULL ) override;

	void SetupLighting( const Vector &vecCenter ) override;
	
	int DrawStaticPropArrayFast( StaticPropRenderInfo_t *pProps, int count, bool bShadowDepth ) override;

	void SuppressEngineLighting( bool bSuppress ) override;

	void SetupColorMeshes( int nTotalVerts ) override;

	void AddColoredDecal( ModelInstanceHandle_t handle, Ray_t const& ray, 
		Vector const& decalUp, int decalIndex, int body, Color cColor, bool noPokeThru = false, int maxLODToDecal = ADDDECAL_TO_ALL_LODS ) override;
};