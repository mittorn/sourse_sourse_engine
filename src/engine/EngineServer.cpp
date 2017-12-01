#include "EngineServer.hpp"

EXPOSE_SINGLE_INTERFACE(CEngineServer, IVEngineServer, INTERFACEVERSION_VENGINESERVER)

void CEngineServer::ChangeLevel( const char *s1, const char *s2 )
{
};

int CEngineServer::IsMapValid( const char *filename )
{
	return 1;
};

bool CEngineServer::IsDedicatedServer()
{
	return true;
};

int CEngineServer::IsInEditMode()
{
	return 0;
};

int CEngineServer::PrecacheModel( const char *s, bool preload)
{
	return -1;
};

int CEngineServer::PrecacheSentenceFile( const char *s, bool preload)
{
	return -1;
};

int CEngineServer::PrecacheDecal( const char *name, bool preload)
{
	return -1;
};

int CEngineServer::PrecacheGeneric( const char *s, bool preload)
{
	return -1;
};

bool CEngineServer::IsModelPrecached( char const *s ) const
{
	return false;
};

bool CEngineServer::IsDecalPrecached( char const *s ) const
{
	return false;
};

bool CEngineServer::IsGenericPrecached( char const *s ) const
{
	return false;
};

int CEngineServer::GetClusterForOrigin( const Vector &org )
{
	return 0;
};

int CEngineServer::GetPVSForCluster( int cluster, int outputpvslength, unsigned char *outputpvs )
{
	return 0;
};

bool CEngineServer::CheckOriginInPVS( const Vector &org, const unsigned char *checkpvs, int checkpvssize )
{
	return false;
};

bool CEngineServer::CheckBoxInPVS( const Vector &mins, const Vector &maxs, const unsigned char *checkpvs, int checkpvssize )
{
	return false;
};

int	CEngineServer::GetPlayerUserId( const edict_t *e ) 
{
	return -1;
};

const char *CEngineServer::GetPlayerNetworkIDString( const edict_t *e )
{
	return "";
};

int CEngineServer::GetEntityCount()
{
	return 0;
};

int CEngineServer::IndexOfEdict( const edict_t *pEdict )
{
	return 0;
};

edict_t *CEngineServer::PEntityOfEntIndex( int iEntIndex )
{
	return nullptr;
};

INetChannelInfo *CEngineServer::GetPlayerNetInfo( int playerIndex )
{
	return nullptr;
};

edict_t *CEngineServer::CreateEdict( int iForceEdictIndex)
{
	return nullptr;
};

void CEngineServer::RemoveEdict( edict_t *e )
{
};

void *CEngineServer::PvAllocEntPrivateData( long cb )
{
	return nullptr;
};

void CEngineServer::FreeEntPrivateData( void *pEntity )
{
};

void *CEngineServer::SaveAllocMemory( size_t num, size_t size )
{
	return nullptr;
};

void CEngineServer::SaveFreeMemory( void *pSaveMem )
{
};

void CEngineServer::EmitAmbientSound( int entindex, const Vector &pos, const char *samp, float vol, soundlevel_t soundlevel, int fFlags, int pitch, float delay)
{
};

void CEngineServer::FadeClientVolume( const edict_t *pEdict, float fadePercent, float fadeOutSeconds, float holdTime, float fadeInSeconds )
{
};

int CEngineServer::SentenceGroupPick( int groupIndex, char *name, int nameBufLen )
{
	return 0;
};

int CEngineServer::SentenceGroupPickSequential( int groupIndex, char *name, int nameBufLen, int sentenceIndex, int reset )
{
	return 0;
};

int CEngineServer::SentenceIndexFromName( const char *pSentenceName )
{
	return 0;
};

const char *CEngineServer::SentenceNameFromIndex( int sentenceIndex )
{
	return "";
};

int CEngineServer::SentenceGroupIndexFromName( const char *pGroupName )
{
	return 0;
};

const char *CEngineServer::SentenceGroupNameFromIndex( int groupIndex )
{
	return "";
};

float CEngineServer::SentenceLength( int sentenceIndex )
{
	return 0.0f;
};

void CEngineServer::ServerCommand( const char *str )
{
};

void CEngineServer::ServerExecute()
{
};

void CEngineServer::ClientCommand( edict_t *pEdict, PRINTF_FORMAT_STRING const char *szFmt, ... )
{
};

