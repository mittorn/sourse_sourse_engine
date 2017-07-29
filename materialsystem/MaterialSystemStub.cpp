#include "MaterialSystemStub.hpp"

EXPOSE_SINGLE_INTERFACE(CMaterialSystemStub, IMaterialSystemStub, MATERIAL_SYSTEM_STUB_INTERFACE_VERSION)

bool CMaterialSystemStub::Connect( CreateInterfaceFn factory )
{
	return true;
};

void CMaterialSystemStub::Disconnect()
{
};

void *CMaterialSystemStub::QueryInterface( const char *pInterfaceName )
{
	return nullptr;
};

InitReturnVal_t CMaterialSystemStub::Init()
{
	return INIT_OK;
};

void CMaterialSystemStub::Shutdown()
{
};

CreateInterfaceFn CMaterialSystemStub::Init( char const* pShaderAPIDLL, 
	IMaterialProxyFactory *pMaterialProxyFactory,
	CreateInterfaceFn fileSystemFactory,
	CreateInterfaceFn cvarFactory=NULL )
{
	return nullptr;
};

void CMaterialSystemStub::SetShaderAPI( char const *pShaderAPIDLL )
{
};

void CMaterialSystemStub::SetAdapter( int nAdapter, int nFlags )
{
};

void CMaterialSystemStub::ModInit()
{
};

void CMaterialSystemStub::ModShutdown()
{
};

void CMaterialSystemStub::SetThreadMode( MaterialThreadMode_t mode, int nServiceThread = -1 )
{
};

MaterialThreadMode_t CMaterialSystemStub::GetThreadMode()
{
	return MATERIAL_QUEUED_SINGLE_THREADED;
};

bool CMaterialSystemStub::IsRenderThreadSafe()
{
	return true;
};

void CMaterialSystemStub::ExecuteQueued()
{
};

IMaterialSystemHardwareConfig *CMaterialSystemStub::GetHardwareConfig( const char *pVersion, int *returnCode )
{
	return nullptr;
};

bool CMaterialSystemStub::UpdateConfig( bool bForceUpdate )
{
	return true;
};

bool CMaterialSystemStub::OverrideConfig( const MaterialSystem_Config_t &config, bool bForceUpdate )
{
	return true;
};

const MaterialSystem_Config_t &CMaterialSystemStub::GetCurrentConfigForVideoCard() const
{
	return new MaterialSystem_Config_t();
};

bool CMaterialSystemStub::GetRecommendedConfigurationInfo( int nDXLevel, KeyValues * pKeyValues )
{
	return true;
};

int CMaterialSystemStub::GetDisplayAdapterCount() const
{
	return 1;
};

int CMaterialSystemStub::GetCurrentAdapter() const
{
	return 1;
};

void CMaterialSystemStub::GetDisplayAdapterInfo( int adapter, MaterialAdapterInfo_t& info ) const
{
};

int CMaterialSystemStub::GetModeCount( int adapter ) const
{
	return 0;
};

void CMaterialSystemStub::GetModeInfo( int adapter, int mode, MaterialVideoMode_t& info ) const
{
};

void CMaterialSystemStub::AddModeChangeCallBack( ModeChangeCallbackFunc_t func )
{
};

void CMaterialSystemStub::GetDisplayMode( MaterialVideoMode_t& mode ) const
{
};

bool CMaterialSystemStub::SetMode( void* hwnd, const MaterialSystem_Config_t &config )
{
	return true;
};

bool CMaterialSystemStub::SupportsMSAAMode( int nMSAAMode )
{
	return false;
};

const MaterialSystemHardwareIdentifier_t &CMaterialSystemStub::GetVideoCardIdentifier() const
{
	return new MaterialSystemHardwareIdentifier_t;
};

void CMaterialSystemStub::SpewDriverInfo() const
{
};

void CMaterialSystemStub::GetDXLevelDefaults(uint &max_dxlevel,uint &recommended_dxlevel)
{
};

void CMaterialSystemStub::GetBackBufferDimensions( int &width, int &height) const
{
};

ImageFormat CMaterialSystemStub::GetBackBufferFormat() const
{
	return nullptr;
};

bool CMaterialSystemStub::SupportsHDRMode( HDRType_t nHDRModede )
{
	return false;
};

bool CMaterialSystemStub::AddView( void* hwnd )
{
	return true;
};

void CMaterialSystemStub::RemoveView( void* hwnd )
{
};

