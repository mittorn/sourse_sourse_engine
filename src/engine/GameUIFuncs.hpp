#pragma once

#include "IGameUIFuncs.h"

class CGameUIFuncs final : public IGameUIFuncs
{
public:
	CGameUIFuncs() = default;
	~CGameUIFuncs() = default;
	
	bool IsKeyDown( const char *keyname, bool& isdown ) override;
	
	const char *GetBindingForButtonCode( ButtonCode_t code ) override;
	ButtonCode_t GetButtonCodeForBind( const char *pBind ) override;
	
	void GetVideoModes( struct vmode_s **liststart, int *count ) override;
	
	void SetFriendsID( uint friendsID, const char *friendsName ) override;
	
	void GetDesktopResolution( int &width, int &height ) override;
	
	bool IsConnectedToVACSecureServer() override;
};