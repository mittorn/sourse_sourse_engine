#include "StaticPropMgrClient.hpp"

EXPOSE_SINGLE_INTERFACE(CStaticPropMgrClient, IStaticPropMgrClient, INTERFACEVERSION_STATICPROPMGR_CLIENT)

void CStaticPropMgrClient::CreateVPhysicsRepresentations( IPhysicsEnvironment *physenv, IVPhysicsKeyHandler *pDefaults, void *pGameData )
{
};

void CStaticPropMgrClient::TraceRayAgainstStaticProp( const Ray_t& ray, int staticPropIndex, trace_t& tr )
{
};

bool CStaticPropMgrClient::IsStaticProp( IHandleEntity *pHandleEntity ) const
{
	return false;
};

bool CStaticPropMgrClient::IsStaticProp( CBaseHandle handle ) const
{
	return false;
};

ICollideable *CStaticPropMgrClient::GetStaticPropByIndex( int propIndex )
{
	return nullptr;
};

void CStaticPropMgrClient::ComputePropOpacity( const Vector &viewOrigin, float factor )
{
};

void CStaticPropMgrClient::AddDecalToStaticProp( const Vector& rayStart, const Vector& rayEnd,
	int staticPropIndex, int decalIndex, bool doTrace, trace_t& tr )
{
};

void CStaticPropMgrClient::AddShadowToStaticProp( unsigned short shadowHandle, IClientRenderable* pRenderable )
{
};

void CStaticPropMgrClient::RemoveAllShadowsFromStaticProp( IClientRenderable* pRenderable )
{
};

void CStaticPropMgrClient::GetStaticPropMaterialColorAndLighting( trace_t* pTrace,
	int staticPropIndex, Vector& lighting, Vector& matColor )
{
};

void CStaticPropMgrClient::GetAllStaticProps( CUtlVector<ICollideable *> *pOutput )
{
};

void CStaticPropMgrClient::GetAllStaticPropsInAABB( const Vector &vMins, const Vector &vMaxs, CUtlVector<ICollideable *> *pOutput )
{
};

void CStaticPropMgrClient::GetAllStaticPropsInOBB( const Vector &ptOrigin, const Vector &vExtent1, const Vector &vExtent2, const Vector &vExtent3, CUtlVector<ICollideable *> *pOutput )
{
};

void CStaticPropMgrClient::DrawStaticProps( IClientRenderable **pProps, int count, bool bShadowDepth, bool drawVCollideWireframe )
{
};

void CStaticPropMgrClient::AddColorDecalToStaticProp( Vector const& rayStart, Vector const& rayEnd,
	int staticPropIndex, int decalIndex, bool doTrace, trace_t& tr, bool bUseColor, Color cColor )
{
};