void CMaterialSystemStub::SetView( void* hwnd )
{
};

void CMaterialSystemStub::BeginFrame( float frameTime )
{
};

void CMaterialSystemStub::EndFrame()
{
};

void CMaterialSystemStub::Flush( bool flushHardware = false )
{
};

void CMaterialSystemStub::SwapBuffers()
{
};

void CMaterialSystemStub::EvictManagedResources()
{
};

void CMaterialSystemStub::ReleaseResources()
{
};

void CMaterialSystemStub::ReacquireResources()
{
};

void CMaterialSystemStub::AddReleaseFunc( MaterialBufferReleaseFunc_t func )
{
};

void CMaterialSystemStub::RemoveReleaseFunc( MaterialBufferReleaseFunc_t func )
{
};

void CMaterialSystemStub::AddRestoreFunc( MaterialBufferRestoreFunc_t func )
{
};

void CMaterialSystemStub::RemoveRestoreFunc( MaterialBufferRestoreFunc_t func )
{
};

void CMaterialSystemStub::ResetTempHWMemory( bool bExitingLevel = false )
{
};

void CMaterialSystemStub::HandleDeviceLost()
{
};

int CMaterialSystemStub::ShaderCount() const
{
	return 0;
};

int CMaterialSystemStub::GetShaders( int nFirstShader, int nMaxCount, IShader **ppShaderList ) const
{
	return 0;
};

int CMaterialSystemStub::ShaderFlagCount() const
{
	return 0;
};

const char *CMaterialSystemStub::ShaderFlagName( int nIndex ) const
{
	return "";
};

void CMaterialSystemStub::GetShaderFallback( const char *pShaderName, char *pFallbackShader, int nFallbackLength )
{
};

IMaterialProxyFactory *CMaterialSystemStub::GetMaterialProxyFactory()
{
	return nullptr;
};

void CMaterialSystemStub::SetMaterialProxyFactory( IMaterialProxyFactory* pFactory )
{
};

void CMaterialSystemStub::EnableEditorMaterials()
{
};

void CMaterialSystemStub::SetInStubMode( bool bInStubMode )
{
};

void CMaterialSystemStub::DebugPrintUsedMaterials( const char *pSearchSubString, bool bVerbose )
{
};

void CMaterialSystemStub::DebugPrintUsedTextures()
{
};

void CMaterialSystemStub::ToggleSuppressMaterial( char const* pMaterialName )
{
};

void CMaterialSystemStub::ToggleDebugMaterial( char const* pMaterialName )
{
};

bool CMaterialSystemStub::UsingFastClipping()
{
	return false;
};

int CMaterialSystemStub::StencilBufferBits()
{
	return 0;
};

void CMaterialSystemStub::UncacheAllMaterials()
{
};

void CMaterialSystemStub::UncacheUnusedMaterials( bool bRecomputeStateSnapshots = false )
{
};

void CMaterialSystemStub::CacheUsedMaterials()
{
};

void CMaterialSystemStub::ReloadTextures()
{
};

void CMaterialSystemStub::ReloadMaterials( const char *pSubString = NULL )
{
};

IMaterial *CMaterialSystemStub::CreateMaterial( const char *pMaterialName, KeyValues *pVMTKeyValues )
{
	return nullptr;
};

IMaterial *CMaterialSystemStub::FindMaterial( char const* pMaterialName, const char *pTextureGroupName, bool complain = true, const char *pComplainPrefix = NULL )
{
	return nullptr;
};

bool CMaterialSystemStub::IsMaterialLoaded( char const* pMaterialName )
{
	return false;
};

MaterialHandle_t CMaterialSystemStub::FirstMaterial() const
{
	return 0;
};

MaterialHandle_t CMaterialSystemStub::NextMaterial( MaterialHandle_t h ) const
{
	return 0;
};

MaterialHandle_t CMaterialSystemStub::InvalidMaterial() const
{
	return 0;
};

IMaterial *CMaterialSystemStub::GetMaterial( MaterialHandle_t h ) const
{
	return nullptr;
};

int CMaterialSystemStub::GetNumMaterials() const
{
	return 0;
};

void CMaterialSystemStub::SetAsyncTextureLoadCache( void* hFileCache )
{
};

ITexture *CMaterialSystemStub::FindTexture( char const* pTextureName, const char *pTextureGroupName, bool complain = true, int nAdditionalCreationFlags = 0  )
{
	return nullptr;
};

