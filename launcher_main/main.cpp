#include <cstdlib>
#include "SharedLibHelper.hpp"

using pfnLauncherMain = int (*)(int argc, char **argv);

int main(int argc, char **argv)
{
	tLibHandle hLauncherLib = SharedLibHelper::LoadLib("launcher");
	
	if(!hLauncherLib)
		return EXIT_FAILURE;
	
	pfnLauncherMain fnLauncherMain = SharedLibHelper::GetLibExport<pfnLauncherMain>(hLauncherLib, "LauncherMain");
	
	if(!fnLauncherMain)
		return EXIT_FAILURE;
	
	return fnLauncherMain(argc, argv);
	//return EXIT_SUCCESS;
};