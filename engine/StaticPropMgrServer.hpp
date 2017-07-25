#pragma once

#include "engine/IStaticPropMgr.h"

class CStaticPropMgrServer final : public IStaticPropMgrServer
{
public:
	CStaticPropMgrServer() = default;
	~CStaticPropMgrServer() = default;
	
	void CreateVPhysicsRepresentations( IPhysicsEnvironment *physenv, IVPhysicsKeyHandler *pDefaults, void *pGameData ) override;

	void TraceRayAgainstStaticProp( const Ray_t& ray, int staticPropIndex, trace_t& tr ) override;

	bool IsStaticProp( IHandleEntity *pHandleEntity ) const override;
	bool IsStaticProp( CBaseHandle handle ) const override;

	ICollideable *GetStaticPropByIndex( int propIndex ) override;
	
	void GetAllStaticProps( CUtlVector<ICollideable *> *pOutput ) override;
	void GetAllStaticPropsInAABB( const Vector &vMins, const Vector &vMaxs, CUtlVector<ICollideable *> *pOutput ) override;
	void GetAllStaticPropsInOBB( const Vector &ptOrigin, const Vector &vExtent1, const Vector &vExtent2, const Vector &vExtent3, CUtlVector<ICollideable *> *pOutput ) override;
};