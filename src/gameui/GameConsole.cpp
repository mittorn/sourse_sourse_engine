#include "GameConsole.hpp"

EXPOSE_SINGLE_INTERFACE(CGameConsole, IGameConsole, GAMECONSOLE_INTERFACE_VERSION)

void CGameConsole::Activate()
{
};

void CGameConsole::Initialize()
{
};

void CGameConsole::Hide()
{
};

void CGameConsole::Clear()
{
};

bool CGameConsole::IsConsoleVisible()
{
	return false;
};

void CGameConsole::SetParent(int parent)
{
};