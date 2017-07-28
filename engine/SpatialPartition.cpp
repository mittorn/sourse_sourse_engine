#include "SpatialPartition.hpp"

EXPOSE_SINGLE_INTERFACE(CSpatialPartition, ISpatialPartition, INTERFACEVERSION_SPATIALPARTITION)

SpatialPartitionHandle_t CSpatialPartition::CreateHandle( IHandleEntity *pHandleEntity )
{
	return PARTITION_INVALID_HANDLE;
};

SpatialPartitionHandle_t CSpatialPartition::CreateHandle( IHandleEntity *pHandleEntity,
	SpatialPartitionListMask_t listMask, const Vector& mins, const Vector& maxs ) 
{
	return PARTITION_INVALID_HANDLE;
};

void CSpatialPartition::DestroyHandle( SpatialPartitionHandle_t handle )
{
};

void CSpatialPartition::Insert( SpatialPartitionListMask_t listMask, SpatialPartitionHandle_t handle )
{
};

void CSpatialPartition::Remove( SpatialPartitionListMask_t listMask, SpatialPartitionHandle_t handle )
{
};

void CSpatialPartition::RemoveAndInsert( SpatialPartitionListMask_t removeMask, SpatialPartitionListMask_t insertMask, SpatialPartitionHandle_t handle )
{
};

void CSpatialPartition::Remove( SpatialPartitionHandle_t handle )
{
};

void CSpatialPartition::ElementMoved( SpatialPartitionHandle_t handle, const Vector& mins, const Vector& maxs )
{
};

SpatialTempHandle_t CSpatialPartition::HideElement( SpatialPartitionHandle_t handle )
{
	return PARTITION_INVALID_HANDLE;
};

void CSpatialPartition::UnhideElement( SpatialPartitionHandle_t handle, SpatialTempHandle_t tempHandle )
{
};

void CSpatialPartition::InstallQueryCallback_V1( IPartitionQueryCallback *pCallback )
{
};

void CSpatialPartition::RemoveQueryCallback( IPartitionQueryCallback *pCallback )
{
};

void CSpatialPartition::EnumerateElementsInBox(SpatialPartitionListMask_t listMask,  const Vector& mins, const Vector& maxs, bool coarseTest, IPartitionEnumerator* pIterator )
{
};

void CSpatialPartition::EnumerateElementsInSphere(SpatialPartitionListMask_t listMask, const Vector& origin, float radius, bool coarseTest, IPartitionEnumerator* pIterator )
{
};

void CSpatialPartition::EnumerateElementsAlongRay(SpatialPartitionListMask_t listMask, const Ray_t& ray, bool coarseTest, IPartitionEnumerator* pIterator )
{
};

void CSpatialPartition::EnumerateElementsAtPoint( SpatialPartitionListMask_t listMask, const Vector& pt, bool coarseTest, IPartitionEnumerator* pIterator)
{
};

void CSpatialPartition::SuppressLists( SpatialPartitionListMask_t nListMask, bool bSuppress )
{
};

SpatialPartitionListMask_t CSpatialPartition::GetSuppressedLists()
{
	return 0;
};

void CSpatialPartition::RenderAllObjectsInTree( float flTime )
{
};

void CSpatialPartition::RenderObjectsInPlayerLeafs( const Vector &vecPlayerMin, const Vector &vecPlayerMax, float flTime )
{
};

void CSpatialPartition::RenderLeafsForRayTraceStart( float flTime )
{
};

void CSpatialPartition::RenderLeafsForRayTraceEnd()
{
};

void CSpatialPartition::RenderLeafsForHullTraceStart( float flTime )
{
};

void CSpatialPartition::RenderLeafsForHullTraceEnd()
{
};

void CSpatialPartition::RenderLeafsForBoxStart( float flTime )
{
};

void CSpatialPartition::RenderLeafsForBoxEnd()
{
};

void CSpatialPartition::RenderLeafsForSphereStart( float flTime )
{
};

void CSpatialPartition::RenderLeafsForSphereEnd()
{
};

void CSpatialPartition::RenderObjectsInBox( const Vector &vecMin, const Vector &vecMax, float flTime )
{
};

void CSpatialPartition::RenderObjectsInSphere( const Vector &vecCenter, float flRadius, float flTime )
{
};

void CSpatialPartition::RenderObjectsAlongRay( const Ray_t& ray, float flTime )
{
};

void CSpatialPartition::ReportStats( const char *pFileName )
{
};

void CSpatialPartition::InstallQueryCallback( IPartitionQueryCallback *pCallback )
{
};