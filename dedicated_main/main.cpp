#include <cstdlib>
#include "SharedLibHelper.hpp"

using pfnDedicatedMain = int (*)(int argc, char **argv);

int main(int argc, char **argv)
{
	tLibHandle hDedicatedLib = SharedLibHelper::LoadLib("dedicated");
	
	if(!hDedicatedLib)
		return EXIT_FAILURE;
	
	pfnDedicatedMain fnDedicatedMain = SharedLibHelper::GetLibExport<pfnDedicatedMain>(hDedicatedLib, "DedicatedMain");
	
	if(!fnDedicatedMain)
		return EXIT_FAILURE;
	
	return fnDedicatedMain(argc, argv);
	//return EXIT_SUCCESS;
};