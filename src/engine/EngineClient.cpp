#include "EngineClient.hpp"

EXPOSE_SINGLE_INTERFACE(CEngineClient, IVEngineClient, VENGINE_CLIENT_INTERFACE_VERSION)

int CEngineClient::GetIntersectingSurfaces(const model_t *model,
							const Vector &vCenter, 
							const float radius,
							const bool bOnlyVisibleSurfaces,
							SurfInfo *pInfos, 
							const int nMaxInfos)
{
	return 0;
};

Vector CEngineClient::GetLightForPoint(const Vector &pos, bool bClamp)
{
	return Vector(0);
};

IMaterial *CEngineClient::TraceLineMaterialAndLighting( const Vector &start, const Vector &end, 
	Vector &diffuseLightColor, Vector& baseColor )
{
	return nullptr;
};

const char *CEngineClient::ParseFile( const char *data, char *token, int maxlen )
{
	return "";
};

bool CEngineClient::CopyLocalFile( const char *source, const char *destination )
{
	return false;
};

void CEngineClient::GetScreenSize( int& width, int& height )
{
};

void CEngineClient::ServerCmd( const char *szCmdString, bool bReliable)
{
};

void CEngineClient::ClientCmd( const char *szCmdString )
{
};

bool CEngineClient::GetPlayerInfo( int ent_num, player_info_t *pinfo )
{
	return false;
};

int CEngineClient::GetPlayerForUserID( int userID )
{
	return 0;
};

client_textmessage_t *CEngineClient::TextMessageGet( const char *pName )
{
	return nullptr;
};

bool CEngineClient::Con_IsVisible()
{
	return false;
};

int CEngineClient::GetLocalPlayer()
{
	return 1;
};

const model_t *CEngineClient::LoadModel( const char *pName, bool bProp)
{
	return nullptr;
};

float CEngineClient::Time()
{
	return 0.0f;
};

float CEngineClient::GetLastTimeStamp()
{
	return 0.0f;
};

CSentence *CEngineClient::GetSentence( CAudioSource *pAudioSource )
{
	return nullptr;
};

float CEngineClient::GetSentenceLength( CAudioSource *pAudioSource )
{
	return 0.0f;
};

bool CEngineClient::IsStreaming( CAudioSource *pAudioSource ) const
{
	return 0;
};

void CEngineClient::GetViewAngles( QAngle& va )
{
};

void CEngineClient::SetViewAngles( QAngle& va )
{
};

int CEngineClient::GetMaxClients()
{
	return 1;
};

const char *CEngineClient::Key_LookupBinding( const char *pBinding )
{
	return "";
};

const char *CEngineClient::Key_BindingForKey( ButtonCode_t code )
{
	return "";
};

void CEngineClient::StartKeyTrapMode()
{
};

bool CEngineClient::CheckDoneKeyTrapping( ButtonCode_t &code )
{
	return false;
};

bool CEngineClient::IsInGame()
{
	return false;
};

bool CEngineClient::IsConnected()
{
	return false;
};

bool CEngineClient::IsDrawingLoadingImage()
{
	return false;
};

void CEngineClient::Con_NPrintf( int pos, PRINTF_FORMAT_STRING const char *fmt, ... )
{
};

void CEngineClient::Con_NXPrintf( const struct con_nprint_s *info, PRINTF_FORMAT_STRING const char *fmt, ... )
{
};

int CEngineClient::IsBoxVisible( const Vector& mins, const Vector& maxs )
{
	return 0;
};

int CEngineClient::IsBoxInViewCluster( const Vector& mins, const Vector& maxs )
{
	return 0;
};

bool CEngineClient::CullBox( const Vector& mins, const Vector& maxs )
{
	return false;
};

void CEngineClient::Sound_ExtraUpdate()
{
};

const char *CEngineClient::GetGameDirectory()
{
	return "";
};

const VMatrix &CEngineClient::WorldToScreenMatrix()
{
	return VMatrix();
};

const VMatrix &CEngineClient::WorldToViewMatrix()
{
	return VMatrix();
};

int CEngineClient::GameLumpVersion( int lumpId ) const
{
	return 0;
};

int CEngineClient::GameLumpSize( int lumpId ) const
{
	return 0;
};

bool CEngineClient::LoadGameLump( int lumpId, void* pBuffer, int size )
{
	return false;
};

int CEngineClient::LevelLeafCount() const
{
	return 0;
};

