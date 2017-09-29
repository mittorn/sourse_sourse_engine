#pragma once

#include "eiface.h"

class CEngineServer final : public IVEngineServer
{
public:
	CEngineServer() = default;
	~CEngineServer() = default;
	
	void ChangeLevel( const char *s1, const char *s2 ) override;

	int IsMapValid( const char *filename ) override;

	bool IsDedicatedServer() override;

	int IsInEditMode() override;

	int PrecacheModel( const char *s, bool preload = false ) override;
	int PrecacheSentenceFile( const char *s, bool preload = false ) override;
	int PrecacheDecal( const char *name, bool preload = false ) override;
	int PrecacheGeneric( const char *s, bool preload = false ) override;

	bool IsModelPrecached( char const *s ) const override;
	bool IsDecalPrecached( char const *s ) const override;
	bool IsGenericPrecached( char const *s ) const override;

	int GetClusterForOrigin( const Vector &org ) override;
	int GetPVSForCluster( int cluster, int outputpvslength, unsigned char *outputpvs ) override;
	
	bool CheckOriginInPVS( const Vector &org, const unsigned char *checkpvs, int checkpvssize ) override;
	bool CheckBoxInPVS( const Vector &mins, const Vector &maxs, const unsigned char *checkpvs, int checkpvssize ) override;

	int	GetPlayerUserId( const edict_t *e ) override; 
	const char *GetPlayerNetworkIDString( const edict_t *e ) override;

	int GetEntityCount() override;
	int IndexOfEdict( const edict_t *pEdict ) override;
	edict_t *PEntityOfEntIndex( int iEntIndex ) override;
	
	INetChannelInfo* GetPlayerNetInfo( int playerIndex ) override;
	
	edict_t *CreateEdict( int iForceEdictIndex = -1 ) override;
	void RemoveEdict( edict_t *e ) override;
	
	void *PvAllocEntPrivateData( long cb ) override;
	void FreeEntPrivateData( void *pEntity ) override;

	void *SaveAllocMemory( size_t num, size_t size ) override;
	void SaveFreeMemory( void *pSaveMem ) override;
	
	void EmitAmbientSound( int entindex, const Vector &pos, const char *samp, float vol, soundlevel_t soundlevel, int fFlags, int pitch, float delay = 0.0f ) override;

	void FadeClientVolume( const edict_t *pEdict, float fadePercent, float fadeOutSeconds, float holdTime, float fadeInSeconds ) override;
	
	int SentenceGroupPick( int groupIndex, char *name, int nameBufLen ) override;
	int SentenceGroupPickSequential( int groupIndex, char *name, int nameBufLen, int sentenceIndex, int reset ) override;
	int SentenceIndexFromName( const char *pSentenceName ) override;
	const char *SentenceNameFromIndex( int sentenceIndex ) override;
	int SentenceGroupIndexFromName( const char *pGroupName ) override;
	const char *SentenceGroupNameFromIndex( int groupIndex ) override;
	float SentenceLength( int sentenceIndex ) override;

	void ServerCommand( const char *str ) override;
	void ServerExecute() override;
	void ClientCommand( edict_t *pEdict, PRINTF_FORMAT_STRING const char *szFmt, ... ) override;

	void LightStyle( int style, const char *val ) override;

	void StaticDecal( const Vector &originInEntitySpace, int decalIndex, int entityIndex, int modelIndex, bool lowpriority ) override;
	
	void Message_DetermineMulticastRecipients( bool usepas, const Vector& origin, CBitVec< ABSOLUTE_PLAYER_LIMIT >& playerbits ) override;

	bf_write *EntityMessageBegin( int ent_index, ServerClass * ent_class, bool reliable ) override;
	bf_write *UserMessageBegin( IRecipientFilter *filter, int msg_type ) override;
	void MessageEnd() override;

	void ClientPrintf( edict_t *pEdict, const char *szMsg ) override;

	void Con_NPrintf( int pos, PRINTF_FORMAT_STRING const char *fmt, ... ) override;

	void Con_NXPrintf( const struct con_nprint_s *info, PRINTF_FORMAT_STRING const char *fmt, ... ) override;

	void SetView( const edict_t *pClient, const edict_t *pViewent ) override;

	float Time() override;

	void CrosshairAngle( const edict_t *pClient, float pitch, float yaw ) override;

	void GetGameDir( char *szGetGameDir, int maxlength ) override;

	int CompareFileTime( const char *filename1, const char *filename2, int *iCompare ) override;

	bool LockNetworkStringTables( bool lock ) override;

	edict_t *CreateFakeClient( const char *netname ) override;

	const char *GetClientConVarValue( int clientIndex, const char *name ) override;
	
	const char *ParseFile( const char *data, char *token, int maxlen ) override;

	bool CopyFile( const char *source, const char *destination ) override;

	void ResetPVS( byte *pvs, int pvssize ) override;

