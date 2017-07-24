#pragma once

#include "engine/IEngineSound.h"

class CEngineSoundClient final : public IEngineSound
{
public:
	CEngineSoundClient() = default;
	~CEngineSoundClient() = default;
	
	bool PrecacheSound( const char *pSample, bool bPreload = false, bool bIsUISound = false ) override;
	bool IsSoundPrecached( const char *pSample ) override;
	void PrefetchSound( const char *pSample ) override;

	float GetSoundDuration( const char *pSample ) override;  

	void EmitSound( IRecipientFilter& filter, int iEntIndex, int iChannel, const char *pSample, 
		float flVolume, float flAttenuation, int iFlags = 0, int iPitch = PITCH_NORM, int iSpecialDSP = 0, 
		const Vector *pOrigin = NULL, const Vector *pDirection = NULL, CUtlVector< Vector >* pUtlVecOrigins = NULL, bool bUpdatePositions = true, float soundtime = 0.0f, int speakerentity = -1 ) override;

	void EmitSound( IRecipientFilter& filter, int iEntIndex, int iChannel, const char *pSample, 
		float flVolume, soundlevel_t iSoundlevel, int iFlags = 0, int iPitch = PITCH_NORM, int iSpecialDSP = 0, 
		const Vector *pOrigin = NULL, const Vector *pDirection = NULL, CUtlVector< Vector >* pUtlVecOrigins = NULL, bool bUpdatePositions = true, float soundtime = 0.0f, int speakerentity = -1 ) override;

	void EmitSentenceByIndex( IRecipientFilter& filter, int iEntIndex, int iChannel, int iSentenceIndex, 
		float flVolume, soundlevel_t iSoundlevel, int iFlags = 0, int iPitch = PITCH_NORM,int iSpecialDSP = 0, 
		const Vector *pOrigin = NULL, const Vector *pDirection = NULL, CUtlVector< Vector >* pUtlVecOrigins = NULL, bool bUpdatePositions = true, float soundtime = 0.0f, int speakerentity = -1 ) override;

	void StopSound( int iEntIndex, int iChannel, const char *pSample ) override;

	void StopAllSounds(bool bClearBuffers) override;

	void SetRoomType( IRecipientFilter& filter, int roomType ) override;

	void SetPlayerDSP( IRecipientFilter& filter, int dspType, bool fastReset ) override;
	
	void EmitAmbientSound( const char *pSample, float flVolume, int iPitch = PITCH_NORM, int flags = 0, float soundtime = 0.0f ) override;

	float GetDistGainFromSoundLevel( soundlevel_t soundlevel, float dist ) override;

	int GetGuidForLastSoundEmitted() override;
	bool IsSoundStillPlaying( int guid ) override;
	void StopSoundByGuid( int guid ) override;

	void SetVolumeByGuid( int guid, float fvol ) override;

	void GetActiveSounds( CUtlVector< SndInfo_t >& sndlist ) override;

	void PrecacheSentenceGroup( const char *pGroupName ) override;
	void NotifyBeginMoviePlayback() override;
	void NotifyEndMoviePlayback() override;
};