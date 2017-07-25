#include "StaticPropMgrServer.hpp"

EXPOSE_SINGLE_INTERFACE(CStaticPropMgrServer, IStaticPropMgrServer, INTERFACEVERSION_STATICPROPMGR_SERVER)

void CStaticPropMgrServer::CreateVPhysicsRepresentations( IPhysicsEnvironment *physenv, IVPhysicsKeyHandler *pDefaults, void *pGameData )
{
};

void CStaticPropMgrServer::TraceRayAgainstStaticProp( const Ray_t& ray, int staticPropIndex, trace_t& tr )
{
};

bool CStaticPropMgrServer::IsStaticProp( IHandleEntity *pHandleEntity ) const
{
	return false;
};

bool CStaticPropMgrServer::IsStaticProp( CBaseHandle handle ) const
{
	return false;
};

ICollideable *CStaticPropMgrServer::GetStaticPropByIndex( int propIndex )
{
	return nullptr;
};

void CStaticPropMgrServer::GetAllStaticProps( CUtlVector<ICollideable *> *pOutput )
{
};

void CStaticPropMgrServer::GetAllStaticPropsInAABB( const Vector &vMins, const Vector &vMaxs, CUtlVector<ICollideable *> *pOutput )
{
};

void CStaticPropMgrServer::GetAllStaticPropsInOBB( const Vector &ptOrigin, const Vector &vExtent1, const Vector &vExtent2, const Vector &vExtent3, CUtlVector<ICollideable *> *pOutput )
{
};