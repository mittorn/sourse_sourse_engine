#pragma once

#include "soundsystem/snd_audio_source.h"

class CNullAudioSource final : public CAudioSource
{
public:
	CNullAudioSource() = default;
	~CNullAudioSource() = default;
	
	CAudioMixer *CreateMixer() override;
	
	int GetOutputData( void **pData, int samplePosition, int sampleCount, bool forward = true ) override;
	
	int SampleRate() override;
	int SampleSize() override;
	int SampleCount() override;
	
	float TrueSampleSize() override;
	
	bool IsLooped() override;
	bool IsStreaming() override;
	
	float GetRunningLength() override;
	
	int GetNumChannels() override;

	CSentence *GetSentence() override { return nullptr; }
};