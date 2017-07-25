#ifdef _MSVC
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

	return -1; // return what?
};