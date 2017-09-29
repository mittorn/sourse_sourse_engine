#include "RenderView.hpp"

EXPOSE_SINGLE_INTERFACE(CRenderView, IRenderView, VENGINE_RENDERVIEW_INTERFACE_VERSION)

void CRenderView::DrawBrushModel( IClientEntity *baseentity, model_t *model, const Vector& origin, const QAngle& angles, bool bUnused )
{
};

void CRenderView::DrawIdentityBrushModel( IWorldRenderList *pList, model_t *model )
{
};

void CRenderView::TouchLight( struct dlight_t *light )
{
};

void CRenderView::Draw3DDebugOverlays()
{
};

void CRenderView::SetBlend( float blend )
{
};

float CRenderView::GetBlend()
{
	return 0.0f;
};

void CRenderView::SetColorModulation( float const* blend )
{
};

void CRenderView::GetColorModulation( float* blend )
{
};

void CRenderView::SceneBegin()
{
};

void CRenderView::SceneEnd()
{
};

void CRenderView::GetVisibleFogVolume( const Vector& eyePoint, VisibleFogVolumeInfo_t *pInfo )
{
};

IWorldRenderList *CRenderView::CreateWorldList()
{
	return nullptr;
};

void CRenderView::BuildWorldLists( IWorldRenderList *pList, WorldListInfo_t* pInfo, int iForceFViewLeaf, const VisOverrideData_t* pVisData = NULL, bool bShadowDepth = false, float *pReflectionWaterHeight = NULL )
{
};

void CRenderView::DrawWorldLists( IWorldRenderList *pList, unsigned long flags, float waterZAdjust )
{
};

void CRenderView::DrawTopView( bool enable )
{
};

void CRenderView::TopViewBounds( Vector2D const& mins, Vector2D const& maxs )
{
};

void CRenderView::DrawLights()
{
};

void CRenderView::DrawMaskEntities()
{
};

void CRenderView::DrawTranslucentSurfaces( IWorldRenderList *pList, int sortIndex, unsigned long flags, bool bShadowDepth )
{
};

void CRenderView::DrawLineFile()
{
};

void CRenderView::DrawLightmaps( IWorldRenderList *pList, int pageId )
{
};

void CRenderView::ViewSetupVis( bool novis, int numorigins, const Vector origin[] )
{
};

bool CRenderView::AreAnyLeavesVisible( int *leafList, int nLeaves )
{
	return false;
};

void CRenderView::VguiPaint()
{
};

void CRenderView::ViewDrawFade( byte *color, IMaterial *pMaterial )
{
};

void CRenderView::OLD_SetProjectionMatrix( float fov, float zNear, float zFar )
{
};

colorVec CRenderView::GetLightAtPoint( Vector& pos )
{
	return colorVec();
};

int CRenderView::GetViewEntity()
{
	return 0;
};

float CRenderView::GetFieldOfView()
{
	return 0.0f;
};

unsigned char **CRenderView::GetAreaBits()
{
	return nullptr;
};

void CRenderView::SetFogVolumeState( int nVisibleFogVolume, bool bUseHeightFog )
{
};

void CRenderView::InstallBrushSurfaceRenderer( IBrushRenderer* pBrushRenderer )
{
};

void CRenderView::DrawBrushModelShadow( IClientRenderable *pRenderable )
{
};

bool CRenderView::LeafContainsTranslucentSurfaces( IWorldRenderList *pList, int sortIndex, unsigned long flags )
{
	return false;
};

bool CRenderView::DoesBoxIntersectWaterVolume( const Vector &mins, const Vector &maxs, int leafWaterDataID )
{
	return false;
};

void CRenderView::SetAreaState(unsigned char chAreaBits[MAX_AREA_STATE_BYTES], unsigned char chAreaPortalBits[MAX_AREA_PORTAL_STATE_BYTES] )
{
};

void CRenderView::VGui_Paint( int mode )
{
};

void CRenderView::Push3DView( const CViewSetup &view, int nFlags, ITexture* pRenderTarget, Frustum frustumPlanes )
{
};

void CRenderView::Push2DView( const CViewSetup &view, int nFlags, ITexture* pRenderTarget, Frustum frustumPlanes )
{
};

void CRenderView::PopView( Frustum frustumPlanes )
{
};

void CRenderView::SetMainView( const Vector &vecOrigin, const QAngle &angles )
{
};

void CRenderView::ViewSetupVisEx( bool novis, int numorigins, const Vector origin[], unsigned int &returnFlags )
{
};

void CRenderView::OverrideViewFrustum( Frustum custom )
{
};

void CRenderView::DrawBrushModelShadowDepth( IClientEntity *baseentity, model_t *model, const Vector& origin, const QAngle& angles, ERenderDepthMode DepthMode )
{
};

void CRenderView::UpdateBrushModelLightmap( model_t *model, IClientRenderable *pRenderable )
{
};

void CRenderView::BeginUpdateLightmaps()
{
};

void CRenderView::EndUpdateLightmaps()
{
};

void CRenderView::OLD_SetOffCenterProjectionMatrix( float fov, float zNear, float zFar, float flAspectRatio, float flBottom, float flTop, float flLeft, float flRight )
{
};

void CRenderView::OLD_SetProjectionMatrixOrtho( float left, float top, float right, float bottom, float zNear, float zFar )
{
};

void CRenderView::Push3DView( const CViewSetup &view, int nFlags, ITexture* pRenderTarget, Frustum frustumPlanes, ITexture* pDepthTexture )
{
};

void CRenderView::GetMatricesForView( const CViewSetup &view, VMatrix *pWorldToView, VMatrix *pViewToProjection, VMatrix *pWorldToProjection, VMatrix *pWorldToPixels )
{
};

void CRenderView::DrawBrushModelEx( IClientEntity *baseentity, model_t *model, const Vector& origin, const QAngle& angles, DrawBrushModelMode_t mode )
{
};