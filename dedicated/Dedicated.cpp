#ifdef _MSC_VER
	#define EXPORT_FUNC [[dllexport]]
#elif __GNUC__
	#define EXPORT_FUNC [[visibility("default")]]
#endif

#define C_EXPORT_FUNC extern "C" EXPORT_FUNC

C_EXPORT_FUNC int DedicatedMain(int argc, char **argv)
{
	//
	// TODO:
	// * Load engine module
	// * Get the factory func from it
	// * Get the dedicated engine api interface from it
	// * Init it
	// * Per-frame update until engine state is not == quit
	// * Shutdown
	// * Unload
	//
	
	CSysModule *hEngineLib = Sys_LoadModule("engine");
	
	if(!hEngineLib)
		return EXIT_FAILURE;
	
	CreateInterfaceFn fnEngineFactory = Sys_GetFactory(hEngineLib);
	
	if(fnEngineFactory)
		return EXIT_FAILURE;
	
	IDedicatedServerAPI *pEngine = fnEngineFactory(VENGINE_DEDICATED_SERVER_API_VERSION, nullptr);
	
	if(pEngine)
		return EXIT_FAILURE;
	
	pEngine->Init();
	
	while(true)
		pEngine->Frame();
	
	pEngine->Shutdown();
	
	Sys_UnloadModule(hEngineLib);

	return -1; // return what?
};