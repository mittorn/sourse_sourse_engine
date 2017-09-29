#pragma once

#include "ivoiceserver.h"

class CVoiceServer final : public IVoiceServer
{
public:
	CVoiceServer() = default;
	~CVoiceServer() = default;
	
	bool GetClientListening(int iReceiver, int iSender);
	bool SetClientListening(int iReceiver, int iSender, bool bListen);
	
	bool SetClientProximity(int iReceiver, int iSender, bool bUseProximity);
};