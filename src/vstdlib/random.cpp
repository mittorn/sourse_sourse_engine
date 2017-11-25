#include "vstdlib/random.h"

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