#pragma once

#include "materialsystem/imaterialsystemstub.h"

class CMaterialSystemStub final : public IMaterialSystemStub
{
public:
	CMaterialSystemStub() = default;
	~CMaterialSystemStub() = default;
	
	bool Connect( CreateInterfaceFn factory ) override;
	void Disconnect() override;
	
	void *QueryInterface( const char *pInterfaceName ) override;
	
	InitReturnVal_t Init() override;
	void Shutdown() override;

	CreateInterfaceFn Init( char const* pShaderAPIDLL, 
		IMaterialProxyFactory *pMaterialProxyFactory,
		CreateInterfaceFn fileSystemFactory,
		CreateInterfaceFn cvarFactory=NULL ) override;

	void SetShaderAPI( char const *pShaderAPIDLL ) override;
	void SetAdapter( int nAdapter, int nFlags ) override;

	void ModInit() override;
	void ModShutdown() override;

	void SetThreadMode( MaterialThreadMode_t mode, int nServiceThread = -1 ) override;
	MaterialThreadMode_t GetThreadMode() override;
	bool IsRenderThreadSafe() override;
	void ExecuteQueued() override;

	IMaterialSystemHardwareConfig *GetHardwareConfig( const char *pVersion, int *returnCode ) override;

	bool UpdateConfig( bool bForceUpdate ) override;

	bool OverrideConfig( const MaterialSystem_Config_t &config, bool bForceUpdate ) override;

	const MaterialSystem_Config_t &GetCurrentConfigForVideoCard() const override;

	bool GetRecommendedConfigurationInfo( int nDXLevel, KeyValues * pKeyValues ) override;

	int GetDisplayAdapterCount() const override;
	int GetCurrentAdapter() const override;

	void GetDisplayAdapterInfo( int adapter, MaterialAdapterInfo_t& info ) const override;

	int GetModeCount( int adapter ) const override;

	void GetModeInfo( int adapter, int mode, MaterialVideoMode_t& info ) const override;

	void AddModeChangeCallBack( ModeChangeCallbackFunc_t func ) override;

	void GetDisplayMode( MaterialVideoMode_t& mode ) const override;

	bool SetMode( void* hwnd, const MaterialSystem_Config_t &config ) override;

	bool SupportsMSAAMode( int nMSAAMode ) override;

	const MaterialSystemHardwareIdentifier_t &GetVideoCardIdentifier() const override;

	void SpewDriverInfo() const override;

	void GetDXLevelDefaults(uint &max_dxlevel,uint &recommended_dxlevel) override;

	void GetBackBufferDimensions( int &width, int &height) const override;
	ImageFormat GetBackBufferFormat() const override;

	bool SupportsHDRMode( HDRType_t nHDRModede ) override;

	bool AddView( void* hwnd ) override;
	void RemoveView( void* hwnd ) override;

	void SetView( void* hwnd ) override;

	void BeginFrame( float frameTime ) override;
	void EndFrame() override;
	void Flush( bool flushHardware = false ) override;

	void SwapBuffers() override;

	void EvictManagedResources() override;

	void ReleaseResources() override;
	void ReacquireResources() override;

	void AddReleaseFunc( MaterialBufferReleaseFunc_t func ) override;
	void RemoveReleaseFunc( MaterialBufferReleaseFunc_t func ) override;

	void AddRestoreFunc( MaterialBufferRestoreFunc_t func ) override;
	void RemoveRestoreFunc( MaterialBufferRestoreFunc_t func ) override;

	void ResetTempHWMemory( bool bExitingLevel = false ) override;

	void HandleDeviceLost() override;

	int ShaderCount() const override;
	int GetShaders( int nFirstShader, int nMaxCount, IShader **ppShaderList ) const override;

	int ShaderFlagCount() const override;
	const char *ShaderFlagName( int nIndex ) const override;

	void GetShaderFallback( const char *pShaderName, char *pFallbackShader, int nFallbackLength ) override;

	IMaterialProxyFactory *GetMaterialProxyFactory() override;

	void SetMaterialProxyFactory( IMaterialProxyFactory* pFactory ) override;

	void EnableEditorMaterials() override;

