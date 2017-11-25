#include "vstdlib/osversion.h"

const char *GetNameFromOSType(EOSType eOSType)
{
	return "";
};

const char *GetOSDetailString(char *pchOutBuf, int cchOutBuf)
{
	return "";
};

EOSType GetOSType()
{
	return k_eOSUnknown;
};

bool OSTypesAreCompatible(EOSType eOSTypeDetected, EOSType eOSTypeRequired)
{
	return false;
};

const char *GetPlatformName(bool *pbIs64Bit)
{
	return "";
};