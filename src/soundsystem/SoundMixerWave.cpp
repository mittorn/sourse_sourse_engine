#include "soundmixer.hpp"

bool CNullSoundMixer::MixDataToDevice( IAudioDevice *pDevice, channel_t *pChannel, int startSample, int sampleCount, int outputRate, bool forward)
{
	return true;
};

void CNullSoundMixer::IncrementSamples( channel_t *pChannel, int startSample, int sampleCount,int outputRate, bool forward)
{
};

bool CNullSoundMixer::SkipSamples( IAudioDevice *pDevice, channel_t *pChannel, int startSample, int sampleCount, int outputRate, bool forward)
{
	return true;
};

CAudioSource *CNullSoundMixer::GetSource()
{
	return mpSource;
};

int CNullSoundMixer::GetSamplePosition()
{
	return mnPos;
};

int CNullSoundMixer::GetScubPosition()
{
	return 0; // mnScrubPos
};

bool CNullSoundMixer::SetSamplePosition( int position, bool scrubbing )
{
	mnPos = position;
	
	//if(scrubbing)
		//mnScrubPos = position;
	
	return false;
};

void CNullSoundMixer::SetLoopPosition( int position )
{
	mnLoopPos = position;
};

int CNullSoundMixer::GetStartPosition()
{
	return 0;
};

bool CNullSoundMixer::GetActive()
{
	return mbActive;
};

void CNullSoundMixer::SetActive( bool active )
{
	mbActive = active;
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
	mbForward = forward;
};

bool CNullSoundMixer::GetDirection() const
{
	return mbForward;
};

void CNullSoundMixer::SetAutoDelete( bool autodelete )
{
	mbAutoDelete = autodelete;
};

bool CNullSoundMixer::GetAutoDelete() const
{
	return mbAutoDelete;
};

void CNullSoundMixer::SetVolume( float volume )
{
	mfVolume = volume;
};

channel_t *CNullSoundMixer::GetChannel()
{
	return mpChannel;
};