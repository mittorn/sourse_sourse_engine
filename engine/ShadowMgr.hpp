#pragma once

#include "engine/ishadowmgr.h"

class CShadowMgr final : public IShadowMgr
{
public:
	CShadowMgr() = default;
	~CShadowMgr() = default;
	
	ShadowHandle_t CreateShadow( IMaterial* pMaterial, IMaterial* pModelMaterial, void* pBindProxy, int creationFlags ) override;
	void DestroyShadow( ShadowHandle_t handle ) override;

	void SetShadowMaterial( ShadowHandle_t handle, IMaterial* pMaterial, IMaterial* pModelMaterial, void* pBindProxy ) override;

	void ProjectShadow( ShadowHandle_t handle, const Vector &origin, 
		const Vector& projectionDir, const VMatrix& worldToShadow, const Vector2D& size,
		int nLeafCount, const int *pLeafList,
		float maxHeight, float falloffOffset, float falloffAmount, const Vector &vecCasterOrigin ) override;

	void ProjectFlashlight( ShadowHandle_t handle, const VMatrix &worldToShadow, int nLeafCount, const int *pLeafList ) override;

	const ShadowInfo_t &GetInfo( ShadowHandle_t handle ) override;

	const Frustum_t &GetFlashlightFrustum( ShadowHandle_t handle ) override;

	void AddShadowToBrushModel( ShadowHandle_t handle, 
		model_t* pModel, const Vector& origin, const QAngle& angles ) override;

	void RemoveAllShadowsFromBrushModel( model_t* pModel ) override;

	void SetShadowTexCoord( ShadowHandle_t handle, float x, float y, float w, float h ) override;

	void AddShadowToModel( ShadowHandle_t shadow, ModelInstanceHandle_t instance ) override;
	void RemoveAllShadowsFromModel( ModelInstanceHandle_t instance ) override;

	void ClearExtraClipPlanes( ShadowHandle_t shadow ) override;
	void AddExtraClipPlane( ShadowHandle_t shadow, const Vector& normal, float dist ) override;

	void EnableShadow( ShadowHandle_t shadow, bool bEnable ) override;

	void SetFalloffBias( ShadowHandle_t shadow, unsigned char ucBias ) override;

	void UpdateFlashlightState( ShadowHandle_t shadowHandle, const FlashlightState_t &lightState ) override;

	void DrawFlashlightDepthTexture() override;

	void AddFlashlightRenderable( ShadowHandle_t shadow, IClientRenderable *pRenderable ) override;
	ShadowHandle_t CreateShadowEx( IMaterial* pMaterial, IMaterial* pModelMaterial, void* pBindProxy, int creationFlags ) override;

	void SetFlashlightDepthTexture( ShadowHandle_t shadowHandle, ITexture *pFlashlightDepthTexture, unsigned char ucShadowStencilBit ) override;

	const FlashlightState_t &GetFlashlightState( ShadowHandle_t handle ) override;

	void SetFlashlightRenderState( ShadowHandle_t handle ) override;
};