#include "EngineTraceServer.hpp"

EXPOSE_SINGLE_INTERFACE(CEngineTraceServer, IEngineTrace, INTERFACEVERSION_ENGINETRACE_SERVER)

int CEngineTraceServer::GetPointContents( const Vector &vecAbsPosition, IHandleEntity** ppEntity)
{
	return 0;
};

int CEngineTraceServer::GetPointContents_Collideable( ICollideable *pCollide, const Vector &vecAbsPosition )
{
	return 0;
};

void CEngineTraceServer::ClipRayToEntity( const Ray_t &ray, unsigned int fMask, IHandleEntity *pEnt, trace_t *pTrace )
{
};

void CEngineTraceServer::ClipRayToCollideable( const Ray_t &ray, unsigned int fMask, ICollideable *pCollide, trace_t *pTrace )
{
};

void CEngineTraceServer::TraceRay( const Ray_t &ray, unsigned int fMask, ITraceFilter *pTraceFilter, trace_t *pTrace )
{
};

void CEngineTraceServer::SetupLeafAndEntityListRay( const Ray_t &ray, CTraceListData &traceData )
{
};

void CEngineTraceServer::SetupLeafAndEntityListBox( const Vector &vecBoxMin, const Vector &vecBoxMax, CTraceListData &traceData )
{
};

void CEngineTraceServer::TraceRayAgainstLeafAndEntityList( const Ray_t &ray, CTraceListData &traceData, unsigned int fMask, ITraceFilter *pTraceFilter, trace_t *pTrace )
{
};

void CEngineTraceServer::SweepCollideable( ICollideable *pCollide, const Vector &vecAbsStart, const Vector &vecAbsEnd,
	const QAngle &vecAngles, unsigned int fMask, ITraceFilter *pTraceFilter, trace_t *pTrace )
{
};

void CEngineTraceServer::EnumerateEntities( const Ray_t &ray, bool triggers, IEntityEnumerator *pEnumerator )
{
};

void CEngineTraceServer::EnumerateEntities( const Vector &vecAbsMins, const Vector &vecAbsMaxs, IEntityEnumerator *pEnumerator )
{
};

ICollideable *CEngineTraceServer::GetCollideable( IHandleEntity *pEntity )
{
	return nullptr;
};

int CEngineTraceServer::GetStatByIndex( int index, bool bClear )
{
	return 0;
};

void CEngineTraceServer::GetBrushesInAABB( const Vector &vMins, const Vector &vMaxs, CUtlVector<int> *pOutput, int iContentsMask)
{
};

CPhysCollide *CEngineTraceServer::GetCollidableFromDisplacementsInAABB( const Vector& vMins, const Vector& vMaxs )
{
	return nullptr;
};

bool CEngineTraceServer::GetBrushInfo( int iBrush, CUtlVector<Vector4D> *pPlanesOut, int *pContentsOut )
{
	return false;
};

bool CEngineTraceServer::PointOutsideWorld( const Vector &ptTest )
{
	return false;
};

int CEngineTraceServer::GetLeafContainingPoint( const Vector &ptTest )
{
	return 0;
};