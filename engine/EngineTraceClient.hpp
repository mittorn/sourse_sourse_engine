#pragma once

#include "engine/IEngineTrace.h"

class CEngineTraceClient final : public IEngineTrace
{
public:
	CEngineTraceClient() = default;
	~CEngineTraceClient() = default;

	int GetPointContents( const Vector &vecAbsPosition, IHandleEntity** ppEntity = NULL ) override;
	int GetPointContents_Collideable( ICollideable *pCollide, const Vector &vecAbsPosition ) override;

	void ClipRayToEntity( const Ray_t &ray, unsigned int fMask, IHandleEntity *pEnt, trace_t *pTrace ) override;
	void ClipRayToCollideable( const Ray_t &ray, unsigned int fMask, ICollideable *pCollide, trace_t *pTrace ) override;

	void TraceRay( const Ray_t &ray, unsigned int fMask, ITraceFilter *pTraceFilter, trace_t *pTrace ) override;

	void SetupLeafAndEntityListRay( const Ray_t &ray, CTraceListData &traceData ) override;
	void SetupLeafAndEntityListBox( const Vector &vecBoxMin, const Vector &vecBoxMax, CTraceListData &traceData ) override;
	
	void TraceRayAgainstLeafAndEntityList( const Ray_t &ray, CTraceListData &traceData, unsigned int fMask, ITraceFilter *pTraceFilter, trace_t *pTrace ) override;

	void SweepCollideable( ICollideable *pCollide, const Vector &vecAbsStart, const Vector &vecAbsEnd, 
	const QAngle &vecAngles, unsigned int fMask, ITraceFilter *pTraceFilter, trace_t *pTrace ) override;

	void EnumerateEntities( const Ray_t &ray, bool triggers, IEntityEnumerator *pEnumerator ) override;
	void EnumerateEntities( const Vector &vecAbsMins, const Vector &vecAbsMaxs, IEntityEnumerator *pEnumerator ) override;

	ICollideable *GetCollideable( IHandleEntity *pEntity ) override;

	int GetStatByIndex( int index, bool bClear ) override;

	void GetBrushesInAABB( const Vector &vMins, const Vector &vMaxs, CUtlVector<int> *pOutput, int iContentsMask = 0xFFFFFFFF ) override;

	CPhysCollide* GetCollidableFromDisplacementsInAABB( const Vector& vMins, const Vector& vMaxs ) override;

	bool GetBrushInfo( int iBrush, CUtlVector<Vector4D> *pPlanesOut, int *pContentsOut ) override;

	bool PointOutsideWorld( const Vector &ptTest ) override;

	int GetLeafContainingPoint( const Vector &ptTest ) override;
};