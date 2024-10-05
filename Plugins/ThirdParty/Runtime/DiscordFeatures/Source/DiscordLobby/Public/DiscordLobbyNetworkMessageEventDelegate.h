#pragma once
#include "CoreMinimal.h"
#include "DiscordLobbyNetworkMessageEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FDiscordLobbyNetworkMessageEvent, const int64, LobbyId, const int64, UserId, const uint8, ChannelId, const TArray<uint8>&, Data);

