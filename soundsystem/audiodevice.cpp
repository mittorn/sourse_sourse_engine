#include "audiodevice.hpp"

bool CAudioDevice::Init()
{
	return true;
};

void CAudioDevice::Shutdown()
{
};

const char *CAudioDevice::DeviceName() const
{
	return "Null";
};

int CAudioDevice::DeviceChannels() const
{
	return 0;
};

int CAudioDevice::DeviceSampleBits() const
{
	return 0;
};

int CAudioDevice::DeviceSampleBytes() const
{
	return 0;
};

int CAudioDevice::DeviceSampleRate() const
{
	return 0;
};

int CAudioDevice::DeviceSampleCount() const
{
	return 0;
};

void CAudioDevice::MixBegin()
{
};

void CAudioDevice::Mix8Mono( channel_t *pChannel, char *pData, int outputOffset, int inputOffset, fixedint rateScaleFix, int outCount, int timecompress, bool forward = true )
{
};

void CAudioDevice::Mix8Stereo( channel_t *pChannel, char *pData, int outputOffset, int inputOffset, fixedint rateScaleFix, int outCount, int timecompress, bool forward = true )
{
};

void CAudioDevice::Mix16Mono( channel_t *pChannel, short *pData, int outputOffset, int inputOffset, fixedint rateScaleFix, int outCount, int timecompress, bool forward = true )
{
};

void CAudioDevice::Mix16Stereo( channel_t *pChannel, short *pData, int outputOffset, int inputOffset, fixedint rateScaleFix, int outCount, int timecompress, bool forward = true )
{
};

int CAudioDevice::PaintBufferSampleCount() const
{
	return 0;
};

void CAudioDevice::AddSource( CAudioMixer *pSource )
{
};

void CAudioDevice::StopSounds()
{
};

void CAudioDevice::Update( float time )
{
};

void CAudioDevice::Flush()
{
};

int CAudioDevice::FindSourceIndex( CAudioMixer *pSource )
{
	return 0;
};

CAudioMixer *CAudioDevice::GetMixerForSource( CAudioSource *source )
{
	return nullptr;
};

void CAudioDevice::FreeChannel( int channelIndex )
{
};