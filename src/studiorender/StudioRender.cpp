#include "StudioRender.hpp"

EXPOSE_SINGLE_INTERFACE(CStudioRender, IStudioRender, STUDIO_RENDER_INTERFACE_VERSION)

bool CStudioRender::Connect(CreateInterfaceFn factory)
{
	return true;
};

void CStudioRender::Disconnect()
{
};

void *CStudioRender::QueryInterface(const char *pInterfaceName)
{
	if(!strcmp(pInterfaceName, STUDIO_RENDER_INTERFACE_VERSION))
		return static_cast<IStudioRender*>(this);

	return nullptr;
};

InitReturnVal_t CStudioRender::Init()
{
	return INIT_OK;
};

void CStudioRender::Shutdown()
{
};

void CStudioRender::BeginFrame()
{
};

void CStudioRender::EndFrame()
{
};

void CStudioRender::Mat_Stub(IMaterialSystem * pMatSys)
{
};

void CStudioRender::UpdateConfig(const StudioRenderConfig_t &config)
{
};

void CStudioRender::GetCurrentConfig(StudioRenderConfig_t & config)
{
};

bool CStudioRender::LoadModel(studiohdr_t * pStudioHdr, void *pVtxData, studiohwdata_t *pHardwareData)
{
	return false;
};

void CStudioRender::UnloadModel(studiohwdata_t * pHardwareData)
{
};

void CStudioRender::RefreshStudioHdr(studiohdr_t * pStudioHdr, studiohwdata_t * pHardwareData)
{
};

void CStudioRender::SetEyeViewTarget(const studiohdr_t *pStudioHdr, int nBodyIndex, const Vector &worldPosition)
{
};

int CStudioRender::GetNumAmbientLightSamples()
{
	return 0;
};

const Vector *CStudioRender::GetAmbientLightDirections()
{
	return nullptr;
};

void CStudioRender::SetAmbientLightColors(const Vector4D *pAmbientOnlyColors)
{
};

void CStudioRender::SetAmbientLightColors(const Vector *pAmbientOnlyColors)
{
};

void CStudioRender::SetLocalLights(int numLights, const LightDesc_t *pLights)
{
};

void CStudioRender::SetViewState(const Vector &viewOrigin, const Vector &viewRight,
						  const Vector &viewUp, const Vector &viewPlaneNormal)
{
};

void CStudioRender::LockFlexWeights(int nWeightCount, float **ppFlexWeights, float **ppFlexDelayedWeights)
{
};

void CStudioRender::UnlockFlexWeights()
{
};

matrix3x4_t *CStudioRender::LockBoneMatrices(int nBoneCount)
{
	return nullptr;
};

void CStudioRender::UnlockBoneMatrices()
{
};

int CStudioRender::GetNumLODs(const studiohwdata_t &hardwareData) const
{
	return 0;
};

float CStudioRender::GetLODSwitchValue(const studiohwdata_t &hardwareData, int lod) const
{
	return 0.0f;
};

void CStudioRender::SetLODSwitchValue(studiohwdata_t & hardwareData, int lod, float switchValue)
{
};

void CStudioRender::SetColorModulation(float const *pColor)
{
};

void CStudioRender::SetAlphaModulation(float flAlpha)
{
};

void CStudioRender::DrawModel(DrawModelResults_t * pResults, const DrawModelInfo_t &info,
					   matrix3x4_t *pBoneToWorld, float *pFlexWeights, float *pFlexDelayedWeights, const Vector &modelOrigin, int flags)
{
};

void CStudioRender::DrawModelStaticProp(const DrawModelInfo_t &drawInfo, const matrix3x4_t &modelToWorld, int flags)
{
};

void CStudioRender::DrawStaticPropDecals(const DrawModelInfo_t &drawInfo, const matrix3x4_t &modelToWorld)
{
};

void CStudioRender::DrawStaticPropShadows(const DrawModelInfo_t &drawInfo, const matrix3x4_t &modelToWorld, int flags)
{
};

void CStudioRender::ForcedMaterialOverride(IMaterial * newMaterial, OverrideType_t nOverrideType)
{
};

StudioDecalHandle_t CStudioRender::CreateDecalList(studiohwdata_t * pHardwareData)
{
	return 0;
};

void CStudioRender::DestroyDecalList(StudioDecalHandle_t handle)
{
};

void CStudioRender::AddDecal(StudioDecalHandle_t handle, studiohdr_t * pStudioHdr, matrix3x4_t * pBoneToWorld,
					  const Ray_t &ray, const Vector &decalUp, IMaterial *pDecalMaterial, float radius, int body, bool noPokethru, int maxLODToDecal)
{
};

void CStudioRender::ComputeLighting(const Vector *pAmbient, int lightCount,
							 LightDesc_t *pLights, const Vector &pt, const Vector &normal, Vector &lighting)
{
};

void CStudioRender::ComputeLightingConstDirectional(const Vector *pAmbient, int lightCount,
											 LightDesc_t *pLights, const Vector &pt, const Vector &normal, Vector &lighting, float flDirectionalAmount)
{
};

void CStudioRender::AddShadow(IMaterial * pMaterial, void *pProxyData, FlashlightState_t *m_pFlashlightState, VMatrix *pWorldToTexture, ITexture *pFlashlightDepthTexture)
{
};

void CStudioRender::ClearAllShadows()
{
};

int CStudioRender::ComputeModelLod(studiohwdata_t * pHardwareData, float unitSphereSize, float *pMetric)
{
	return 0;
};

void CStudioRender::GetPerfStats(DrawModelResults_t * pResults, const DrawModelInfo_t &info, CUtlBuffer *pSpewBuf) const
{
};

void CStudioRender::GetTriangles(const DrawModelInfo_t &info, matrix3x4_t *pBoneToWorld, GetTriangles_Output_t &out)
{
};

int CStudioRender::GetMaterialList(studiohdr_t * pStudioHdr, int count, IMaterial **ppMaterials)
{
	return 0;
};

int CStudioRender::GetMaterialListFromBodyAndSkin(MDLHandle_t studio, int nSkin, int nBody, int nCountOutputMaterials, IMaterial **ppOutputMaterials)
{
	return 0;
};

void CStudioRender::DrawModelArray(const DrawModelInfo_t &drawInfo, int arrayCount, model_array_instance_t *pInstanceData, int instanceStride, int flags)
{
};