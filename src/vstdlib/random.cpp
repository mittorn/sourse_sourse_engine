#include "vstdlib/random.h"

CUniformRandomStream::CUniformRandomStream()
{
};

void CUniformRandomStream::SetSeed(int iSeed)
{
};

float CUniformRandomStream::RandomFloat(float flMinVal, float flMaxVal)
{
	return 0.0f;
};

int CUniformRandomStream::RandomInt(int iMinVal, int iMaxVal)
{
	return 0;
};

float CUniformRandomStream::RandomFloatExp(float flMinVal, float flMaxVal, float flExponent)
{
	return 0.0f;
};

int CUniformRandomStream::GenerateRandomNumber()
{
	return -1;
};

CGaussianRandomStream::CGaussianRandomStream(IUniformRandomStream *pUniformStream)
{
};

void CGaussianRandomStream::AttachToStream(IUniformRandomStream *pUniformStream);
{
};

float CGaussianRandomStream::RandomFloat(float flMean, float flStdDev)
{
	return 0.0f;
};

CDefaultUniformRandomStream gDefaultUniformRandomStream;
IUniformRandomStream *gpUniformRandomStream{&gDefaultUniformRandomStream};

void InstallUniformRandomStream(IUniformRandomStream *pStream)
{
	//if(pStream)
		gpUniformRandomStream = pStream;
	//else
		//gpUniformRandomStream = &gDefaultUniformRandomStream;
};

void RandomSeed(int iSeed)
{
};

float RandomFloat(float flMinVal, float flMaxVal)
{
	return 0.0f;
};

float RandomFloatExp(float flMinVal, float flMaxVal, float flExponent)
{
	return 0.0f;
};

float RandomGaussianFloat(float flMean, float flStdDev)
{
	return 0.0f;
};

int RandomInt(int iMinVal, int iMaxVal)
{
	return 0;
};