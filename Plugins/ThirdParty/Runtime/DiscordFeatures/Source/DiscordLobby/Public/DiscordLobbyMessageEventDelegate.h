#pragma once
#include "CoreMinimal.h"
#include "DiscordLobbyMessageEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDiscordLobbyMessageEvent, const int64, LobbyId, const int64, UserId, const TArray<uint8>&, Data);

