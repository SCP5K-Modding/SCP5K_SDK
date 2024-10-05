#pragma once
#include "CoreMinimal.h"
#include "DiscordLobbyMemberEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordLobbyMemberEvent, const int64, LobbyId, const int64, UserId);

