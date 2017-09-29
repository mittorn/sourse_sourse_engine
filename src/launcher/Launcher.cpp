#ifdef _MSC_VER
	#define EXPORT_FUNC [[dllexport]]
#elif __GNUC__
	#define EXPORT_FUNC [[visibility("default")]]
#endif

#define C_EXPORT_FUNC extern "C" EXPORT_FUNC

C_EXPORT_FUNC int LauncherMain(int argc, char **argv)
{
	CSysModule *hEngineLib = Sys_LoadModule("engine");
	
	if(!hEngineLib)
		return EXIT_FAILURE;
	
	CreateInterfaceFn fnEngineFactory = Sys_GetFactory(hEngineLib);
	
	if(fnEngineFactory)
		return EXIT_FAILURE;
	
	IEngineAPI *pEngine = fnEngineFactory(VENGINE_LAUNCHER_API_VERSION, nullptr);
	
	if(pEngine)
		return EXIT_FAILURE;
	
	StartupInfo_t EngineStartupInfo{};
	
	pEngine->SetStartupInfo(EngineStartupInfo);
	
	pEngine->Init();
	
	bool bRestart{false};
	
	do
	{
		bRestart = pEngine->Run();
	}
	while(bRestart == RUN_RESTART)
	
	pEngine->Shutdown();
	
	Sys_UnloadModule(hEngineLib);
	
	return -1; // ?
};