#pragma once

#include "soundsystem/isoundsystem.h"

class CSoundSystem final : public ISoundSystem
{
public:
	CSoundSystem() = default;
	~CSoundSystem() = default;
	
	bool Connect(CreateInterfaceFn factory) override;
	void Disconnect() override;

	void *QueryInterface(const char *pInterfaceName) override;

	InitReturnVal_t Init() override;
	void Shutdown() override;
	
	void Update( float time ) override;
	void Flush() override;

	CAudioSource *FindOrAddSound( const char *filename ) override;
	CAudioSource *LoadSound( const char *wavfile ) override;

	void PlaySound( CAudioSource *source, float volume, CAudioMixer **ppMixer ) override;

	bool IsSoundPlaying( CAudioMixer *pMixer ) override;
	CAudioMixer *FindMixer( CAudioSource *source ) override;

	void StopAll() override;
	void StopSound( CAudioMixer *mixer ) override;
};