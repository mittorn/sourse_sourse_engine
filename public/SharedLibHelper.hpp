#pragma once

#ifdef _WIN32
	#include <windows.h>

	using tLibHandle = HMODULE;
#else
	#include <dlfcn.h>

	using tLibHandle = void*;
#endif

class SharedLibHelper
{
public:
	static tLibHandle LoadLib(const char *name)
	{
	#ifdef _WIN32
		return LoadLibrary(name);
	#else
		return dlopen(name, RTLD_NOW);
	#endif
	};

	static void FreeLib(tLibHandle hLib)
	{
	#ifdef _WIN32
		FreeLibrary(hLib);
	#else
		dlclose(hLib);
	#endif
	};

	template<typename T>
	static T GetLibExport(tLibHandle hLib, const char *name)
	{
	#ifdef _WIN32
		return (T)GetProcAddress(hLib, name);
	#else
		return (T)dlsym(hLib, name);
	#endif
	};
};