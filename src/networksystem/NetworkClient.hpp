#pragma once

class CNetworkClient final : public IConnectionlessPacketHandler, public INetworkMessageHandler, public ILookupChannel
{
};