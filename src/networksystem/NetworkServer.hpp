#pragma once

class CNetworkServer final : public IConnectionlessPacketHandler, public INetworkMessageHandler, public ILookupChannel
{
};