#include "soundsystem.hpp"

EXPOSE_SINGLE_INTERFACE(CSoundSystem, ISoundSystem, SOUNDSYSTEM_INTERFACE_VERSION)

bool CSoundSystem::Connect(CreateInterfaceFn factory)
{
	return true;
};

void CSoundSystem::Disconnect()
{
};

void *CSoundSystem::QueryInterface(const char *pInterfaceName)
{
	return nullptr;
};

InitReturnVal_t CSoundSystem::Init()
{
	return INIT_OK;
};

void CSoundSystem::Shutdown()
{
};

void CSoundSystem::Update( float time )
{
};

void CSoundSystem::Flush()
{
};

CAudioSource *CSoundSystem::FindOrAddSound( const char *filename )
{
	return nullptr;
};

CAudioSource *CSoundSystem::LoadSound( const char *wavfile )
{
	return nullptr;
};

void CSoundSystem::PlaySound( CAudioSource *source, float volume, CAudioMixer **ppMixer )
{
};

bool CSoundSystem::IsSoundPlaying( CAudioMixer *pMixer )
{
	return true;
};

CAudioMixer *CSoundSystem::FindMixer( CAudioSource *source )
{
	return nullptr;
};

void CSoundSystem::StopAll()
{
};

void CSoundSystem::StopSound( CAudioMixer *mixer )
{
};