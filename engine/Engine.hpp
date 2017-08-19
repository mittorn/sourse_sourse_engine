#pragma once

#include "IEngine.hpp"

class CEngine final : public IEngine
{
public:
	CEngine() = default;
	~CEngine() = default;
	
	void Init() override;
	void Shutdown() override;
	
	void Frame() override;
};