#include "Efx.hpp"

EXPOSE_SINGLE_INTERFACE(CEfx, IVEfx, VENGINE_EFFECTS_INTERFACE_VERSION)

int CEfx::Draw_DecalIndexFromName( char *name )
{
	return 0;
};

void CEfx::DecalShoot( int textureIndex, int entity, 
	const model_t *model, const Vector& model_origin, const QAngle& model_angles, 
	const Vector& position, const Vector *saxis, int flags )
{
};

void CEfx::DecalColorShoot( int textureIndex, int entity, 
	const model_t *model, const Vector& model_origin, const QAngle& model_angles, 
	const Vector& position, const Vector *saxis, int flags, const color32 &rgbaColor  )
{
};

void CEfx::PlayerDecalShoot( IMaterial *material, void *userdata, int entity, const model_t *model, 
	const Vector& model_origin, const QAngle& model_angles, 
	const Vector& position, const Vector *saxis, int flags, const color32 &rgbaColor )
{
};

dlight_t *CEfx::CL_AllocDlight ( int key )
{
	return nullptr;
};

dlight_t *CEfx::CL_AllocElight ( int key )
{
	return nullptr;
};

int CEfx::CL_GetActiveDLights( dlight_t *pList[MAX_DLIGHTS] )
{
	return 0;
};

const char *CEfx::Draw_DecalNameFromIndex( int nIndex )
{
	return "";
};

dlight_t *CEfx::GetElightByKey( int key )
{
	return nullptr;
};