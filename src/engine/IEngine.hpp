#pragma once

struct IEngine
{
	virtual void Init() = 0;
	virtual void Shutdown() = 0;
	
	virtual void Frame() = 0;
};

extern IEngine *gpEngine;

//extern IEngine *GetEngine();

/*
#include "interface.h"

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
abstract_class IEngine
{
public:
	enum
	{
		QUIT_NOTQUITTING = 0,
		QUIT_TODESKTOP,
		QUIT_RESTART
	};

	// Engine State Flags
	enum EngineState_t
	{
		DLL_INACTIVE = 0,		// no dll
		DLL_ACTIVE,				// engine is focused
		DLL_CLOSE,				// closing down dll
		DLL_RESTART,			// engine is shutting down but will restart right away
		DLL_PAUSED,				// engine is paused, can become active from this state
	};


	virtual			~IEngine( void ) { }

	virtual	bool	Load( bool dedicated, const char *rootdir ) = 0;
	virtual void	Unload( void ) = 0;
	virtual void	SetNextState( EngineState_t iNextState ) = 0;
	virtual EngineState_t GetState( void ) = 0;

	virtual void	Frame( void ) = 0;

	virtual float	GetFrameTime( void ) = 0;
	virtual float	GetCurTime( void ) = 0;

	virtual int		GetQuitting( void ) = 0;
	virtual void	SetQuitting( int quittype ) = 0;
};

extern IEngine *eng;
*/