#pragma once

#include "SoundEmitterSystem/isoundemittersystembase.h"

class CSoundEmitterSystemBase final : public ISoundEmitterSystemBase
{
public:
	CSoundEmitterSystemBase() = default;
	~CSoundEmitterSystemBase() = default;
	
	// IAppSystem
	
	bool Connect( CreateInterfaceFn factory ) override;
	void Disconnect() override;

	void *QueryInterface( const char *pInterfaceName ) override;

	InitReturnVal_t Init() override;
	void Shutdown() override;
	
	// ISoundEmitterSystemBase
	
	bool ModInit() override;
	void ModShutdown() override;

	int GetSoundIndex(const char *pName) const override;
	bool IsValidIndex(int index) override;
	int GetSoundCount() override;

	const char *GetSoundName(int index) override;
	bool GetParametersForSound(const char *soundname, CSoundParameters &params, gender_t gender, bool isbeingemitted = false) override;

	const char *GetWaveName(CUtlSymbol & sym) override;
	CUtlSymbol AddWaveName(const char *name) override;

	soundlevel_t LookupSoundLevel(const char *soundname) override;
	const char *GetWavFileForSound(const char *soundname, char const *actormodel) override;
	const char *GetWavFileForSound(const char *soundname, gender_t gender) override;
	int CheckForMissingWavFiles(bool verbose) override;
	const char *GetSourceFileForSound(int index) const override;

	int First() const override;
	int Next(int i) const override;
	int InvalidIndex() const override;

	CSoundParametersInternal *InternalGetParametersForSound(int index) override;

	bool AddSound(const char *soundname, const char *scriptfile, const CSoundParametersInternal &params) override;
	void RemoveSound(const char *soundname) override;
	void MoveSound(const char *soundname, const char *newscript) override;
	void RenameSound(const char *soundname, const char *newname) override;

	void UpdateSoundParameters(const char *soundname, const CSoundParametersInternal &params) override;

	int GetNumSoundScripts() const override;
	char const *GetSoundScriptName(int index) const override;
	bool IsSoundScriptDirty(int index) const override;
	int FindSoundScript(const char *name) const override;
	void SaveChangesToSoundScript(int scriptindex) override;

	void ExpandSoundNameMacros(CSoundParametersInternal & params, char const *wavename) override;
	gender_t GetActorGender(char const *actormodel) override;
	void GenderExpandString(char const *actormodel, char const *in, char *out, int maxlen) override;
	void GenderExpandString(gender_t gender, char const *in, char *out, int maxlen) override;
	bool IsUsingGenderToken(char const *soundname) override;

	unsigned int GetManifestFileTimeChecksum() override;

	void AddSoundOverrides(char const *scriptfile, bool bPreload = false) override;

	void ClearSoundOverrides() override;

	bool GetParametersForSoundEx(const char *soundname, HSOUNDSCRIPTHANDLE &handle, CSoundParameters &params, gender_t gender, bool isbeingemitted = false) override;
	soundlevel_t LookupSoundLevelByHandle(char const *soundname, HSOUNDSCRIPTHANDLE &handle) override;

	void ReloadSoundEntriesInList(IFileList * pFilesToReload) override;

	void Flush() override;
};