#include "GameEventManager2.hpp"

EXPOSE_SINGLE_INTERFACE(CGameEventManager2, IGameEventManager2, INTERFACEVERSION_GAMEEVENTSMANAGER2)

int CGameEventManager2::LoadEventsFromFile( const char *filename )
{
	return 0;
};

void CGameEventManager2::Reset()	
{
};

bool CGameEventManager2::AddListener( IGameEventListener2 *listener, const char *name, bool bServerSide )
{
	return false;
};

bool CGameEventManager2::FindListener( IGameEventListener2 *listener, const char *name )
{
	return false;
};

void CGameEventManager2::RemoveListener( IGameEventListener2 *listener)
{
};

IGameEvent *CGameEventManager2::CreateEvent( const char *name, bool bForce = false )
{
	return nullptr;
};

bool CGameEventManager2::FireEvent( IGameEvent *event, bool bDontBroadcast = false )
{
	return false;
};

bool CGameEventManager2::FireEventClientSide( IGameEvent *event )
{
	return false;
};

IGameEvent *CGameEventManager2::DuplicateEvent( IGameEvent *event )
{
	return nullptr;
};

void CGameEventManager2::FreeEvent( IGameEvent *event )
{
};

bool CGameEventManager2::SerializeEvent( IGameEvent *event, bf_write *buf )
{
	return false;
};

IGameEvent *CGameEventManager2::UnserializeEvent( bf_read *buf )
{
	return nullptr;
};