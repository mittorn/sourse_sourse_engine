#include "vstdlib/IKeyValuesSystem.h"

CKeyValuesSystem gKeyValuesSystem;

IKeyValuesSystem *KeyValuesSystem() // export
{
	return &gKeyValuesSystem;
};