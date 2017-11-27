#include "tier0/platform.h"

bool Plat_IsInDebugSession()
{
	return false;
};

struct tm *Plat_localtime(const time_t *timep, struct tm *result)
{
	return nullptr;
};