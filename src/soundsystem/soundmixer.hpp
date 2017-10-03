#pragma once

#include "soundsystem/snd_audio_source.h"

class CNullSoundMixer final : public CSoundMixer
{
public:
	CNullSoundMixer() = default;
	~CNullSoundMixer() = default;

	bool MixDataToDevice( IAudioDevice *pDevice, channel_t *pChannel, int startSample, int sampleCount, int outputRate, bool forward = true ) override;
	void IncrementSamples( channel_t *pChannel, int startSample, int sampleCount,int outputRate, bool forward = true ) override;
	bool SkipSamples( IAudioDevice *pDevice, channel_t *pChannel, int startSample, int sampleCount, int outputRate, bool forward = true ) override;

	CAudioSource *GetSource() override;

	int GetSamplePosition() override;
	int GetScubPosition() override;

	bool SetSamplePosition( int position, bool scrubbing = false ) override;
	void SetLoopPosition( int position ) override;
	int GetStartPosition() override;

	bool GetActive() override;
	void SetActive( bool active ) override;

	void SetModelIndex( int index ) override;
	int GetModelIndex() const override;

	void SetDirection( bool forward ) override;
	bool GetDirection() const override;

	void SetAutoDelete( bool autodelete ) override;
	bool GetAutoDelete() const override;

	void SetVolume( float volume ) override;
	
	channel_t *GetChannel() override;
private:
	CAudioSource *mpSource;
	channel_t *mpChannel;
	
	float mfVolume;
	
	int mnPos; // sample position in sfx
	int mnLoopPos; // where to loop, -1 = no looping
	
	bool mbActive;
	bool mbAutoDelete;
	bool mbForward; // direction
};