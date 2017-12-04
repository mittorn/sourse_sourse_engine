#include "Engine.hpp"

CEngine gEngine;
IEngine *gpEngine = &gEngine;

/*
IEngine *GetEngine()
{
	static CEngine Engine;
	return &gEngine;
};
*/

void CEngine::Init()
{
	host_parms.memsize = 16 * 1024 * 1024;
	host_parms.membase = malloc(host_parms.memsize);
	host_parms.basedir = ".";

	//COM_InitArgv (argc, argv);

	//host_parms.argc = com_argc;
	//host_parms.argv = com_argv;
	
	Host_Init(&host_parms);
};

void CEngine::Shutdown()
{
	Host_Shutdown();
};

void CEngine::Frame()
{
	Host_Frame(0.1f);
};