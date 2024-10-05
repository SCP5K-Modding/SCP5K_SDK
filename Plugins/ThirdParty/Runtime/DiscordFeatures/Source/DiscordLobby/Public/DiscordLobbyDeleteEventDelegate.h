#pragma once
#include "CoreMinimal.h"
#include "DiscordLobbyDeleteEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordLobbyDeleteEvent, const int64, LobbyId, const int64, Reason);

