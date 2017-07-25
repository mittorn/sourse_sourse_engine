#pragma once

#include "soundsystem/snd_device.h"

class CAudioDevice final : public IAudioDevice
{
public:
	CAudioDevice() = default;
	~CAudioDevice() = default;
	
	bool Init() override;
	void Shutdown() override;

	const char *DeviceName() const override;
	int DeviceChannels() const override;
	int DeviceSampleBits() const override;
	int DeviceSampleBytes() const override;
	int DeviceSampleRate() const override;
	int DeviceSampleCount() const override;

	void MixBegin() override;

	void Mix8Mono( channel_t *pChannel, char *pData, int outputOffset, int inputOffset, fixedint rateScaleFix, int outCount, int timecompress, bool forward = true ) override;
	void Mix8Stereo( channel_t *pChannel, char *pData, int outputOffset, int inputOffset, fixedint rateScaleFix, int outCount, int timecompress, bool forward = true ) override;
	void Mix16Mono( channel_t *pChannel, short *pData, int outputOffset, int inputOffset, fixedint rateScaleFix, int outCount, int timecompress, bool forward = true ) override;
	void Mix16Stereo( channel_t *pChannel, short *pData, int outputOffset, int inputOffset, fixedint rateScaleFix, int outCount, int timecompress, bool forward = true ) override;

	int PaintBufferSampleCount() const override;

	void AddSource( CAudioMixer *pSource ) override;

	void StopSounds() override;

	void Update( float time ) override;

	void Flush() override;

	int FindSourceIndex( CAudioMixer *pSource ) override;
	CAudioMixer *GetMixerForSource( CAudioSource *source ) override;
	void FreeChannel( int channelIndex ) override;
};