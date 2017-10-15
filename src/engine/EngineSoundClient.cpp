#include "EngineSoundClient.hpp"

EXPOSE_SINGLE_INTERFACE(CEngineSoundClient, IEngineSound, IENGINESOUND_CLIENT_INTERFACE_VERSION)

bool CEngineSoundClient::PrecacheSound( const char *pSample, bool bPreload, bool bIsUISound)
{
	return true;
};

bool CEngineSoundClient::IsSoundPrecached( const char *pSample )
{
	return true;
};

void CEngineSoundClient::PrefetchSound( const char *pSample )
{
};

float CEngineSoundClient::GetSoundDuration( const char *pSample )  
{
	return 0.0f;
};

void CEngineSoundClient::EmitSound( IRecipientFilter& filter, int iEntIndex, int iChannel, const char *pSample, 
	float flVolume, float flAttenuation, int iFlags, int iPitch, int iSpecialDSP, 
	const Vector *pOrigin, const Vector *pDirection, CUtlVector< Vector >* pUtlVecOrigins, bool bUpdatePositions, float soundtime, int speakerentity)
{
};

void CEngineSoundClient::EmitSound( IRecipientFilter& filter, int iEntIndex, int iChannel, const char *pSample, 
	float flVolume, soundlevel_t iSoundlevel, int iFlags, int iPitch, int iSpecialDSP, 
	const Vector *pOrigin, const Vector *pDirection, CUtlVector< Vector >* pUtlVecOrigins, bool bUpdatePositions, float soundtime, int speakerentity)
{
};

void CEngineSoundClient::EmitSentenceByIndex( IRecipientFilter& filter, int iEntIndex, int iChannel, int iSentenceIndex, 
	float flVolume, soundlevel_t iSoundlevel, int iFlags, int iPitch, int iSpecialDSP, 
	const Vector *pOrigin, const Vector *pDirection, CUtlVector< Vector >* pUtlVecOrigins, bool bUpdatePositions, float soundtime, int speakerentity)
{
};

void CEngineSoundClient::StopSound( int iEntIndex, int iChannel, const char *pSample )
{
};

void CEngineSoundClient::StopAllSounds(bool bClearBuffers)
{
};

void CEngineSoundClient::SetRoomType( IRecipientFilter& filter, int roomType )
{
};

void CEngineSoundClient::SetPlayerDSP( IRecipientFilter& filter, int dspType, bool fastReset )
{
};

void CEngineSoundClient::EmitAmbientSound( const char *pSample, float flVolume, int iPitch, int flags, float soundtime)
{
};

float CEngineSoundClient::GetDistGainFromSoundLevel( soundlevel_t soundlevel, float dist )
{
	return 0.0f;
};

int CEngineSoundClient::GetGuidForLastSoundEmitted()
{
	return 0;
};

bool CEngineSoundClient::IsSoundStillPlaying( int guid )
{
	return false;
};

void CEngineSoundClient::StopSoundByGuid( int guid )
{
};

void CEngineSoundClient::SetVolumeByGuid( int guid, float fvol )
{
};

void CEngineSoundClient::GetActiveSounds( CUtlVector< SndInfo_t >& sndlist )
{
};

void CEngineSoundClient::PrecacheSentenceGroup( const char *pGroupName )
{
};

void CEngineSoundClient::NotifyBeginMoviePlayback()
{
};

void CEngineSoundClient::NotifyEndMoviePlayback()
{
};