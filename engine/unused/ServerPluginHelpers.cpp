#include "ServerPluginHelpers.hpp"

EXPOSE_SINGLE_INTERFACE(CServerPluginHelpers, IServerPluginHelpers, INTERFACEVERSION_ISERVERPLUGINHELPERS)

void CServerPluginHelpers::CreateMessage( edict_t *pEntity, DIALOG_TYPE type, KeyValues *data, IServerPluginCallbacks *plugin )
{
};

void CServerPluginHelpers::ClientCommand( edict_t *pEntity, const char *cmd )
{
};

QueryCvarCookie_t CServerPluginHelpers::StartQueryCvarValue( edict_t *pEntity, const char *pName )
{
	return InvalidQueryCvarCookie;
};