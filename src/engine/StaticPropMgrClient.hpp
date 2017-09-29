#pragma once

#include "engine/IStaticPropMgr.h"

class CStaticPropMgrServer final : public IStaticPropMgrClient
{
public:
	CStaticPropMgrServer() = default;
	~CStaticPropMgrServer() = default;
	
	void CreateVPhysicsRepresentations( IPhysicsEnvironment *physenv, IVPhysicsKeyHandler *pDefaults, void *pGameData ) override;

	void TraceRayAgainstStaticProp( const Ray_t& ray, int staticPropIndex, trace_t& tr ) override;

	bool IsStaticProp( IHandleEntity *pHandleEntity ) const override;
	bool IsStaticProp( CBaseHandle handle ) const override;

	ICollideable *GetStaticPropByIndex( int propIndex ) override;
	
	void ComputePropOpacity( const Vector &viewOrigin, float factor ) override;

	void AddDecalToStaticProp( const Vector& rayStart, const Vector& rayEnd,
		int staticPropIndex, int decalIndex, bool doTrace, trace_t& tr ) override;
	
	void AddShadowToStaticProp( unsigned short shadowHandle, IClientRenderable* pRenderable ) override;
	void RemoveAllShadowsFromStaticProp( IClientRenderable* pRenderable ) override;

	void GetStaticPropMaterialColorAndLighting( trace_t* pTrace,
		int staticPropIndex, Vector& lighting, Vector& matColor ) override;

	void GetAllStaticProps( CUtlVector<ICollideable *> *pOutput ) override;
	void GetAllStaticPropsInAABB( const Vector &vMins, const Vector &vMaxs, CUtlVector<ICollideable *> *pOutput ) override;
	void GetAllStaticPropsInOBB( const Vector &ptOrigin, const Vector &vExtent1, const Vector &vExtent2, const Vector &vExtent3, CUtlVector<ICollideable *> *pOutput ) override;

	void DrawStaticProps( IClientRenderable **pProps, int count, bool bShadowDepth, bool drawVCollideWireframe ) override;
	void AddColorDecalToStaticProp( Vector const& rayStart, Vector const& rayEnd,
		int staticPropIndex, int decalIndex, bool doTrace, trace_t& tr, bool bUseColor, Color cColor ) override;
};