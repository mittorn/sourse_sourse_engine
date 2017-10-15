#include "VoiceServer.hpp"

EXPOSE_SINGLE_INTERFACE(CVoiceServer, IVoiceServer, INTERFACEVERSION_VOICESERVER)

bool CVoiceServer::GetClientListening(int iReceiver, int iSender)
{
	return true;
};

bool CVoiceServer::SetClientListening(int iReceiver, int iSender, bool bListen)
{
	return true;
};

bool CVoiceServer::SetClientProximity(int iReceiver, int iSender, bool bUseProximity)
{
	return true;
};