#include "EngineSoundClient.hpp"

EXPOSE_SINGLE_INTERFACE(CEngineSoundClient, IEngineSound, IENGINESOUND_SERVER_INTERFACE_VERSION)

bool CEngineSoundServer::PrecacheSound( const char *pSample, bool bPreload, bool bIsUISound)
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
	float flVolume, float flAttenuation, int iFlags, int iPitch, int iSpecialDSP, 
	const Vector *pOrigin, const Vector *pDirection, CUtlVector< Vector >* pUtlVecOrigins, bool bUpdatePositions, float soundtime, int speakerentity)
{
};

void CEngineSoundServer::EmitSound( IRecipientFilter& filter, int iEntIndex, int iChannel, const char *pSample, 
	float flVolume, soundlevel_t iSoundlevel, int iFlags, int iPitch, int iSpecialDSP, 
	const Vector *pOrigin, const Vector *pDirection, CUtlVector< Vector >* pUtlVecOrigins, bool bUpdatePositions, float soundtime, int speakerentity)
{
};

void CEngineSoundServer::EmitSentenceByIndex( IRecipientFilter& filter, int iEntIndex, int iChannel, int iSentenceIndex, 
	float flVolume, soundlevel_t iSoundlevel, int iFlags, int iPitch, int iSpecialDSP, 
	const Vector *pOrigin, const Vector *pDirection, CUtlVector< Vector >* pUtlVecOrigins, bool bUpdatePositions, float soundtime, int speakerentity)
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

void CEngineSoundServer::EmitAmbientSound( const char *pSample, float flVolume, int iPitch, int flags, float soundtime)
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