ISpatialQuery *CEngineClient::GetBSPTreeQuery()
{
	return nullptr;
};

void CEngineClient::LinearToGamma( float* linear, float* gamma )
{
};

float CEngineClient::LightStyleValue( int style )
{
	return 0.0f;
};

void CEngineClient::ComputeDynamicLighting( const Vector& pt, const Vector* pNormal, Vector& color )
{
};

void CEngineClient::GetAmbientLightColor( Vector& color )
{
};

int CEngineClient::GetDXSupportLevel()
{
	return 0;
};

bool CEngineClient::SupportsHDR()
{
	return false;
};

void CEngineClient::Mat_Stub( IMaterialSystem *pMatSys )
{
};

void CEngineClient::GetChapterName( char *pchBuff, int iMaxLength )
{
};

char const *CEngineClient::GetLevelName()
{
	return "";
};

int	CEngineClient::GetLevelVersion()
{
	return 0;
};

#if !defined( NO_VOICE )
struct IVoiceTweak_s *CEngineClient::GetVoiceTweakAPI()
{
	return nullptr;
};
#endif

void CEngineClient::EngineStats_BeginFrame()
{
};

void CEngineClient::EngineStats_EndFrame()
{
};

void CEngineClient::FireEvents()
{
};

int CEngineClient::GetLeavesArea( int *pLeaves, int nLeaves )
{
	return 0;
};

bool CEngineClient::DoesBoxTouchAreaFrustum( const Vector &mins, const Vector &maxs, int iArea )
{
	return false;
};

void CEngineClient::SetAudioState( const AudioState_t& state )
{
};

int CEngineClient::SentenceGroupPick( int groupIndex, char *name, int nameBufLen )
{
	return 0;
};

int CEngineClient::SentenceGroupPickSequential( int groupIndex, char *name, int nameBufLen, int sentenceIndex, int reset )
{
	return 0;
};

int CEngineClient::SentenceIndexFromName( const char *pSentenceName )
{
	return 0;
};

const char *CEngineClient::SentenceNameFromIndex( int sentenceIndex )
{
	return "";
};

int CEngineClient::SentenceGroupIndexFromName( const char *pGroupName )
{
	return 0;
};

const char *CEngineClient::SentenceGroupNameFromIndex( int groupIndex )
{
	return "";
};

float CEngineClient::SentenceLength( int sentenceIndex );
{
	return 0.0f;
};

void CEngineClient::ComputeLighting( const Vector& pt, const Vector* pNormal, bool bClamp, Vector& color, Vector *pBoxColors)
{
};

void CEngineClient::ActivateOccluder( int nOccluderIndex, bool bActive )
{
};

bool CEngineClient::IsOccluded( const Vector &vecAbsMins, const Vector &vecAbsMaxs )
{
	return false;
};

void *CEngineClient::SaveAllocMemory( size_t num, size_t size )
{
	return nullptr;
};

void CEngineClient::SaveFreeMemory( void *pSaveMem )
{
};

INetChannelInfo	*CEngineClient::GetNetChannelInfo()
{
	return nullptr;
};

void CEngineClient::DebugDrawPhysCollide( const CPhysCollide *pCollide, IMaterial *pMaterial, matrix3x4_t& transform, const color32 &color )
{
};

void CEngineClient::CheckPoint( const char *pName )
{
};

void CEngineClient::DrawPortals()
{
};

bool CEngineClient::IsPlayingDemo()
{
	return false;
};

bool CEngineClient::IsRecordingDemo()
{
	return false;
};

bool CEngineClient::IsPlayingTimeDemo()
{
	return false;
};

int CEngineClient::GetDemoRecordingTick()
{
	return 0;
};

int CEngineClient::GetDemoPlaybackTick()
{
	return 0;
};

int CEngineClient::GetDemoPlaybackStartTick()
{
	return 0;
};

float CEngineClient::GetDemoPlaybackTimeScale()
{
	return 0.0f;
};

int CEngineClient::GetDemoPlaybackTotalTicks()
{
	return 0;
};

bool CEngineClient::IsPaused()
{
	return false;
};

bool CEngineClient::IsTakingScreenshot()
{
	return false;
};

bool CEngineClient::IsHLTV()
{
	return false;
};

bool CEngineClient::IsLevelMainMenuBackground()
{
	return false;
};

void CEngineClient::GetMainMenuBackgroundName( char *dest, int destlen )
{
};

void CEngineClient::GetVideoModes( int &nCount, vmode_s *&pModes )
{
};

