#pragma once

#include "GameUI/IGameConsole.h"

class CGameConsole final : public IGameConsole
{
public:
	CGameConsole() = default;
	~CGameConsole() = default;
	
	void Activate() override;

	void Initialize() override;

	void Hide() override;

	void Clear() override;

	bool IsConsoleVisible() override;

	void SetParent(int parent) override;
};