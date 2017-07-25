#include "soundmixer.hpp"

bool CNullSoundMixer::MixDataToDevice( IAudioDevice *pDevice, channel_t *pChannel, int startSample, int sampleCount, int outputRate, bool forward = true )
{
	return true;
};

void CNullSoundMixer::IncrementSamples( channel_t *pChannel, int startSample, int sampleCount,int outputRate, bool forward = true )
{
};

bool CNullSoundMixer::SkipSamples( IAudioDevice *pDevice, channel_t *pChannel, int startSample, int sampleCount, int outputRate, bool forward = true )
{
	return true;
};

CAudioSource *CNullSoundMixer::GetSource()
{
	return nullptr;
};

int CNullSoundMixer::GetSamplePosition()
{
	return 0;
};

int CNullSoundMixer::GetScubPosition()
{
	return 0;
};

bool CNullSoundMixer::SetSamplePosition( int position, bool scrubbing )
{
	return false;
};

void CNullSoundMixer::SetLoopPosition( int position )
{
};

int CNullSoundMixer::GetStartPosition()
{
	return 0;
};

bool CNullSoundMixer::GetActive()
{
	return true;
};

void CNullSoundMixer::SetActive( bool active )
{
};

void CNullSoundMixer::SetModelIndex( int index )
{
};

int CNullSoundMixer::GetModelIndex() const
{
	return 0;
};

void CNullSoundMixer::SetDirection( bool forward )
{
};

bool CNullSoundMixer::GetDirection() const
{
	return false;
};

void CNullSoundMixer::SetAutoDelete( bool autodelete )
{
};

bool CNullSoundMixer::GetAutoDelete() const
{
	return false;
};

void CNullSoundMixer::SetVolume( float volume )
{
};

channel_t *CNullSoundMixer::GetChannel()
{
	return nullptr;
};