#pragma once

#include "ivrenderview.h"

class CRenderView final : public IVRenderView
{
public:
	CRenderView() = default;
	~CRenderView() = default;
	
	void DrawBrushModel( 
		IClientEntity *baseentity, 
		model_t *model, 
		const Vector& origin, 
		const QAngle& angles, 
		bool bUnused ) override;
	
	void DrawIdentityBrushModel( IWorldRenderList *pList, model_t *model ) override;

	void TouchLight( struct dlight_t *light ) override;
	
	void Draw3DDebugOverlays() override;
	
	void SetBlend( float blend ) override;
	float GetBlend() override;

	void SetColorModulation( float const* blend ) override;
	void GetColorModulation( float* blend ) override;

	void SceneBegin() override;
	void SceneEnd() override;

	void GetVisibleFogVolume( const Vector& eyePoint, VisibleFogVolumeInfo_t *pInfo ) override;

	IWorldRenderList * CreateWorldList() override;

	void BuildWorldLists( IWorldRenderList *pList, WorldListInfo_t* pInfo, int iForceFViewLeaf, const VisOverrideData_t* pVisData = NULL, bool bShadowDepth = false, float *pReflectionWaterHeight = NULL ) override;
	void DrawWorldLists( IWorldRenderList *pList, unsigned long flags, float waterZAdjust ) override;

	void DrawTopView( bool enable ) override;
	void TopViewBounds( Vector2D const& mins, Vector2D const& maxs ) override;

	void DrawLights() override;
	void DrawMaskEntities() override;

	void DrawTranslucentSurfaces( IWorldRenderList *pList, int sortIndex, unsigned long flags, bool bShadowDepth ) override;

	void DrawLineFile() override;
	void DrawLightmaps( IWorldRenderList *pList, int pageId ) override;
	
	void ViewSetupVis( bool novis, int numorigins, const Vector origin[] ) override;

	bool AreAnyLeavesVisible( int *leafList, int nLeaves ) override;

	void VguiPaint() override;
	void ViewDrawFade( byte *color, IMaterial *pMaterial ) override;
	
	void OLD_SetProjectionMatrix( float fov, float zNear, float zFar ) override;
	
	colorVec GetLightAtPoint( Vector& pos ) override;
	
	int GetViewEntity() override;
	float GetFieldOfView() override;
	
	unsigned char **GetAreaBits() override;

	void SetFogVolumeState( int nVisibleFogVolume, bool bUseHeightFog ) override;

	void InstallBrushSurfaceRenderer( IBrushRenderer* pBrushRenderer ) override;

	void DrawBrushModelShadow( IClientRenderable *pRenderable ) override;

	bool LeafContainsTranslucentSurfaces( IWorldRenderList *pList, int sortIndex, unsigned long flags ) override;

	bool DoesBoxIntersectWaterVolume( const Vector &mins, const Vector &maxs, int leafWaterDataID ) override;

	void SetAreaState(unsigned char chAreaBits[MAX_AREA_STATE_BYTES], unsigned char chAreaPortalBits[MAX_AREA_PORTAL_STATE_BYTES] ) override;

	void VGui_Paint( int mode ) override;

	void Push3DView( const CViewSetup &view, int nFlags, ITexture* pRenderTarget, Frustum frustumPlanes ) override;
	void Push2DView( const CViewSetup &view, int nFlags, ITexture* pRenderTarget, Frustum frustumPlanes ) override;
	void PopView( Frustum frustumPlanes ) override;

	void SetMainView( const Vector &vecOrigin, const QAngle &angles ) override;

	void ViewSetupVisEx( bool novis, int numorigins, const Vector origin[], unsigned int &returnFlags ) override;

	void OverrideViewFrustum( Frustum custom ) override;

	void DrawBrushModelShadowDepth( IClientEntity *baseentity, model_t *model, const Vector& origin, const QAngle& angles, ERenderDepthMode DepthMode ) override;
	void UpdateBrushModelLightmap( model_t *model, IClientRenderable *pRenderable ) override;
	void BeginUpdateLightmaps() override;
	void EndUpdateLightmaps() override;
	void OLD_SetOffCenterProjectionMatrix( float fov, float zNear, float zFar, float flAspectRatio, float flBottom, float flTop, float flLeft, float flRight ) override;
	void OLD_SetProjectionMatrixOrtho( float left, float top, float right, float bottom, float zNear, float zFar ) override;
	void Push3DView( const CViewSetup &view, int nFlags, ITexture* pRenderTarget, Frustum frustumPlanes, ITexture* pDepthTexture ) override;
	void GetMatricesForView( const CViewSetup &view, VMatrix *pWorldToView, VMatrix *pViewToProjection, VMatrix *pWorldToProjection, VMatrix *pWorldToPixels ) override;
	void DrawBrushModelEx( IClientEntity *baseentity, model_t *model, const Vector& origin, const QAngle& angles, DrawBrushModelMode_t mode ) override;
};