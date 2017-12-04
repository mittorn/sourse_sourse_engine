#pragma once

#include "engine/ivmodelinfo.h"

class CModelInfoClient final : public IVModelInfoClient
{
public:
	CModelInfoClient() = default;
	~CModelInfoClient() = default;

	const model_t *GetModel( int modelindex ) override;

	int GetModelIndex( const char *name ) const override;

	const char *GetModelName( const model_t *model ) const override;
	vcollide_t *GetVCollide( const model_t *model ) override;
	vcollide_t *GetVCollide( int modelindex ) override;
	void GetModelBounds( const model_t *model, Vector& mins, Vector& maxs ) const override;
	void GetModelRenderBounds( const model_t *model, Vector& mins, Vector& maxs ) const override;
	int GetModelFrameCount( const model_t *model ) const override;
	int GetModelType( const model_t *model ) const override;
	void *GetModelExtraData( const model_t *model ) override;
	bool ModelHasMaterialProxy( const model_t *model ) const override;
	bool IsTranslucent( model_t const* model ) const override;
	bool IsTranslucentTwoPass( const model_t *model ) const override;
	void RecomputeTranslucency( const model_t *model, int nSkin, int nBody, void /*IClientRenderable*/ *pClientRenderable, float fInstanceAlphaModulate=1.0f) override;
	int GetModelMaterialCount( const model_t* model ) const override;
	void GetModelMaterials( const model_t *model, int count, IMaterial** ppMaterial ) override;
	bool IsModelVertexLit( const model_t *model ) const override;
	const char *GetModelKeyValueText( const model_t *model ) override;
	bool GetModelKeyValue( const model_t *model, CUtlBuffer &buf ) override; // supports keyvalue blocks in submodels
	float GetModelRadius( const model_t *model ) override;

	const studiohdr_t *FindModel( const studiohdr_t *pStudioHdr, void **cache, const char *modelname ) const override;
	const studiohdr_t *FindModel( void *cache ) const override;
	virtualmodel_t *GetVirtualModel( const studiohdr_t *pStudioHdr ) const override;
	byte *GetAnimBlock( const studiohdr_t *pStudioHdr, int iBlock ) const override;

	void GetModelMaterialColorAndLighting( const model_t *model, Vector const& origin,
		QAngle const& angles, trace_t* pTrace, Vector& lighting, Vector& matColor ) override;
	void GetIlluminationPoint( const model_t *model, IClientRenderable *pRenderable, Vector const& origin, 
		QAngle const& angles, Vector* pLightingCenter ) override;

	int GetModelContents( int modelIndex ) override;
	studiohdr_t *GetStudiomodel( const model_t *mod ) override;
	int GetModelSpriteWidth( const model_t *model ) const override;
	int GetModelSpriteHeight( const model_t *model ) const override;

	void SetLevelScreenFadeRange( float flMinSize, float flMaxSize ) override;
	void GetLevelScreenFadeRange( float *pMinArea, float *pMaxArea ) const override;

	void SetViewScreenFadeRange( float flMinSize, float flMaxSize ) override;

	unsigned char ComputeLevelScreenFade( const Vector &vecAbsOrigin, float flRadius, float flFadeScale ) const override;
	unsigned char ComputeViewScreenFade( const Vector &vecAbsOrigin, float flRadius, float flFadeScale ) const override;

	int GetAutoplayList( const studiohdr_t *pStudioHdr, unsigned short **pAutoplayList ) const override;

	CPhysCollide *GetCollideForVirtualTerrain( int index ) override;

	bool IsUsingFBTexture( const model_t *model, int nSkin, int nBody, void /*IClientRenderable*/ *pClientRenderable ) const override;

	MDLHandle_t GetCacheHandle( const model_t *model ) const override;

	int GetBrushModelPlaneCount( const model_t *model ) const override;
	void GetBrushModelPlane( const model_t *model, int nIndex, cplane_t &plane, Vector *pOrigin ) const override;
	int GetSurfacepropsForVirtualTerrain( int index ) override;

	void OnLevelChange() override;

	int GetModelClientSideIndex( const char *name ) const override;

	int RegisterDynamicModel( const char *name, bool bClientSide ) override;

	bool IsDynamicModelLoading( int modelIndex ) override;

	void AddRefDynamicModel( int modelIndex ) override;
	void ReleaseDynamicModel( int modelIndex ) override;

	bool RegisterModelLoadCallback( int modelindex, IModelLoadCallback* pCallback, bool bCallImmediatelyIfLoaded = true ) override;
	void UnregisterModelLoadCallback( int modelindex, IModelLoadCallback* pCallback ) override;
	
	void OnDynamicModelsStringTableChange( int nStringIndex, const char *pString, const void *pData ) override;

	const model_t *FindOrLoadModel( const char *name ) override;
};