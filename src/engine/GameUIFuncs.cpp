#include "GameUIFuncs.hpp"

//EXPOSE_SINGLE_INTERFACE(CGameUIFuncs, IGameUIFuncs, VENGINE_GAMEUIFUNCS_VERSION);

bool CGameUIFuncs::IsKeyDown( const char *keyname, bool& isdown )
{
	return false;
};

const char *CGameUIFuncs::GetBindingForButtonCode( ButtonCode_t code )
{
	return "";
};

ButtonCode_t CGameUIFuncs::GetButtonCodeForBind( const char *pBind )
{
	return BUTTON_CODE_INVALID;
};

void CGameUIFuncs::GetVideoModes( struct vmode_s **liststart, int *count )
{
};

void CGameUIFuncs::SetFriendsID( uint friendsID, const char *friendsName )
{
};

void CGameUIFuncs::GetDesktopResolution( int &width, int &height )
{
};

bool CGameUIFuncs::IsConnectedToVACSecureServer()
{
	return false;
};