#pragma once
#include "CoreMinimal.h"
#include "DiscordLobbyUpdateEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordLobbyUpdateEvent, const int64, LobbyId);

