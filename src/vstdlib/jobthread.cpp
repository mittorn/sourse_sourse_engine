#include "vstdlib/jobthread.h"

//CThreadPool gThreadPool;
IThreadPool *g_pThreadPool{nullptr}; // = &gThreadPool;

IThreadPool *CreateThreadPool()
{
	return nullptr; // new CThreadPool();
};

void DestroyThreadPool(IThreadPool *pPool)
{
	if(pPool)
	{
		delete pPool;
		pPool = nullptr;
	};
};

void RunThreadPoolTests()
{
};