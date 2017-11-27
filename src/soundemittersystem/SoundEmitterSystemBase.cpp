#include "SoundEmitterSystemBase.hpp"

bool CSoundEmitterSystemBase::Connect( CreateInterfaceFn factory )
{
	return true;
};

void CSoundEmitterSystemBase::Disconnect()
{
};

void *CSoundEmitterSystemBase::QueryInterface( const char *pInterfaceName )
{
	return nullptr;
};

InitReturnVal_t CSoundEmitterSystemBase::Init()
{
	return INIT_OK;
};

void CSoundEmitterSystemBase::Shutdown()
{
};

bool CSoundEmitterSystemBase::ModInit()
{
	return true;
};

void CSoundEmitterSystemBase::ModShutdown()
{
};

int CSoundEmitterSystemBase::GetSoundIndex(const char *pName) const
{
	return -1;
};

bool CSoundEmitterSystemBase::IsValidIndex(int index)
{
	return true;
};

int CSoundEmitterSystemBase::GetSoundCount()
{
	return 0;
};

const char *CSoundEmitterSystemBase::GetSoundName(int index)
{
	return "";
};

bool CSoundEmitterSystemBase::GetParametersForSound(const char *soundname, CSoundParameters &params, gender_t gender, bool isbeingemitted)
{
	return true;
};

const char *CSoundEmitterSystemBase::GetWaveName(CUtlSymbol & sym)
{
	return "";
};

CUtlSymbol CSoundEmitterSystemBase::AddWaveName(const char *name)
{
	return {};
};

soundlevel_t CSoundEmitterSystemBase::LookupSoundLevel(const char *soundname)
{
	return SNDLVL_NONE;
};

const char *CSoundEmitterSystemBase::GetWavFileForSound(const char *soundname, char const *actormodel)
{
	return "";
};

const char *CSoundEmitterSystemBase::GetWavFileForSound(const char *soundname, gender_t gender)
{
	return "";
};

int CSoundEmitterSystemBase::CheckForMissingWavFiles(bool verbose)
{
	return 0;
};

const char *CSoundEmitterSystemBase::GetSourceFileForSound(int index) const
{
	return "";
};

int CSoundEmitterSystemBase::First() const
{
	return 0;
};

int CSoundEmitterSystemBase::Next(int i) const
{
	return 0;
};

int CSoundEmitterSystemBase::InvalidIndex() const
{
	return 0;
};

CSoundParametersInternal *CSoundEmitterSystemBase::InternalGetParametersForSound(int index)
{
	return nullptr;
};

bool CSoundEmitterSystemBase::AddSound(const char *soundname, const char *scriptfile, const CSoundParametersInternal &params)
{
	return true;
};

void CSoundEmitterSystemBase::RemoveSound(const char *soundname)
{
};

void CSoundEmitterSystemBase::MoveSound(const char *soundname, const char *newscript)
{
};

void CSoundEmitterSystemBase::RenameSound(const char *soundname, const char *newname)
{
};

void CSoundEmitterSystemBase::UpdateSoundParameters(const char *soundname, const CSoundParametersInternal &params)
{
};

int CSoundEmitterSystemBase::GetNumSoundScripts() const
{
	return 0;
};

char const *CSoundEmitterSystemBase::GetSoundScriptName(int index) const
{
	return "";
};

bool CSoundEmitterSystemBase::IsSoundScriptDirty(int index) const
{
	return true;
};

int CSoundEmitterSystemBase::FindSoundScript(const char *name) const
{
	return 0;
};

void CSoundEmitterSystemBase::SaveChangesToSoundScript(int scriptindex)
{
};

void CSoundEmitterSystemBase::ExpandSoundNameMacros(CSoundParametersInternal & params, char const *wavename)
{
};

gender_t CSoundEmitterSystemBase::GetActorGender(char const *actormodel)
{
	return GENDER_NONE;
};

void CSoundEmitterSystemBase::GenderExpandString(char const *actormodel, char const *in, char *out, int maxlen)
{
};

void CSoundEmitterSystemBase::GenderExpandString(gender_t gender, char const *in, char *out, int maxlen)
{
};

bool CSoundEmitterSystemBase::IsUsingGenderToken(char const *soundname)
{
	return false;
};

unsigned int CSoundEmitterSystemBase::GetManifestFileTimeChecksum()
{
	return 0;
};

void CSoundEmitterSystemBase::AddSoundOverrides(char const *scriptfile, bool bPreload)
{
};

void CSoundEmitterSystemBase::ClearSoundOverrides()
{
};

bool CSoundEmitterSystemBase::GetParametersForSoundEx(const char *soundname, HSOUNDSCRIPTHANDLE &handle, CSoundParameters &params, gender_t gender, bool isbeingemitted)
{
	return true;
};

soundlevel_t CSoundEmitterSystemBase::LookupSoundLevelByHandle(char const *soundname, HSOUNDSCRIPTHANDLE &handle)
{
	return SNDLVL_NONE;
};

void CSoundEmitterSystemBase::ReloadSoundEntriesInList(IFileList * pFilesToReload)
{
};

void CSoundEmitterSystemBase::Flush()
{
};