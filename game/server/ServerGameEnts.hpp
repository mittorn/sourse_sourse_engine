#pragma once

#include "eiface.h"

class CServerGameEnts final : public IServerGameEnts
{
public:
	CServerGameEnts() = default;
	~CServerGameEnts() = default;
	
	void SetDebugEdictBase(edict_t *base) override;
	
	void MarkEntitiesAsTouching( edict_t *e1, edict_t *e2 ) override;

	void FreeContainingEntity( edict_t * ) override; 

	edict_t *BaseEntityToEdict( CBaseEntity *pEnt ) override;
	CBaseEntity *EdictToBaseEntity( edict_t *pEdict ) override;

	void CheckTransmit( CCheckTransmitInfo *pInfo, const unsigned short *pEdictIndices, int nEdicts ) override;
};