void CEngineClient::SetOcclusionParameters( const OcclusionParams_t &params )
{
};

void CEngineClient::GetUILanguage( char *dest, int destlen )
{
};

SkyboxVisibility_t CEngineClient::IsSkyboxVisibleFromPoint( const Vector &vecPoint )
{
	return SKYBOX_NOT_VISIBLE;
};

const char *CEngineClient::GetMapEntitiesString()
{
	return "";
};

bool CEngineClient::IsInEditMode()
{
	return false;
};

float CEngineClient::GetScreenAspectRatio()
{
	return 0.0f;
};

bool CEngineClient::REMOVED_SteamRefreshLogin( const char *password, bool isSecure )
{
	return false;
};

bool CEngineClient::REMOVED_SteamProcessCall( bool & finished )
{
	return false;
};

unsigned int CEngineClient::GetEngineBuildNumber()
{
	return 0;
};

const char *CEngineClient::GetProductVersionString()
{
	return "";
};

void CEngineClient::GrabPreColorCorrectedFrame( int x, int y, int width, int height )
{
};

bool CEngineClient::IsHammerRunning() const
{
	return false;
};

void CEngineClient::ExecuteClientCmd( const char *szCmdString )
{
};

bool CEngineClient::MapHasHDRLighting()
{
	return false;
};

int	CEngineClient::GetAppID()
{
	return 0;
};

Vector CEngineClient::GetLightForPointFast(const Vector &pos, bool bClamp)
{
	return Vector(0);
};

void CEngineClient::ClientCmd_Unrestricted( const char *szCmdString )
{
};

void CEngineClient::SetRestrictServerCommands( bool bRestrict )
{
};

void CEngineClient::SetRestrictClientCommands( bool bRestrict )
{
};

void CEngineClient::SetOverlayBindProxy( int iOverlayID, void *pBindProxy )
{
};

bool CEngineClient::CopyFrameBufferToMaterial( const char *pMaterialName )
{
	return false;
};

void CEngineClient::ChangeTeam( const char *pTeamName )
{
};

void CEngineClient::ReadConfiguration( const bool readDefault) 
{
};

void CEngineClient::SetAchievementMgr( IAchievementMgr *pAchievementMgr )
{
};

IAchievementMgr *CEngineClient::GetAchievementMgr()
{
	return nullptr;
};

bool CEngineClient::MapLoadFailed()
{
	return false;
};

void CEngineClient::SetMapLoadFailed( bool bState )
{
};

bool CEngineClient::IsLowViolence()
{
	return false;
};

const char *CEngineClient::GetMostRecentSaveGame()
{
	return "";
};

void CEngineClient::SetMostRecentSaveGame( const char *lpszFilename )
{
};

void CEngineClient::StartXboxExitingProcess()
{
};

bool CEngineClient::IsSaveInProgress()
{
	return false;
};

uint CEngineClient::OnStorageDeviceAttached()
{
	return 0;
};

void CEngineClient::OnStorageDeviceDetached()
{
};

void CEngineClient::ResetDemoInterpolation()
{
};

void CEngineClient::SetGamestatsData( CGamestatsData *pGamestatsData )
{
};

CGamestatsData *CEngineClient::GetGamestatsData()
{
	return nullptr;
};

#if defined( USE_SDL )
void CEngineClient::GetMouseDelta( int &x, int &y, bool bIgnoreNextMouseDelta)
{
};
#endif

void CEngineClient::ServerCmdKeyValues( KeyValues *pKeyValues )
{
};

bool CEngineClient::IsSkippingPlayback()
{
	return true;
};

bool CEngineClient::IsLoadingDemo()
{
	return true;
};

bool CEngineClient::IsPlayingDemoALocallyRecordedDemo()
{
	return true;
};

const char *CEngineClient::Key_LookupBindingExact( const char *pBinding )
{
	return "";
};

void CEngineClient::AddPhonemeFile( const char *pszPhonemeFile )
{
};

uint CEngineClient::GetProtocolVersion()
{
	return 0;
};

bool CEngineClient::IsWindowedMode()
{
	return true;
};

void CEngineClient::FlashWindow()
{
};

int CEngineClient::GetClientVersion() const
{
	return 0;
};

bool CEngineClient::IsActiveApp()
{
	return true;
};

void CEngineClient::DisconnectInternal()
{
};

int CEngineClient::GetInstancesRunningCount()
{
	return 1;
};