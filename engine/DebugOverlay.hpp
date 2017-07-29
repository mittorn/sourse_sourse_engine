#pragma once

#include "engine/ivdebugoverlay.h"

class CDebugOverlay final : public IVDebugOverlay
{
public:
	CDebugOverlay() = default;
	~CDebugOverlay() = default;
	
	void AddEntityTextOverlay(int ent_index, int line_offset, float duration, int r, int g, int b, int a, PRINTF_FORMAT_STRING const char *format, ...) override;
	void AddBoxOverlay(const Vector& origin, const Vector& mins, const Vector& max, QAngle const& orientation, int r, int g, int b, int a, float duration) override;
	void AddTriangleOverlay(const Vector& p1, const Vector& p2, const Vector& p3, int r, int g, int b, int a, bool noDepthTest, float duration) override;
	void AddLineOverlay(const Vector& origin, const Vector& dest, int r, int g, int b,bool noDepthTest, float duration) override;
	void AddTextOverlay(const Vector& origin, float duration, PRINTF_FORMAT_STRING const char *format, ...) override;
	void AddTextOverlay(const Vector& origin, int line_offset, float duration, PRINTF_FORMAT_STRING const char *format, ...) override;
	void AddScreenTextOverlay(float flXPos, float flYPos,float flDuration, int r, int g, int b, int a, const char *text) override;
	void AddSweptBoxOverlay(const Vector& start, const Vector& end, const Vector& mins, const Vector& max, const QAngle & angles, int r, int g, int b, int a, float flDuration) override;
	void AddGridOverlay(const Vector& origin) override;
	
	int ScreenPosition(const Vector& point, Vector& screen) override;
	int ScreenPosition(float flXPos, float flYPos, Vector& screen) override;

	OverlayText_t *GetFirst() override;
	OverlayText_t *GetNext( OverlayText_t *current ) override;
	
	void ClearDeadOverlays() override;
	void ClearAllOverlays() override;

	void AddTextOverlayRGB(const Vector& origin, int line_offset, float duration, float r, float g, float b, float alpha, PRINTF_FORMAT_STRING const char *format, ...) override;
	void AddTextOverlayRGB(const Vector& origin, int line_offset, float duration, int r, int g, int b, int a, PRINTF_FORMAT_STRING const char *format, ...) override;

	void AddLineOverlayAlpha(const Vector& origin, const Vector& dest, int r, int g, int b, int a, bool noDepthTest, float duration) override;
	void AddBoxOverlay2( const Vector& origin, const Vector& mins, const Vector& max, QAngle const& orientation, const Color& faceColor, const Color& edgeColor, float duration ) override;
};