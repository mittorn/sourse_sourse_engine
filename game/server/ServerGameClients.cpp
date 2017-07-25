#include "ServerGameClients.hpp"

EXPOSE_SINGLE_INTERFACE(CServerGameClients, IServerGameClients, INTERFACEVERSION_SERVERGAMECLIENTS)

void CServerGameClients::GetPlayerLimits( int& minplayers, int& maxplayers, int &defaultMaxPlayers ) const
{
};

bool CServerGameClients::ClientConnect( edict_t *pEntity, const char *pszName, const char *pszAddress, char *reject, int maxrejectlen )
{
	return true;
};

void CServerGameClients::ClientActive( edict_t *pEntity, bool bLoadGame )
{
};

void CServerGameClients::ClientDisconnect( edict_t *pEntity )
{
};

void CServerGameClients::ClientPutInServer( edict_t *pEntity, char const *playername )
{
};

void CServerGameClients::ClientCommand( edict_t *pEntity, const CCommand &args )
{
};

void CServerGameClients::SetCommandClient( int index )
{
};

void CServerGameClients::ClientSettingsChanged( edict_t *pEdict )
{
};

void CServerGameClients::ClientSetupVisibility( edict_t *pViewEntity, edict_t *pClient, unsigned char *pvs, int pvssize )
{
};

float CServerGameClients::ProcessUsercmds( edict_t *player, bf_read *buf, int numcmds, int totalcmds,
	int dropped_packets, bool ignore, bool paused )
{
	return 0.0f;
};

void CServerGameClients::PostClientMessagesSent_DEPRECIATED()
{
};

CPlayerState *CServerGameClients::GetPlayerState( edict_t *player )
{
	return nullptr;
};

void CServerGameClients::ClientEarPosition( edict_t *pEntity, Vector *pEarOrigin )
{
};

int CServerGameClients::GetReplayDelay( edict_t *player, int& entity )
{
	return 0;
};

void CServerGameClients::GetBugReportInfo( char *buf, int buflen )
{
};

void CServerGameClients::NetworkIDValidated( const char *pszUserName, const char *pszNetworkID )
{
};

void CServerGameClients::ClientCommandKeyValues( edict_t *pEntity, KeyValues *pKeyValues )
{
};

void CServerGameClients::ClientSpawned( edict_t *pPlayer )
{
};