bool CMaterialSystemStub::IsTextureLoaded( char const* pTextureName ) const
{
	return false;
};

ITexture *CMaterialSystemStub::CreateProceduralTexture( const char	*pTextureName, 
	const char *pTextureGroupName, 
	int w, 
	int h, 
	ImageFormat fmt, 
	int nFlags )
{
	return nullptr;
};

void CMaterialSystemStub::BeginRenderTargetAllocation()
{
};

void CMaterialSystemStub::EndRenderTargetAllocation()
{
};

ITexture *CMaterialSystemStub::CreateRenderTargetTexture( int w, 
	int h, 
	RenderTargetSizeMode_t sizeMode,
	ImageFormat	format, 
	MaterialRenderTargetDepth_t depth = MATERIAL_RT_DEPTH_SHARED )
{
	return nullptr;
};

ITexture *CMaterialSystemStub::CreateNamedRenderTargetTextureEx(  const char *pRTName,
	int w, 
	int h, 
	RenderTargetSizeMode_t sizeMode,
	ImageFormat format, 
	MaterialRenderTargetDepth_t depth = MATERIAL_RT_DEPTH_SHARED, 
	unsigned int textureFlags = TEXTUREFLAGS_CLAMPS | TEXTUREFLAGS_CLAMPT,
	unsigned int renderTargetFlags = 0 )
{
	return nullptr;
};

ITexture *CMaterialSystemStub::CreateNamedRenderTargetTexture( const char *pRTName, 
	int w, 
	int h, 
	RenderTargetSizeMode_t sizeMode,
	ImageFormat format, 
	MaterialRenderTargetDepth_t depth = MATERIAL_RT_DEPTH_SHARED, 
	bool bClampTexCoords = true, 
	bool bAutoMipMap = false )
{
	return nullptr;
};

ITexture *CMaterialSystemStub::CreateNamedRenderTargetTextureEx2( const char *pRTName,
	int w, 
	int h, 
	RenderTargetSizeMode_t sizeMode,
	ImageFormat format, 
	MaterialRenderTargetDepth_t depth = MATERIAL_RT_DEPTH_SHARED, 
	unsigned int textureFlags = TEXTUREFLAGS_CLAMPS | TEXTUREFLAGS_CLAMPT,
	unsigned int renderTargetFlags = 0 )
{
	return nullptr;
};

void CMaterialSystemStub::BeginLightmapAllocation()
{
};

void CMaterialSystemStub::EndLightmapAllocation()
{
};

int CMaterialSystemStub::AllocateLightmap( int width, int height, int offsetIntoLightmapPage[2], IMaterial *pMaterial )
{
	return 0;
};

int CMaterialSystemStub::AllocateWhiteLightmap( IMaterial *pMaterial )
{
	return 0;
};

void CMaterialSystemStub::UpdateLightmap( int lightmapPageID, int lightmapSize[2],
	int offsetIntoLightmapPage[2], 
	float *pFloatImage, float *pFloatImageBump1,
	float *pFloatImageBump2, float *pFloatImageBump3 )
{
};

int CMaterialSystemStub::GetNumSortIDs()
{
	return 0;
};

void CMaterialSystemStub::GetSortInfo( MaterialSystem_SortInfo_t *sortInfoArray )
{
};

void CMaterialSystemStub::GetLightmapPageSize( int lightmap, int *width, int *height ) const
{
};

void CMaterialSystemStub::ResetMaterialLightmapPageInfo()
{
};

void CMaterialSystemStub::ClearBuffers( bool bClearColor, bool bClearDepth, bool bClearStencil = false )
{
};

#if defined( _X360 )
void CMaterialSystemStub::ListUsedMaterials()
{
};

HXUIFONT CMaterialSystemStub::OpenTrueTypeFont( const char *pFontname, int tall, int style )
{
};

void CMaterialSystemStub::CloseTrueTypeFont( HXUIFONT hFont )
{
};

bool CMaterialSystemStub::GetTrueTypeFontMetrics( HXUIFONT hFont, XUIFontMetrics *pFontMetrics, XUICharMetrics charMetrics[256] )
{
};

bool CMaterialSystemStub::GetTrueTypeGlyphs( HXUIFONT hFont, int numChars, wchar_t *pWch, int *pOffsetX, int *pOffsetY, int *pWidth, int *pHeight, unsigned char *pRGBA, int *pRGBAOffset )
{
};

void CMaterialSystemStub::PersistDisplay()
{
};

void *CMaterialSystemStub::GetD3DDevice()
{
};

