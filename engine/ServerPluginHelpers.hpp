#pragma once

#include "engine/iserverplugin.h"

class CServerPluginHelpers final : public IServerPluginHelpers
{
public:
	CServerPluginHelpers() = default;
	~CServerPluginHelpers() = default;
	
	void CreateMessage( edict_t *pEntity, DIALOG_TYPE type, KeyValues *data, IServerPluginCallbacks *plugin ) override;
	void ClientCommand( edict_t *pEntity, const char *cmd ) override;
	
	QueryCvarCookie_t StartQueryCvarValue( edict_t *pEntity, const char *pName ) override;
};