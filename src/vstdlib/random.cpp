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

float RandomFloat(float flMin, float flMax)
{
	return 0.0f;
};

RandomFloatExp()
{
};

RandomGaussianFloat()
{
};

int RandomInt(int nMin, int nMax)
{
	return 0;
};

RandomSeed()
{
};