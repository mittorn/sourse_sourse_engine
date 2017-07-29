#include <cstdlib>

using pfnGetDedicatedMain = int (*)(int argc, char **argv);

#ifdef _WIN32
	using tLibHandle = HMODULE;
#else
	using tLibHandle = void*;
#endif

tLibHandle FIXME_LoadLibrary(const char *name)
{
#ifdef _WIN32
	return LoadLibrary(name);
#else
	return dlopen(name, RTLD_NOW);
#endif
};

template<typename T>
T *FIXME_GetLibraryExport(tLibHandle hLib, const char *name)
{
#ifdef _WIN32
	return GetProcAddress(hLib, name);
#else
	return dlsym(hLib, name);
#endif
};

void FIXME_FreeLibrary(tLibHandle hLib)
{
	if(!hLib)
		return;
	
#ifdef _WIN32
	FreeLibrary(hLib);
#else
	dlclose(hLib);
#endif
};

int main(int argc, char **argv)
{
	tLibHandle hDedicatedLib = FIXME_LoadLibrary("dedicated");
	
	if(!hDedicatedLib)
		return EXIT_FAILURE;
	
	pfnGetDedicatedMain fnGetDedicatedMain = FIXME_GetLibraryExport<pfnGetDedicatedMain>(hDedicatedLib, "GetDedicatedMain");
	
	if(!fnGetDedicatedMain)
		return EXIT_FAILURE;
	
	return fnGetDedicatedMain(argc, argv);
	//return EXIT_SUCCESS;
};