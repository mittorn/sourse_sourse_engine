#pragma once

#include "cdll_int.h"

class CEngineClient final : public IVEngineClient
{
public:
	CEngineClient() = default;
	~CEngineClient() = default;
	
	int GetIntersectingSurfaces(const model_t *model,
								const Vector &vCenter, 
								const float radius,
								const bool bOnlyVisibleSurfaces,
								SurfInfo *pInfos, 
								const int nMaxInfos) override;
	
	Vector GetLightForPoint(const Vector &pos, bool bClamp) override;

	IMaterial *TraceLineMaterialAndLighting( const Vector &start, const Vector &end, 
		Vector &diffuseLightColor, Vector& baseColor ) override;

	const char *ParseFile( const char *data, char *token, int maxlen ) override;
	bool CopyLocalFile( const char *source, const char *destination ) override;

	void GetScreenSize( int& width, int& height ) override;

	void ServerCmd( const char *szCmdString, bool bReliable = true ) override;
	void ClientCmd( const char *szCmdString ) override;

	bool GetPlayerInfo( int ent_num, player_info_t *pinfo ) override;

	int GetPlayerForUserID( int userID ) override;

	client_textmessage_t *TextMessageGet( const char *pName ) override;

	bool Con_IsVisible() override;

	int GetLocalPlayer() override;

	const model_t *LoadModel( const char *pName, bool bProp = false ) override;

	float Time() override;

	float GetLastTimeStamp() override;

	CSentence *GetSentence( CAudioSource *pAudioSource ) override;
	float GetSentenceLength( CAudioSource *pAudioSource ) override;
	bool IsStreaming( CAudioSource *pAudioSource ) const override;

	void GetViewAngles( QAngle& va ) override;
	void SetViewAngles( QAngle& va ) override;
	
	int GetMaxClients() override;

	const char *Key_LookupBinding( const char *pBinding ) override;

	const char *Key_BindingForKey( ButtonCode_t code ) override;

	void StartKeyTrapMode() override;
	bool CheckDoneKeyTrapping( ButtonCode_t &code ) override;

	bool IsInGame() override;
	bool IsConnected() override;
	bool IsDrawingLoadingImage() override;

	void Con_NPrintf( int pos, PRINTF_FORMAT_STRING const char *fmt, ... ) override;
	void Con_NXPrintf( const struct con_nprint_s *info, PRINTF_FORMAT_STRING const char *fmt, ... ) override;

	int IsBoxVisible( const Vector& mins, const Vector& maxs ) override;

	int IsBoxInViewCluster( const Vector& mins, const Vector& maxs ) override;
	
	bool CullBox( const Vector& mins, const Vector& maxs ) override;

	void Sound_ExtraUpdate() override;

	const char *GetGameDirectory() override;

	const VMatrix& WorldToScreenMatrix() override;
	
	const VMatrix& WorldToViewMatrix() override;

	int GameLumpVersion( int lumpId ) const override;
	int GameLumpSize( int lumpId ) const override;
	
	bool LoadGameLump( int lumpId, void* pBuffer, int size ) override;

	int LevelLeafCount() const override;
	
	ISpatialQuery* GetBSPTreeQuery() override;
	
	void LinearToGamma( float* linear, float* gamma ) override;

	float LightStyleValue( int style ) override;

	void ComputeDynamicLighting( const Vector& pt, const Vector* pNormal, Vector& color ) override;

	void GetAmbientLightColor( Vector& color ) override;

	int GetDXSupportLevel() override;

	bool SupportsHDR() override;

	void Mat_Stub( IMaterialSystem *pMatSys ) override;

	void GetChapterName( char *pchBuff, int iMaxLength ) override;
	
	char const *GetLevelName() override;
	int	GetLevelVersion() override;
	
#if !defined( NO_VOICE )
	struct IVoiceTweak_s *GetVoiceTweakAPI() override;
#endif
	
	void EngineStats_BeginFrame() override;
	void EngineStats_EndFrame() override;
	
	void FireEvents() override;

	int GetLeavesArea( int *pLeaves, int nLeaves ) override;

	bool DoesBoxTouchAreaFrustum( const Vector &mins, const Vector &maxs, int iArea ) override;

	void SetAudioState( const AudioState_t& state ) override;

	int SentenceGroupPick( int groupIndex, char *name, int nameBufLen ) override;
	int SentenceGroupPickSequential( int groupIndex, char *name, int nameBufLen, int sentenceIndex, int reset ) override;
	int SentenceIndexFromName( const char *pSentenceName ) override;
	const char *SentenceNameFromIndex( int sentenceIndex ) override;
	int SentenceGroupIndexFromName( const char *pGroupName ) override;
	const char *SentenceGroupNameFromIndex( int groupIndex ) override;
	float SentenceLength( int sentenceIndex );