bool CMaterialSystemStub::OwnGPUResources( bool bEnable )
{
};
#endif

IMatRenderContext *CMaterialSystemStub::GetRenderContext()
{
	return nullptr;
};

bool CMaterialSystemStub::SupportsShadowDepthTextures()
{
	return false;
};

void CMaterialSystemStub::BeginUpdateLightmaps()
{
};

void CMaterialSystemStub::EndUpdateLightmaps()
{
};

MaterialLock_t CMaterialSystemStub::Lock()
{
	return 0;
};

void CMaterialSystemStub::Unlock( MaterialLock_t )
{
};

ImageFormat CMaterialSystemStub::GetShadowDepthTextureFormat()
{
	return nullptr;
};

bool CMaterialSystemStub::SupportsFetch4()
{
	return false;
};

IMatRenderContext *CMaterialSystemStub::CreateRenderContext( MaterialContextType_t type )
{
	return nullptr;
};

IMatRenderContext *CMaterialSystemStub::SetRenderContext( IMatRenderContext * )
{
	return nullptr;
};

bool CMaterialSystemStub::SupportsCSAAMode( int nNumSamples, int nQualityLevel )
{
	return false;
};

void CMaterialSystemStub::RemoveModeChangeCallBack( ModeChangeCallbackFunc_t func )
{
};

IMaterial *CMaterialSystemStub::FindProceduralMaterial( const char *pMaterialName, const char *pTextureGroupName, KeyValues *pVMTKeyValues )
{
	return nullptr;
};

ImageFormat CMaterialSystemStub::GetNullTextureFormat()
{
	return nullptr;
};

void CMaterialSystemStub::AddTextureAlias( const char *pAlias, const char *pRealName )
{
};

void CMaterialSystemStub::RemoveTextureAlias( const char *pAlias )
{
};

int CMaterialSystemStub::AllocateDynamicLightmap( int lightmapSize[2], int *pOutOffsetIntoPage, int frameID )
{
	return 0;
};

void CMaterialSystemStub::SetExcludedTextures( const char *pScriptName )
{
};

void CMaterialSystemStub::UpdateExcludedTextures()
{
};

bool CMaterialSystemStub::IsInFrame() const
{
};

void CMaterialSystemStub::CompactMemory()
{
};

void CMaterialSystemStub::ReloadFilesInList( IFileList *pFilesToReload )
{
};

bool CMaterialSystemStub::AllowThreading( bool bAllow, int nServiceThread )
{
	return false;
};

IMaterial *CMaterialSystemStub::FindMaterialEx( char const* pMaterialName, const char *pTextureGroupName, int nContext, bool complain = true, const char *pComplainPrefix = NULL )
{
	return nullptr;
};

#ifdef DX_TO_GL_ABSTRACTION
void CMaterialSystemStub::DoStartupShaderPreloading()
{
};
#endif	

void CMaterialSystemStub::SetRenderTargetFrameBufferSizeOverrides( int nWidth, int nHeight )
{
};

void CMaterialSystemStub::GetRenderTargetFrameBufferDimensions( int & nWidth, int & nHeight )
{
};

char *CMaterialSystemStub::GetDisplayDeviceName() const
{
	return nullptr;
};

ITexture* CMaterialSystemStub::CreateTextureFromBits(int w, int h, int mips, ImageFormat fmt, int srcBufferSize, byte* srcBits)
{
	return nullptr;
};

void CMaterialSystemStub::OverrideRenderTargetAllocation( bool rtAlloc )
{
};

ITextureCompositor*	CMaterialSystemStub::NewTextureCompositor( int w, int h, const char* pCompositeName, int nTeamNum, uint64 randomSeed, KeyValues* stageDesc, uint32 texCompositeCreateFlags = 0 )
{
	return nullptr;
};

void CMaterialSystemStub::AsyncFindTexture( const char* pFilename, const char *pTextureGroupName, IAsyncTextureOperationReceiver* pRecipient, void* pExtraArgs, bool bComplain = true, int nAdditionalCreationFlags = 0 )
{
};

ITexture* CMaterialSystemStub::CreateNamedTextureFromBitsEx( const char* pName, const char *pTextureGroupName, int w, int h, int mips, ImageFormat fmt, int srcBufferSize, byte* srcBits, int nFlags )
{
	return nullptr;
};

void CMaterialSystemStub::SetRealMaterialSystem( IMaterialSystem *pSys )
{
};