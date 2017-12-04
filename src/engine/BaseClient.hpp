#pragma once

#include "iclient.h"

class CBaseClient override : public IClient //public IGameEventListener2, public IClient, public IClientMessageHandler
{
public:
	CBaseClient() = default;
	~CBaseClient() = default;
private:
};