void CEngineServer::LightStyle( int style, const char *val )
{
};

void CEngineServer::StaticDecal( const Vector &originInEntitySpace, int decalIndex, int entityIndex, int modelIndex, bool lowpriority )
{
};

void CEngineServer::Message_DetermineMulticastRecipients( bool usepas, const Vector& origin, CBitVec< ABSOLUTE_PLAYER_LIMIT >& playerbits )
{
};

bf_write *CEngineServer::EntityMessageBegin( int ent_index, ServerClass * ent_class, bool reliable )
{
	return nullptr;
};

bf_write *CEngineServer::UserMessageBegin( IRecipientFilter *filter, int msg_type )
{
	return nullptr;
};

void CEngineServer::MessageEnd()
{
};

void CEngineServer::ClientPrintf( edict_t *pEdict, const char *szMsg )
{
};

void CEngineServer::Con_NPrintf( int pos, PRINTF_FORMAT_STRING const char *fmt, ... )
{
};

void CEngineServer::Con_NXPrintf( const struct con_nprint_s *info, PRINTF_FORMAT_STRING const char *fmt, ... )
{
};

void CEngineServer::SetView( const edict_t *pClient, const edict_t *pViewent )
{
};

float CEngineServer::Time()
{
	return 0.0f;
};

void CEngineServer::CrosshairAngle( const edict_t *pClient, float pitch, float yaw )
{
};

void CEngineServer::GetGameDir( char *szGetGameDir, int maxlength )
{
};

int CEngineServer::CompareFileTime( const char *filename1, const char *filename2, int *iCompare )
{
	return 0;
};

bool CEngineServer::LockNetworkStringTables( bool lock )
{
	return false;
};

edict_t *CEngineServer::CreateFakeClient( const char *netname )
{
	return nullptr;
};

const char *CEngineServer::GetClientConVarValue( int clientIndex, const char *name )
{
	return "";
};

const char *CEngineServer::ParseFile( const char *data, char *token, int maxlen )
{
	return "";
};

bool CEngineServer::CopyFile( const char *source, const char *destination )
{
	return false;
};

void CEngineServer::ResetPVS( byte *pvs, int pvssize )
{
};

void CEngineServer::AddOriginToPVS( const Vector &origin )
{
};

void CEngineServer::SetAreaPortalState( int portalNumber, int isOpen )
{
};

void CEngineServer::PlaybackTempEntity( IRecipientFilter& filter, float delay, const void *pSender, const SendTable *pST, int classID  )
{
};

int CEngineServer::CheckHeadnodeVisible( int nodenum, const byte *pvs, int vissize )
{
	return 0;
};

int CEngineServer::CheckAreasConnected( int area1, int area2 )
{
	return 0;
};

int CEngineServer::GetArea( const Vector &origin )
{
	return 0;
};

void CEngineServer::GetAreaBits( int area, unsigned char *bits, int buflen )
{
};

bool CEngineServer::GetAreaPortalPlane( Vector const &vViewOrigin, int portalKey, VPlane *pPlane )
{
	return false;
};

bool CEngineServer::LoadGameState( char const *pMapName, bool createPlayers )
{
	return false;
};

void CEngineServer::LoadAdjacentEnts( const char *pOldLevel, const char *pLandmarkName )
{
};

void CEngineServer::ClearSaveDir()
{
};

const char *CEngineServer::GetMapEntitiesString()
{
	return "";
};

client_textmessage_t *CEngineServer::TextMessageGet( const char *pName )
{
	return nullptr;
};

void CEngineServer::LogPrint( const char *msg )
{
};

void CEngineServer::BuildEntityClusterList( edict_t *pEdict, PVSInfo_t *pPVSInfo )
{
};

void CEngineServer::SolidMoved( edict_t *pSolidEnt, ICollideable *pSolidCollide, const Vector* pPrevAbsOrigin, bool testSurroundingBoundsOnly )
{
};

void CEngineServer::TriggerMoved( edict_t *pTriggerEnt, bool testSurroundingBoundsOnly )
{
};

ISpatialPartition *CEngineServer::CreateSpatialPartition( const Vector& worldmin, const Vector& worldmax )
{
	return nullptr;
};

void CEngineServer::DestroySpatialPartition( ISpatialPartition * )
{
};

void CEngineServer::DrawMapToScratchPad( IScratchPad3D *pPad, unsigned long iFlags )
{
};