	void SetInStubMode( bool bInStubMode ) override;

	void DebugPrintUsedMaterials( const char *pSearchSubString, bool bVerbose ) override;
	void DebugPrintUsedTextures() override;

	void ToggleSuppressMaterial( char const* pMaterialName ) override;
	void ToggleDebugMaterial( char const* pMaterialName ) override;

	bool UsingFastClipping() override;

	int StencilBufferBits() override;

	void UncacheAllMaterials() override;
	void UncacheUnusedMaterials( bool bRecomputeStateSnapshots = false ) override;

	void CacheUsedMaterials() override;

	void ReloadTextures() override;
	void ReloadMaterials( const char *pSubString = NULL ) override;

	IMaterial * CreateMaterial( const char *pMaterialName, KeyValues *pVMTKeyValues ) override;
	IMaterial * FindMaterial( char const* pMaterialName, const char *pTextureGroupName, bool complain = true, const char *pComplainPrefix = NULL ) override;

	bool IsMaterialLoaded( char const* pMaterialName ) override;

	MaterialHandle_t FirstMaterial() const override;
	MaterialHandle_t NextMaterial( MaterialHandle_t h ) const override;
	MaterialHandle_t InvalidMaterial() const override;

	IMaterial* GetMaterial( MaterialHandle_t h ) const override;

	int GetNumMaterials() const override;

	void SetAsyncTextureLoadCache( void* hFileCache ) override;

	ITexture * FindTexture( char const* pTextureName, const char *pTextureGroupName, bool complain = true, int nAdditionalCreationFlags = 0  ) override;

	bool IsTextureLoaded( char const* pTextureName ) const override;

	ITexture * CreateProceduralTexture( const char	*pTextureName, 
		const char *pTextureGroupName, 
		int w, 
		int h, 
		ImageFormat fmt, 
		int nFlags ) override;

	void BeginRenderTargetAllocation() override;
	void EndRenderTargetAllocation() override;

	ITexture * CreateRenderTargetTexture( int w, 
		int h, 
		RenderTargetSizeMode_t sizeMode,
		ImageFormat	format, 
		MaterialRenderTargetDepth_t depth = MATERIAL_RT_DEPTH_SHARED ) override;

	ITexture * CreateNamedRenderTargetTextureEx(  const char *pRTName,
		int w, 
		int h, 
		RenderTargetSizeMode_t sizeMode,
		ImageFormat format, 
		MaterialRenderTargetDepth_t depth = MATERIAL_RT_DEPTH_SHARED, 
		unsigned int textureFlags = TEXTUREFLAGS_CLAMPS | TEXTUREFLAGS_CLAMPT,
		unsigned int renderTargetFlags = 0 ) override;

	ITexture * CreateNamedRenderTargetTexture( const char *pRTName, 
		int w, 
		int h, 
		RenderTargetSizeMode_t sizeMode,
		ImageFormat format, 
		MaterialRenderTargetDepth_t depth = MATERIAL_RT_DEPTH_SHARED, 
		bool bClampTexCoords = true, 
		bool bAutoMipMap = false ) override;

	ITexture * CreateNamedRenderTargetTextureEx2( const char *pRTName,
		int w, 
		int h, 
		RenderTargetSizeMode_t sizeMode,
		ImageFormat format, 
		MaterialRenderTargetDepth_t depth = MATERIAL_RT_DEPTH_SHARED, 
		unsigned int textureFlags = TEXTUREFLAGS_CLAMPS | TEXTUREFLAGS_CLAMPT,
		unsigned int renderTargetFlags = 0 ) override;

	void BeginLightmapAllocation() override;
	void EndLightmapAllocation() override;

	int  AllocateLightmap( int width, int height, int offsetIntoLightmapPage[2], IMaterial *pMaterial ) override;
	int AllocateWhiteLightmap( IMaterial *pMaterial ) override;

	void UpdateLightmap( int lightmapPageID, int lightmapSize[2],
		int offsetIntoLightmapPage[2], 
		float *pFloatImage, float *pFloatImageBump1,
		float *pFloatImageBump2, float *pFloatImageBump3 ) override;

