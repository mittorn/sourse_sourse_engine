#include "EngineTraceClient.hpp"

EXPOSE_SINGLE_INTERFACE(CEngineTraceClient, IEngineTrace, INTERFACEVERSION_ENGINETRACE_CLIENT)

int CEngineTraceClient::GetPointContents( const Vector &vecAbsPosition, IHandleEntity** ppEntity)
{
	return 0;
};

int CEngineTraceClient::GetPointContents_Collideable( ICollideable *pCollide, const Vector &vecAbsPosition )
{
	return 0;
};

void CEngineTraceClient::ClipRayToEntity( const Ray_t &ray, unsigned int fMask, IHandleEntity *pEnt, trace_t *pTrace )
{
};

void CEngineTraceClient::ClipRayToCollideable( const Ray_t &ray, unsigned int fMask, ICollideable *pCollide, trace_t *pTrace )
{
};

void CEngineTraceClient::TraceRay( const Ray_t &ray, unsigned int fMask, ITraceFilter *pTraceFilter, trace_t *pTrace )
{
};

void CEngineTraceClient::SetupLeafAndEntityListRay( const Ray_t &ray, CTraceListData &traceData )
{
};

void CEngineTraceClient::SetupLeafAndEntityListBox( const Vector &vecBoxMin, const Vector &vecBoxMax, CTraceListData &traceData )
{
};

void CEngineTraceClient::TraceRayAgainstLeafAndEntityList( const Ray_t &ray, CTraceListData &traceData, unsigned int fMask, ITraceFilter *pTraceFilter, trace_t *pTrace )
{
};

void CEngineTraceClient::SweepCollideable( ICollideable *pCollide, const Vector &vecAbsStart, const Vector &vecAbsEnd,
	const QAngle &vecAngles, unsigned int fMask, ITraceFilter *pTraceFilter, trace_t *pTrace )
{
};

void CEngineTraceClient::EnumerateEntities( const Ray_t &ray, bool triggers, IEntityEnumerator *pEnumerator )
{
};

void CEngineTraceClient::EnumerateEntities( const Vector &vecAbsMins, const Vector &vecAbsMaxs, IEntityEnumerator *pEnumerator )
{
};

ICollideable *CEngineTraceClient::GetCollideable( IHandleEntity *pEntity )
{
	return nullptr;
};

int CEngineTraceClient::GetStatByIndex( int index, bool bClear )
{
	return 0;
};

void CEngineTraceClient::GetBrushesInAABB( const Vector &vMins, const Vector &vMaxs, CUtlVector<int> *pOutput, int iContentsMask)
{
};

CPhysCollide *CEngineTraceClient::GetCollidableFromDisplacementsInAABB( const Vector& vMins, const Vector& vMaxs )
{
	return nullptr;
};

bool CEngineTraceClient::GetBrushInfo( int iBrush, CUtlVector<Vector4D> *pPlanesOut, int *pContentsOut )
{
	return false;
};

bool CEngineTraceClient::PointOutsideWorld( const Vector &ptTest )
{
	return false;
};

int CEngineTraceClient::GetLeafContainingPoint( const Vector &ptTest )
{
	return 0;
};