	void AddOriginToPVS( const Vector &origin ) override;
	
	void SetAreaPortalState( int portalNumber, int isOpen ) override;
	
	void PlaybackTempEntity( IRecipientFilter& filter, float delay, const void *pSender, const SendTable *pST, int classID  ) override;

	int CheckHeadnodeVisible( int nodenum, const byte *pvs, int vissize ) override;

	int CheckAreasConnected( int area1, int area2 ) override;

	int GetArea( const Vector &origin ) override;

	void GetAreaBits( int area, unsigned char *bits, int buflen ) override;

	bool GetAreaPortalPlane( Vector const &vViewOrigin, int portalKey, VPlane *pPlane ) override;

	bool LoadGameState( char const *pMapName, bool createPlayers ) override;
	void LoadAdjacentEnts( const char *pOldLevel, const char *pLandmarkName ) override;
	void ClearSaveDir() override;

	const char*	GetMapEntitiesString() override;

	client_textmessage_t *TextMessageGet( const char *pName ) override;

	void LogPrint( const char *msg ) override;

	void BuildEntityClusterList( edict_t *pEdict, PVSInfo_t *pPVSInfo ) override;

	void SolidMoved( edict_t *pSolidEnt, ICollideable *pSolidCollide, const Vector* pPrevAbsOrigin, bool testSurroundingBoundsOnly ) override;

	void TriggerMoved( edict_t *pTriggerEnt, bool testSurroundingBoundsOnly ) override;
	
	ISpatialPartition *CreateSpatialPartition( const Vector& worldmin, const Vector& worldmax ) override;
	void DestroySpatialPartition( ISpatialPartition * ) override;

	void DrawMapToScratchPad( IScratchPad3D *pPad, unsigned long iFlags ) override;

	const CBitVec<MAX_EDICTS>* GetEntityTransmitBitsForClient( int iClientIndex ) override;
	
	bool IsPaused() override;
	
	void ForceExactFile( const char *s ) override;
	void ForceModelBounds( const char *s, const Vector &mins, const Vector &maxs ) override;
	void ClearSaveDirAfterClientLoad() override;

	void SetFakeClientConVarValue( edict_t *pEntity, const char *cvar, const char *value ) override;
	
	void ForceSimpleMaterial( const char *s ) override;

	int IsInCommentaryMode() override;
	
	void SetAreaPortalStates( const int *portalNumbers, const int *isOpen, int nPortals ) override;

	void NotifyEdictFlagsChange( int iEdict ) override;
	
	const CCheckTransmitInfo* GetPrevCheckTransmitInfo( edict_t *pPlayerEdict ) override;
	
	CSharedEdictChangeInfo* GetSharedEdictChangeInfo() override;

	void AllowImmediateEdictReuse() override;

	bool IsInternalBuild() override;

	IChangeInfoAccessor *GetChangeAccessor( const edict_t *pEdict ) override;	

	char const *GetMostRecentlyLoadedFileName() override;
	char const *GetSaveFileName() override;

	void MultiplayerEndGame() override;
	void ChangeTeam( const char *pTeamName ) override;

	void CleanUpEntityClusterList( PVSInfo_t *pPVSInfo ) override;

	void SetAchievementMgr( IAchievementMgr *pAchievementMgr ) override;
	IAchievementMgr *GetAchievementMgr() override;

	int	GetAppID() override;
	
	bool IsLowViolence() override;

	QueryCvarCookie_t StartQueryCvarValue( edict_t *pPlayerEntity, const char *pName ) override;

	void InsertServerCommand( const char *str ) override;

	bool GetPlayerInfo( int ent_num, player_info_t *pinfo ) override;

	bool IsClientFullyAuthenticated( edict_t *pEdict ) override;

	void SetDedicatedServerBenchmarkMode( bool bBenchmarkMode ) override;

	void SetGamestatsData( CGamestatsData *pGamestatsData ) override;
	CGamestatsData *GetGamestatsData() override;

	const CSteamID *GetClientSteamID( edict_t *pPlayerEdict ) override;

	const CSteamID *GetGameServerSteamID() override;

	void ClientCommandKeyValues( edict_t *pEdict, KeyValues *pCommand ) override;

	const CSteamID *GetClientSteamIDByPlayerIndex( int entnum ) override;

	int GetClusterCount() override;
	int GetAllClusterBounds( bbox_t *pBBoxList, int maxBBox ) override;

	edict_t *CreateFakeClientEx( const char *netname, bool bReportFakeClient = true ) override;

	int GetServerVersion() const override;

	float GetServerTime() const override;

	IServer *GetIServer() override;

	bool IsPlayerNameLocked( const edict_t *pEdict ) override;
	bool CanPlayerChangeName( const edict_t *pEdict ) override;

	eFindMapResult FindMap(char *pMapName, int nMapNameMax ) override;
};