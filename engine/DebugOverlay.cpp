#include "DebugOverlay.hpp"

EXPOSE_SINGLE_INTERFACE(CDebugOverlay, IDebugOverlay, VDEBUG_OVERLAY_INTERFACE_VERSION)

void CDebugOverlay::AddEntityTextOverlay(int ent_index, int line_offset, float duration, int r, int g, int b, int a, PRINTF_FORMAT_STRING const char *format, ...)
{
};

void CDebugOverlay::AddBoxOverlay(const Vector& origin, const Vector& mins, const Vector& max, QAngle const& orientation, int r, int g, int b, int a, float duration)
{
};

void CDebugOverlay::AddTriangleOverlay(const Vector& p1, const Vector& p2, const Vector& p3, int r, int g, int b, int a, bool noDepthTest, float duration)
{
};

void CDebugOverlay::AddLineOverlay(const Vector& origin, const Vector& dest, int r, int g, int b,bool noDepthTest, float duration)
{
};

void CDebugOverlay::AddTextOverlay(const Vector& origin, float duration, PRINTF_FORMAT_STRING const char *format, ...)
{
};

void CDebugOverlay::AddTextOverlay(const Vector& origin, int line_offset, float duration, PRINTF_FORMAT_STRING const char *format, ...)
{
};

void CDebugOverlay::AddScreenTextOverlay(float flXPos, float flYPos,float flDuration, int r, int g, int b, int a, const char *text)
{
};

void CDebugOverlay::AddSweptBoxOverlay(const Vector& start, const Vector& end, const Vector& mins, const Vector& max, const QAngle & angles, int r, int g, int b, int a, float flDuration)
{
};

void CDebugOverlay::AddGridOverlay(const Vector& origin)
{
};

int CDebugOverlay::ScreenPosition(const Vector& point, Vector& screen)
{
	return 0;
};

int CDebugOverlay::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	return 0;
};

OverlayText_t *CDebugOverlay::GetFirst()
{
	return nullptr;
};

OverlayText_t *CDebugOverlay::GetNext( OverlayText_t *current )
{
	return nullptr;
};

void CDebugOverlay::ClearDeadOverlays()
{
};

void CDebugOverlay::ClearAllOverlays()
{
};

void CDebugOverlay::AddTextOverlayRGB(const Vector& origin, int line_offset, float duration, float r, float g, float b, float alpha, PRINTF_FORMAT_STRING const char *format, ...)
{
};

void CDebugOverlay::AddTextOverlayRGB(const Vector& origin, int line_offset, float duration, int r, int g, int b, int a, PRINTF_FORMAT_STRING const char *format, ...)
{
};

void CDebugOverlay::AddLineOverlayAlpha(const Vector& origin, const Vector& dest, int r, int g, int b, int a, bool noDepthTest, float duration)
{
};

void CDebugOverlay::AddBoxOverlay2( const Vector& origin, const Vector& mins, const Vector& max, QAngle const& orientation, const Color& faceColor, const Color& edgeColor, float duration )
{
};