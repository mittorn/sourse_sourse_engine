#pragma once

#include "iefx.h"

// TODO: find better both class and file names

class CEfx final : public IVEfx
{
public:
	CEfx() = default;
	~CEfx() = default;
	
	int Draw_DecalIndexFromName( char *name ) override;

	void DecalShoot( int textureIndex, int entity, 
		const model_t *model, const Vector& model_origin, const QAngle& model_angles, 
		const Vector& position, const Vector *saxis, int flags ) override;

	void DecalColorShoot( int textureIndex, int entity, 
		const model_t *model, const Vector& model_origin, const QAngle& model_angles, 
		const Vector& position, const Vector *saxis, int flags, const color32 &rgbaColor  ) override;

	void PlayerDecalShoot( IMaterial *material, void *userdata, int entity, const model_t *model, 
		const Vector& model_origin, const QAngle& model_angles, 
		const Vector& position, const Vector *saxis, int flags, const color32 &rgbaColor ) override;

	dlight_t *CL_AllocDlight ( int key ) override;
	dlight_t *CL_AllocElight ( int key ) override;

	int CL_GetActiveDLights( dlight_t *pList[MAX_DLIGHTS] ) override;

	const char *Draw_DecalNameFromIndex( int nIndex ) override;

	dlight_t *GetElightByKey( int key ) override;
};