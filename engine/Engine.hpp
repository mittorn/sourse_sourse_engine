#pragma once

#include "quakedef.h"
#include "IEngine.hpp"

class CEngine final : public IEngine
{
public:
	CEngine() = default;
	~CEngine() = default;
	
	void Init() override;
	void Shutdown() override;
	
	void Frame() override;
private:
	quakeparms_t host_parms;
};