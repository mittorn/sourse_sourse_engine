#include "vstdlib/IKeyValuesSystem.h"

class CKeyValuesSystem final : public IKeyValuesSystem
{
public:
	CKeyValuesSystem() = default;
	~CKeyValuesSystem() = default;
	
	void RegisterSizeofKeyValues(int size) override;

	void *AllocKeyValuesMemory(int size) override;
	void FreeKeyValuesMemory(void *pMem) override;

	HKeySymbol GetSymbolForString(const char *name, bool bCreate) override;
	const char *GetStringForSymbol(HKeySymbol symbol) override;

	void AddKeyValuesToMemoryLeakList(void *pMem, HKeySymbol name) override;
	void RemoveKeyValuesFromMemoryLeakList(void *pMem) override;

	void AddFileKeyValuesToCache(const KeyValues *_kv, const char *resourceName, const char *pathID) override;
	bool LoadFileKeyValuesFromCache(KeyValues *_outKv, const char *resourceName, const char *pathID, IBaseFileSystem *filesystem) const override;
	void InvalidateCache() override;
	void InvalidateCacheForFile(const char *resourceName, const char *pathID) override;
};

CKeyValuesSystem gKeyValuesSystem;

IKeyValuesSystem *KeyValuesSystem()
{
	return &gKeyValuesSystem;
};

void CKeyValuesSystem::RegisterSizeofKeyValues(int size)
{
};

void *CKeyValuesSystem::AllocKeyValuesMemory(int size)
{
};

void CKeyValuesSystem::FreeKeyValuesMemory(void *pMem)
{
};

HKeySymbol CKeyValuesSystem::GetSymbolForString(const char *name, bool bCreate)
{
	return INVALID_KEY_SYMBOL;
};

const char *CKeyValuesSystem::GetStringForSymbol(HKeySymbol symbol)
{
	return "";
};

void CKeyValuesSystem::AddKeyValuesToMemoryLeakList(void *pMem, HKeySymbol name)
{
};

void CKeyValuesSystem::RemoveKeyValuesFromMemoryLeakList(void *pMem)
{
};

void CKeyValuesSystem::AddFileKeyValuesToCache(const KeyValues *_kv, const char *resourceName, const char *pathID)
{
};

bool CKeyValuesSystem::LoadFileKeyValuesFromCache(KeyValues *_outKv, const char *resourceName, const char *pathID, IBaseFileSystem *filesystem) const
{
	return true;
};

void CKeyValuesSystem::InvalidateCache()
{
};

void CKeyValuesSystem::InvalidateCacheForFile(const char *resourceName, const char *pathID)
{
};