const CBitVec<MAX_EDICTS> *CEngineServer::GetEntityTransmitBitsForClient( int iClientIndex )
{
	return nullptr;
};

bool CEngineServer::IsPaused()
{
	return false;
};

void CEngineServer::ForceExactFile( const char *s )
{
};

void CEngineServer::ForceModelBounds( const char *s, const Vector &mins, const Vector &maxs )
{
};

void CEngineServer::ClearSaveDirAfterClientLoad()
{
};

void CEngineServer::SetFakeClientConVarValue( edict_t *pEntity, const char *cvar, const char *value )
{
};

void CEngineServer::ForceSimpleMaterial( const char *s )
{
};

int CEngineServer::IsInCommentaryMode()
{
	return 0;
};

void CEngineServer::SetAreaPortalStates( const int *portalNumbers, const int *isOpen, int nPortals )
{
};

void CEngineServer::NotifyEdictFlagsChange( int iEdict )
{
};

const CCheckTransmitInfo *CEngineServer::GetPrevCheckTransmitInfo( edict_t *pPlayerEdict )
{
	return nullptr;
};

CSharedEdictChangeInfo *CEngineServer::GetSharedEdictChangeInfo()
{
	return nullptr;
};

void CEngineServer::AllowImmediateEdictReuse()
{
};

bool CEngineServer::IsInternalBuild()
{
	return false;
};

IChangeInfoAccessor *CEngineServer::GetChangeAccessor( const edict_t *pEdict )	
{
	return nullptr;
};

char const *CEngineServer::GetMostRecentlyLoadedFileName()
{
	return "";
};

char const *CEngineServer::GetSaveFileName()
{
	return "";
};

void CEngineServer::MultiplayerEndGame()
{
};

void CEngineServer::ChangeTeam( const char *pTeamName )
{
};

void CEngineServer::CleanUpEntityClusterList( PVSInfo_t *pPVSInfo )
{
};

void CEngineServer::SetAchievementMgr( IAchievementMgr *pAchievementMgr )
{
};

IAchievementMgr *CEngineServer::GetAchievementMgr()
{
	return nullptr;
};

int	CEngineServer::GetAppID()
{
	return 0;
};

bool CEngineServer::IsLowViolence()
{
	return false;
};

QueryCvarCookie_t CEngineServer::StartQueryCvarValue( edict_t *pPlayerEntity, const char *pName )
{
	return 0;
};

void CEngineServer::InsertServerCommand( const char *str )
{
};

bool CEngineServer::GetPlayerInfo( int ent_num, player_info_t *pinfo )
{
	return false;
};

bool CEngineServer::IsClientFullyAuthenticated( edict_t *pEdict )
{
	return false;
};

void CEngineServer::SetDedicatedServerBenchmarkMode( bool bBenchmarkMode )
{
};

void CEngineServer::SetGamestatsData( CGamestatsData *pGamestatsData )
{
};

CGamestatsData *CEngineServer::GetGamestatsData()
{
	return nullptr;
};

const CSteamID *CEngineServer::GetClientSteamID( edict_t *pPlayerEdict )
{
	return nullptr;
};

const CSteamID *CEngineServer::GetGameServerSteamID()
{
	return nullptr;
};

void CEngineServer::ClientCommandKeyValues( edict_t *pEdict, KeyValues *pCommand )
{
};

const CSteamID *CEngineServer::GetClientSteamIDByPlayerIndex( int entnum )
{
	return nullptr;
};

int CEngineServer::GetClusterCount()
{
	return 0;
};

int CEngineServer::GetAllClusterBounds( bbox_t *pBBoxList, int maxBBox )
{
	return 0;
};

edict_t *CEngineServer::CreateFakeClientEx( const char *netname, bool bReportFakeClient)
{
	return nullptr;
};

int CEngineServer::GetServerVersion() const
{
	return 0;
};

float CEngineServer::GetServerTime() const
{
	return 0.0f;
};

IServer *CEngineServer::GetIServer()
{
	return nullptr;
};

bool CEngineServer::IsPlayerNameLocked( const edict_t *pEdict )
{
	return false;
};

bool CEngineServer::CanPlayerChangeName( const edict_t *pEdict )
{
	return false;
};

IVEngineServer::eFindMapResult CEngineServer::FindMap(char *pMapName, int nMapNameMax )
{
	return eFindMap_NotFound;
};