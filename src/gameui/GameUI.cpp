#include "GameUI.hpp"

EXPOSE_SINGLE_INTERFACE(CGameUI, IGameUI, GAMEUI_INTERFACE_VERSION)

void CGameUI::Initialize(CreateInterfaceFn appFactory)
{
};

void CGameUI::PostInit()
{
};

void CGameUI::Connect(CreateInterfaceFn gameFactory)
{
};

void CGameUI::Start()
{
};

void CGameUI::Shutdown()
{
};

void CGameUI::RunFrame()
{
};

void CGameUI::OnGameUIActivated()
{
};

void CGameUI::OnGameUIHidden()
{
};

void CGameUI::OLD_OnConnectToServer(const char *game, int IP, int port)
{
};

void CGameUI::OnDisconnectFromServer_OLD(uint8 eSteamLoginFailure, const char *username)
{
};

void CGameUI::OnLevelLoadingStarted(bool bShowProgressDialog)
{
};

void CGameUI::OnLevelLoadingFinished(bool bError, const char *failureReason, const char *extendedReason)
{
};

bool CGameUI::UpdateProgressBar(float progress, const char *statusText)
{
	return true;
};

bool CGameUI::SetShowProgressText(bool show)
{
	return true;
};

void CGameUI::ShowNewGameDialog(int chapter)
{
};

void CGameUI::SessionNotification(const int notification, const int param)
{
};

void CGameUI::SystemNotification(const int notification)
{
};

void CGameUI::ShowMessageDialog(const uint nType, vgui::Panel *pOwner)
{
};

void CGameUI::UpdatePlayerInfo(uint64 nPlayerId, const char *pName, int nTeam, byte cVoiceState, int nPlayersNeeded, bool bHost)
{
};

void CGameUI::SessionSearchResult(int searchIdx, void *pHostData, XSESSION_SEARCHRESULT *pResult, int ping)
{
};

void CGameUI::OnCreditsFinished()
{
};

void CGameUI::SetLoadingBackgroundDialog(vgui::VPANEL panel)
{
};

void CGameUI::BonusMapUnlock(const char *pchFileName, const char *pchMapName)
{
};

void CGameUI::BonusMapComplete(const char *pchFileName, const char *pchMapName)
{
};

void CGameUI::BonusMapChallengeUpdate(const char *pchFileName, const char *pchMapName, const char *pchChallengeName, int iBest)
{
};

void CGameUI::BonusMapChallengeNames(char *pchFileName, char *pchMapName, char *pchChallengeName)
{
};

void CGameUI::BonusMapChallengeObjectives(int &iBronze, int &iSilver, int &iGold)
{
};

void CGameUI::BonusMapDatabaseSave()
{
};

int CGameUI::BonusMapNumAdvancedCompleted()
{
	return 0;
};

void CGameUI::BonusMapNumMedals(int piNumMedals[3])
{
};

void CGameUI::OnConnectToServer2(const char *game, int IP, int connectionPort, int queryPort)
{
};

bool CGameUI::ValidateStorageDevice(int *pStorageDeviceValidated)
{
	return true;
};

void CGameUI::SetProgressOnStart()
{
};

void CGameUI::OnDisconnectFromServer(uint8 eSteamLoginFailure)
{
};

void CGameUI::OnConfirmQuit()
{
};

bool CGameUI::IsMainMenuVisible()
{
	return false;
};

void CGameUI::SetMainMenuOverride(vgui::VPANEL panel)
{
};

void CGameUI::SendMainMenuCommand(const char *pszCommand)
{
};