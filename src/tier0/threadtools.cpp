#include "tier0/threadtools.h"

/*
ThreadHandle_t CreateSimpleThread(ThreadFunc_t, void *pParam, ThreadId_t *pID, unsigned stackSize)
{
	return (ThreadHandle_t)-1;
};
*/

ThreadHandle_t CreateSimpleThread(ThreadFunc_t, void *pParam, unsigned stackSize)
{
	return (ThreadHandle_t)-1;
};

bool ReleaseThreadHandle(ThreadHandle_t)
{
	return true;
};

void SetThreadedLoadLibraryFunc(ThreadedLoadLibraryFunc_t func)
{
};

ThreadedLoadLibraryFunc_t GetThreadedLoadLibraryFunc()
{
	return nullptr;
};

#ifdef _WIN32
int ThreadWaitForObjects(int nEvents, const HANDLE *pHandles, bool bWaitAll, unsigned timeout)
{
	return 0;
};
#endif // _WIN32