	int GetNumSortIDs() override;
	void GetSortInfo( MaterialSystem_SortInfo_t *sortInfoArray ) override;

	void GetLightmapPageSize( int lightmap, int *width, int *height ) const override;

	void ResetMaterialLightmapPageInfo() override;

	void ClearBuffers( bool bClearColor, bool bClearDepth, bool bClearStencil = false ) override;

#if defined( _X360 )
	void ListUsedMaterials() override;
	HXUIFONT OpenTrueTypeFont( const char *pFontname, int tall, int style ) override;
	void CloseTrueTypeFont( HXUIFONT hFont ) override;
	bool GetTrueTypeFontMetrics( HXUIFONT hFont, XUIFontMetrics *pFontMetrics, XUICharMetrics charMetrics[256] ) override;
	bool GetTrueTypeGlyphs( HXUIFONT hFont, int numChars, wchar_t *pWch, int *pOffsetX, int *pOffsetY, int *pWidth, int *pHeight, unsigned char *pRGBA, int *pRGBAOffset ) override;
	void PersistDisplay() override;
	void *GetD3DDevice() override;
	bool OwnGPUResources( bool bEnable ) override;
#endif

	IMatRenderContext *	GetRenderContext() override;

	bool SupportsShadowDepthTextures() override;
	void BeginUpdateLightmaps() override;
	void EndUpdateLightmaps() override;

	MaterialLock_t Lock() override;
	void Unlock( MaterialLock_t ) override;

	ImageFormat GetShadowDepthTextureFormat() override;

	bool SupportsFetch4() override;

	IMatRenderContext *CreateRenderContext( MaterialContextType_t type ) override;
	IMatRenderContext *SetRenderContext( IMatRenderContext * ) override;

	bool SupportsCSAAMode( int nNumSamples, int nQualityLevel ) override;

	void RemoveModeChangeCallBack( ModeChangeCallbackFunc_t func ) override;

	IMaterial * FindProceduralMaterial( const char *pMaterialName, const char *pTextureGroupName, KeyValues *pVMTKeyValues ) override;

	ImageFormat GetNullTextureFormat() override;

	void AddTextureAlias( const char *pAlias, const char *pRealName ) override;
	void RemoveTextureAlias( const char *pAlias ) override;

	int AllocateDynamicLightmap( int lightmapSize[2], int *pOutOffsetIntoPage, int frameID ) override;

	void SetExcludedTextures( const char *pScriptName ) override;
	void UpdateExcludedTextures() override;

	bool IsInFrame() const override;

	void CompactMemory() override;

	void ReloadFilesInList( IFileList *pFilesToReload ) override;
	bool AllowThreading( bool bAllow, int nServiceThread ) override;

	IMaterial * FindMaterialEx( char const* pMaterialName, const char *pTextureGroupName, int nContext, bool complain = true, const char *pComplainPrefix = NULL ) override;

#ifdef DX_TO_GL_ABSTRACTION
	void DoStartupShaderPreloading() override;
#endif	

	void SetRenderTargetFrameBufferSizeOverrides( int nWidth, int nHeight ) override;

	void GetRenderTargetFrameBufferDimensions( int & nWidth, int & nHeight ) override;

	char *GetDisplayDeviceName() const override;

	ITexture* CreateTextureFromBits(int w, int h, int mips, ImageFormat fmt, int srcBufferSize, byte* srcBits) override;

	void OverrideRenderTargetAllocation( bool rtAlloc ) override;

	ITextureCompositor*	NewTextureCompositor( int w, int h, const char* pCompositeName, int nTeamNum, uint64 randomSeed, KeyValues* stageDesc, uint32 texCompositeCreateFlags = 0 ) override;

	void AsyncFindTexture( const char* pFilename, const char *pTextureGroupName, IAsyncTextureOperationReceiver* pRecipient, void* pExtraArgs, bool bComplain = true, int nAdditionalCreationFlags = 0 ) override;

	ITexture* CreateNamedTextureFromBitsEx( const char* pName, const char *pTextureGroupName, int w, int h, int mips, ImageFormat fmt, int srcBufferSize, byte* srcBits, int nFlags ) override;

	void SetRealMaterialSystem( IMaterialSystem *pSys ) override;
};