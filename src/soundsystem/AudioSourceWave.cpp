#include "audiosource.hpp"

CAudioMixer *CNullAudioSource::CreateMixer()
{
	return nullptr;
};

int CNullAudioSource::GetOutputData( void **pData, int samplePosition, int sampleCount, bool forward)
{
	return 0;
};

int CNullAudioSource::SampleRate()
{
	return 0;
};

int CNullAudioSource::SampleSize()
{
	return 0;
};

int CNullAudioSource::SampleCount()
{
	return 0;
};

float CNullAudioSource::TrueSampleSize()
{
	return 0.0f;
};

bool CNullAudioSource::IsLooped()
{
	return false;
};

bool CNullAudioSource::IsStreaming()
{
	return false;
};

float CNullAudioSource::GetRunningLength()
{
	return 0.0f;
};

int CNullAudioSource::GetNumChannels()
{
	return 0;
};

//CSentence *CNullAudioSource::GetSentence()
//{
//	return nullptr;
//};