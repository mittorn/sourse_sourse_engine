#pragma once

#include "igameevents.h"

class CGameEventManager2 final : public IGameEventManager2
{
public:
	CGameEventManager2() = default;
	~CGameEventManager2() = default;
	
	int LoadEventsFromFile( const char *filename ) override;

	void Reset() override;	

	bool AddListener( IGameEventListener2 *listener, const char *name, bool bServerSide ) override;

	bool FindListener( IGameEventListener2 *listener, const char *name ) override;

	void RemoveListener( IGameEventListener2 *listener) override;

	IGameEvent *CreateEvent( const char *name, bool bForce = false ) override;

	bool FireEvent( IGameEvent *event, bool bDontBroadcast = false ) override;
	bool FireEventClientSide( IGameEvent *event ) override;

	IGameEvent *DuplicateEvent( IGameEvent *event ) override;

	void FreeEvent( IGameEvent *event ) override;

	bool SerializeEvent( IGameEvent *event, bf_write *buf ) override;
	IGameEvent *UnserializeEvent( bf_read *buf ) override;
};