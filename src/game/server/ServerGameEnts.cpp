#include "ServerGameEnts.hpp"

EXPOSE_SINGLE_INTERFACE(CServerGameEnts, IServerGameEnts, INTERFACEVERSION_SERVERGAMEENTS)

void CServerGameEnts::SetDebugEdictBase(edict_t *base)
{
};

void CServerGameEnts::MarkEntitiesAsTouching( edict_t *e1, edict_t *e2 )
{
};

void CServerGameEnts::FreeContainingEntity( edict_t * ) 
{
};

edict_t *CServerGameEnts::BaseEntityToEdict( CBaseEntity *pEnt )
{
	return nullptr;
};

CBaseEntity *CServerGameEnts::EdictToBaseEntity( edict_t *pEdict )
{
	return nullptr;
};

void CServerGameEnts::CheckTransmit( CCheckTransmitInfo *pInfo, const unsigned short *pEdictIndices, int nEdicts )
{
};