#pragma once

struct IEngine
{
	virtual void Init() = 0;
	virtual void Shutdown() = 0;
	
	virtual void Frame() = 0;
};

extern IEngine *gpEngine;

//extern IEngine *GetEngine();