	void ComputeLighting( const Vector& pt, const Vector* pNormal, bool bClamp, Vector& color, Vector *pBoxColors=NULL ) override;

	void ActivateOccluder( int nOccluderIndex, bool bActive ) override;
	bool IsOccluded( const Vector &vecAbsMins, const Vector &vecAbsMaxs ) override;

	void *SaveAllocMemory( size_t num, size_t size ) override;
	void SaveFreeMemory( void *pSaveMem ) override;

	INetChannelInfo	*GetNetChannelInfo() override;

	void DebugDrawPhysCollide( const CPhysCollide *pCollide, IMaterial *pMaterial, matrix3x4_t& transform, const color32 &color ) override;
	
	void CheckPoint( const char *pName ) override;
	
	void DrawPortals() override;
	
	bool IsPlayingDemo() override;
	bool IsRecordingDemo() override;
	bool IsPlayingTimeDemo() override;
	
	int GetDemoRecordingTick() override;
	int GetDemoPlaybackTick() override;
	int GetDemoPlaybackStartTick() override;
	
	float GetDemoPlaybackTimeScale() override;
	
	int GetDemoPlaybackTotalTicks() override;
	
	bool IsPaused() override;
	bool IsTakingScreenshot() override;
	bool IsHLTV() override;
	bool IsLevelMainMenuBackground() override;
	
	void GetMainMenuBackgroundName( char *dest, int destlen ) override;

	void GetVideoModes( int &nCount, vmode_s *&pModes ) override;

	void SetOcclusionParameters( const OcclusionParams_t &params ) override;

	void GetUILanguage( char *dest, int destlen ) override;

	SkyboxVisibility_t IsSkyboxVisibleFromPoint( const Vector &vecPoint ) override;

	const char*	GetMapEntitiesString() override;

	bool IsInEditMode() override;

	float GetScreenAspectRatio() override;

	bool REMOVED_SteamRefreshLogin( const char *password, bool isSecure ) override;
	bool REMOVED_SteamProcessCall( bool & finished ) override;

	unsigned int GetEngineBuildNumber() override;
	const char *GetProductVersionString() override;

	void GrabPreColorCorrectedFrame( int x, int y, int width, int height ) override;

	bool IsHammerRunning() const override;

	void ExecuteClientCmd( const char *szCmdString ) override;

	bool MapHasHDRLighting() override;

	int	GetAppID() override;

	Vector GetLightForPointFast(const Vector &pos, bool bClamp) override;

	void ClientCmd_Unrestricted( const char *szCmdString ) override;
	
	void SetRestrictServerCommands( bool bRestrict ) override;
	void SetRestrictClientCommands( bool bRestrict ) override;

	void SetOverlayBindProxy( int iOverlayID, void *pBindProxy ) override;

	bool CopyFrameBufferToMaterial( const char *pMaterialName ) override;

	void ChangeTeam( const char *pTeamName ) override;

	void ReadConfiguration( const bool readDefault = false ) override; 

	void SetAchievementMgr( IAchievementMgr *pAchievementMgr ) override;
	IAchievementMgr *GetAchievementMgr() override;

	bool MapLoadFailed() override;
	void SetMapLoadFailed( bool bState ) override;
	
	bool IsLowViolence() override;
	const char *GetMostRecentSaveGame() override;
	void SetMostRecentSaveGame( const char *lpszFilename ) override;

	void StartXboxExitingProcess() override;
	
	bool IsSaveInProgress() override;
	
	uint OnStorageDeviceAttached() override;
	void OnStorageDeviceDetached() override;

	void ResetDemoInterpolation() override;

	void SetGamestatsData( CGamestatsData *pGamestatsData ) override;
	CGamestatsData *GetGamestatsData() override;

#if defined( USE_SDL )
	void GetMouseDelta( int &x, int &y, bool bIgnoreNextMouseDelta = false ) override;
#endif

	void ServerCmdKeyValues( KeyValues *pKeyValues ) override;

	bool IsSkippingPlayback() override;
	bool IsLoadingDemo() override;

	bool IsPlayingDemoALocallyRecordedDemo() override;

	const char *Key_LookupBindingExact( const char *pBinding ) override;
	
	void AddPhonemeFile( const char *pszPhonemeFile ) override;
	
	uint GetProtocolVersion() override;
	bool IsWindowedMode() override;

	void FlashWindow() override;

	int GetClientVersion() const override;

	bool IsActiveApp() override;

	void DisconnectInternal() override;

	int GetInstancesRunningCount() override;
};