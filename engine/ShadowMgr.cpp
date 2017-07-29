#include "ShadowMgr.hpp"

EXPOSE_SINGLE_INTERFACE(CShadowMgr, IShadowMgr, ENGINE_SHADOWMGR_INTERFACE_VERSION)

ShadowHandle_t CShadowMgr::CreateShadow( IMaterial* pMaterial, IMaterial* pModelMaterial, void* pBindProxy, int creationFlags )
{
	return SHADOW_HANDLE_INVALID;
};

void CShadowMgr::DestroyShadow( ShadowHandle_t handle )
{
};

void CShadowMgr::SetShadowMaterial( ShadowHandle_t handle, IMaterial* pMaterial, IMaterial* pModelMaterial, void* pBindProxy )
{
};

void CShadowMgr::ProjectShadow( ShadowHandle_t handle, const Vector &origin, 
	const Vector& projectionDir, const VMatrix& worldToShadow, const Vector2D& size,
	int nLeafCount, const int *pLeafList,
	float maxHeight, float falloffOffset, float falloffAmount, const Vector &vecCasterOrigin )
{
};

void CShadowMgr::ProjectFlashlight( ShadowHandle_t handle, const VMatrix &worldToShadow, int nLeafCount, const int *pLeafList )
{
};

const ShadowInfo_t &CShadowMgr::GetInfo( ShadowHandle_t handle )
{
	return new ShadowInfo_t;
};

const Frustum_t &CShadowMgr::GetFlashlightFrustum( ShadowHandle_t handle )
{
	return new Frustum_t;
};

void CShadowMgr::AddShadowToBrushModel( ShadowHandle_t handle, 
	model_t* pModel, const Vector& origin, const QAngle& angles )
{
};

void CShadowMgr::RemoveAllShadowsFromBrushModel( model_t* pModel )
{
};

void CShadowMgr::SetShadowTexCoord( ShadowHandle_t handle, float x, float y, float w, float h )
{
};

void CShadowMgr::AddShadowToModel( ShadowHandle_t shadow, ModelInstanceHandle_t instance )
{
};

void CShadowMgr::RemoveAllShadowsFromModel( ModelInstanceHandle_t instance )
{
};

void CShadowMgr::ClearExtraClipPlanes( ShadowHandle_t shadow )
{
};

void CShadowMgr::AddExtraClipPlane( ShadowHandle_t shadow, const Vector& normal, float dist )
{
};

void CShadowMgr::EnableShadow( ShadowHandle_t shadow, bool bEnable )
{
};

void CShadowMgr::SetFalloffBias( ShadowHandle_t shadow, unsigned char ucBias )
{
};

void CShadowMgr::UpdateFlashlightState( ShadowHandle_t shadowHandle, const FlashlightState_t &lightState )
{
};

void CShadowMgr::DrawFlashlightDepthTexture()
{
};

void CShadowMgr::AddFlashlightRenderable( ShadowHandle_t shadow, IClientRenderable *pRenderable )
{
};

ShadowHandle_t CShadowMgr::CreateShadowEx( IMaterial* pMaterial, IMaterial* pModelMaterial, void* pBindProxy, int creationFlags )
{
	return SHADOW_HANDLE_INVALID;
};

void CShadowMgr::SetFlashlightDepthTexture( ShadowHandle_t shadowHandle, ITexture *pFlashlightDepthTexture, unsigned char ucShadowStencilBit )
{
};

const FlashlightState_t &CShadowMgr::GetFlashlightState( ShadowHandle_t handle )
{
	return new FlashlightState_t;
};

void CShadowMgr::SetFlashlightRenderState( ShadowHandle_t handle )
{
};