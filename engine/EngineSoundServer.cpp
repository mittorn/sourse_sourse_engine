#include "EngineSoundClient.hpp"

EXPOSE_SINGLE_INTERFACE(CEngineSoundClient, IEngineSound, IENGINESOUND_SERVER_INTERFACE_VERSION)

bool CEngineSoundServer::PrecacheSound( const char *pSample, bool bPreload = false, bool bIsUISound = false )
{
	return true;
};

bool CEngineSoundServer::IsSoundPrecached( const char *pSample )
{
	return true;
};

void CEngineSoundServer::PrefetchSound( const char *pSample )
{
};

float CEngineSoundServer::GetSoundDuration( const char *pSample )  
{
	return 0.0f;
};

void CEngineSoundServer::EmitSound( IRecipientFilter& filter, int iEntIndex, int iChannel, const char *pSample, 
	float flVolume, float flAttenuation, int iFlags = 0, int iPitch = PITCH_NORM, int iSpecialDSP = 0, 
	const Vector *pOrigin = NULL, const Vector *pDirection = NULL, CUtlVector< Vector >* pUtlVecOrigins = NULL, bool bUpdatePositions = true, float soundtime = 0.0f, int speakerentity = -1 )
{
};

void CEngineSoundServer::EmitSound( IRecipientFilter& filter, int iEntIndex, int iChannel, const char *pSample, 
	float flVolume, soundlevel_t iSoundlevel, int iFlags = 0, int iPitch = PITCH_NORM, int iSpecialDSP = 0, 
	const Vector *pOrigin = NULL, const Vector *pDirection = NULL, CUtlVector< Vector >* pUtlVecOrigins = NULL, bool bUpdatePositions = true, float soundtime = 0.0f, int speakerentity = -1 )
{
};

void CEngineSoundServer::EmitSentenceByIndex( IRecipientFilter& filter, int iEntIndex, int iChannel, int iSentenceIndex, 
	float flVolume, soundlevel_t iSoundlevel, int iFlags = 0, int iPitch = PITCH_NORM,int iSpecialDSP = 0, 
	const Vector *pOrigin = NULL, const Vector *pDirection = NULL, CUtlVector< Vector >* pUtlVecOrigins = NULL, bool bUpdatePositions = true, float soundtime = 0.0f, int speakerentity = -1 )
{
};

void CEngineSoundServer::StopSound( int iEntIndex, int iChannel, const char *pSample )
{
};

void CEngineSoundServer::StopAllSounds(bool bClearBuffers)
{
};

void CEngineSoundServer::SetRoomType( IRecipientFilter& filter, int roomType )
{
};

void CEngineSoundServer::SetPlayerDSP( IRecipientFilter& filter, int dspType, bool fastReset )
{
};

void CEngineSoundServer::EmitAmbientSound( const char *pSample, float flVolume, int iPitch = PITCH_NORM, int flags = 0, float soundtime = 0.0f )
{
};

float CEngineSoundServer::GetDistGainFromSoundLevel( soundlevel_t soundlevel, float dist )
{
	return 0.0f;
};

int CEngineSoundServer::GetGuidForLastSoundEmitted()
{
	return 0;
};

bool CEngineSoundServer::IsSoundStillPlaying( int guid )
{
	return false;
};

void CEngineSoundServer::StopSoundByGuid( int guid )
{
};

void CEngineSoundServer::SetVolumeByGuid( int guid, float fvol )
{
};

void CEngineSoundServer::GetActiveSounds( CUtlVector< SndInfo_t >& sndlist )
{
};

void CEngineSoundServer::PrecacheSentenceGroup( const char *pGroupName )
{
};

void CEngineSoundServer::NotifyBeginMoviePlayback()
{
};

void CEngineSoundServer::NotifyEndMoviePlayback()
{
};