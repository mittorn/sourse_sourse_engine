#pragma once

#include "common/GameUI/IGameUI.h"

class CGameUI final : public IGameUI
{
public:
	CGameUI() = default;
	~CGameUI() = default;
	
	void Initialize(CreateInterfaceFn appFactory) override;
	void PostInit() override;

	void Connect(CreateInterfaceFn gameFactory) override;

	void Start() override;
	void Shutdown() override;
	void RunFrame() override;

	void OnGameUIActivated() override;
	void OnGameUIHidden() override;

	void OLD_OnConnectToServer(const char *game, int IP, int port) override;

	void OnDisconnectFromServer_OLD(uint8 eSteamLoginFailure, const char *username) override;
	void OnLevelLoadingStarted(bool bShowProgressDialog) override;
	void OnLevelLoadingFinished(bool bError, const char *failureReason, const char *extendedReason) override;

	bool UpdateProgressBar(float progress, const char *statusText) override;
	bool SetShowProgressText(bool show) override;

	void ShowNewGameDialog(int chapter) override;

	void SessionNotification(const int notification, const int param) override;
	void SystemNotification(const int notification) override;
	void ShowMessageDialog(const uint nType, vgui::Panel *pOwner) override;
	void UpdatePlayerInfo(uint64 nPlayerId, const char *pName, int nTeam, byte cVoiceState, int nPlayersNeeded, bool bHost) override;
	void SessionSearchResult(int searchIdx, void *pHostData, XSESSION_SEARCHRESULT *pResult, int ping) override;
	void OnCreditsFinished() override;

	void SetLoadingBackgroundDialog(vgui::VPANEL panel) override;

	void BonusMapUnlock(const char *pchFileName, const char *pchMapName) override;
	void BonusMapComplete(const char *pchFileName, const char *pchMapName) override;
	void BonusMapChallengeUpdate(const char *pchFileName, const char *pchMapName, const char *pchChallengeName, int iBest) override;
	void BonusMapChallengeNames(char *pchFileName, char *pchMapName, char *pchChallengeName) override;
	void BonusMapChallengeObjectives(int &iBronze, int &iSilver, int &iGold) override;
	void BonusMapDatabaseSave() override;
	int BonusMapNumAdvancedCompleted() override;
	void BonusMapNumMedals(int piNumMedals[3]) override;

	void OnConnectToServer2(const char *game, int IP, int connectionPort, int queryPort) override;

	bool ValidateStorageDevice(int *pStorageDeviceValidated) override;

	void SetProgressOnStart() override;
	void OnDisconnectFromServer(uint8 eSteamLoginFailure) override;

	void OnConfirmQuit() override;

	bool IsMainMenuVisible() override;

	void SetMainMenuOverride(vgui::VPANEL panel) override;
	void SendMainMenuCommand(const char *pszCommand) override;
};