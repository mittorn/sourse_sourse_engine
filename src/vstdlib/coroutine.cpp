#include "vstdlib/coroutine.h"

HCoroutine Coroutine_Create(CoroutineFunc_t pFunc, void *pvParam)
{
	return 0;
};

bool Coroutine_Continue(HCoroutine hCoroutine, const char *pchName)
{
	return true;
};

void Coroutine_Cancel(HCoroutine hCoroutine)
{
};

void Coroutine_DebugBreak(HCoroutine hCoroutine)
{
};

void Coroutine_DebugAssert(HCoroutine hCoroutine, const char *pchMsg)
{
};

void Coroutine_YieldToMain()
{
};

bool Coroutine_IsActive()
{
	return false;
};

HCoroutine Coroutine_GetCurrentlyActive()
{
	return 0;
};

void Coroutine_ReleaseThreadMemory()
{
};

bool Coroutine_Test()
{
	return true;
};

void Coroutine_ValidateGlobals(class CValidator &validator)
{
};

size_t Coroutine_GetStackDepth()
{
	return 0;
};