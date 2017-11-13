#pragma once

#include "istudiorender.h"

class CStudioRender final : public IStudioRender
{
public:
	CStudioRender() = default;
	~CStudioRender() = default;
	
	bool Connect(CreateInterfaceFn factory) override;
	void Disconnect() override;

	void *QueryInterface(const char *pInterfaceName) override;

	InitReturnVal_t Init() override;
	void Shutdown() override;

	void BeginFrame() override;
	void EndFrame() override;

	void Mat_Stub(IMaterialSystem * pMatSys) override;

	void UpdateConfig(const StudioRenderConfig_t &config) override;
	void GetCurrentConfig(StudioRenderConfig_t & config) override;

	bool LoadModel(studiohdr_t * pStudioHdr, void *pVtxData, studiohwdata_t *pHardwareData) override;
	void UnloadModel(studiohwdata_t * pHardwareData) override;

	void RefreshStudioHdr(studiohdr_t * pStudioHdr, studiohwdata_t * pHardwareData) override;

	void SetEyeViewTarget(const studiohdr_t *pStudioHdr, int nBodyIndex, const Vector &worldPosition) override;

	int GetNumAmbientLightSamples() override;
	const Vector *GetAmbientLightDirections() override;
	void SetAmbientLightColors(const Vector4D *pAmbientOnlyColors) override;
	void SetAmbientLightColors(const Vector *pAmbientOnlyColors) override;
	void SetLocalLights(int numLights, const LightDesc_t *pLights) override;

	void SetViewState(const Vector &viewOrigin, const Vector &viewRight,
	                          const Vector &viewUp, const Vector &viewPlaneNormal) override;

	void LockFlexWeights(int nWeightCount, float **ppFlexWeights, float **ppFlexDelayedWeights) override;
	void UnlockFlexWeights() override;

	matrix3x4_t *LockBoneMatrices(int nBoneCount) override;
	void UnlockBoneMatrices() override;

	int GetNumLODs(const studiohwdata_t &hardwareData) const override;
	float GetLODSwitchValue(const studiohwdata_t &hardwareData, int lod) const override;
	void SetLODSwitchValue(studiohwdata_t & hardwareData, int lod, float switchValue) override;

	void SetColorModulation(float const *pColor) override;
	void SetAlphaModulation(float flAlpha) override;

	void DrawModel(DrawModelResults_t * pResults, const DrawModelInfo_t &info,
	                       matrix3x4_t *pBoneToWorld, float *pFlexWeights, float *pFlexDelayedWeights, const Vector &modelOrigin, int flags) override;

	void DrawModelStaticProp(const DrawModelInfo_t &drawInfo, const matrix3x4_t &modelToWorld, int flags) override;
	void DrawStaticPropDecals(const DrawModelInfo_t &drawInfo, const matrix3x4_t &modelToWorld) override;
	void DrawStaticPropShadows(const DrawModelInfo_t &drawInfo, const matrix3x4_t &modelToWorld, int flags) override;

	void ForcedMaterialOverride(IMaterial * newMaterial, OverrideType_t nOverrideType) override;

	StudioDecalHandle_t CreateDecalList(studiohwdata_t * pHardwareData) override;
	void DestroyDecalList(StudioDecalHandle_t handle) override;

	void AddDecal(StudioDecalHandle_t handle, studiohdr_t * pStudioHdr, matrix3x4_t * pBoneToWorld,
	                      const Ray_t &ray, const Vector &decalUp, IMaterial *pDecalMaterial, float radius, int body, bool noPokethru, int maxLODToDecal) override;

	void ComputeLighting(const Vector *pAmbient, int lightCount,
	                             LightDesc_t *pLights, const Vector &pt, const Vector &normal, Vector &lighting) override;

	void ComputeLightingConstDirectional(const Vector *pAmbient, int lightCount,
	                                             LightDesc_t *pLights, const Vector &pt, const Vector &normal, Vector &lighting, float flDirectionalAmount) override;

	void AddShadow(IMaterial * pMaterial, void *pProxyData, FlashlightState_t *m_pFlashlightState, VMatrix *pWorldToTexture, ITexture *pFlashlightDepthTexture) override;
	void ClearAllShadows() override;

	int ComputeModelLod(studiohwdata_t * pHardwareData, float unitSphereSize, float *pMetric) override;

	void GetPerfStats(DrawModelResults_t * pResults, const DrawModelInfo_t &info, CUtlBuffer *pSpewBuf) const override;
	void GetTriangles(const DrawModelInfo_t &info, matrix3x4_t *pBoneToWorld, GetTriangles_Output_t &out) override;

	int GetMaterialList(studiohdr_t * pStudioHdr, int count, IMaterial **ppMaterials) override;
	int GetMaterialListFromBodyAndSkin(MDLHandle_t studio, int nSkin, int nBody, int nCountOutputMaterials, IMaterial **ppOutputMaterials) override;
	
	void DrawModelArray(const DrawModelInfo_t &drawInfo, int arrayCount, model_array_instance_t *pInstanceData, int instanceStride, int flags) override;
};