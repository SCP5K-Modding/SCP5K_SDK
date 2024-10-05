#pragma once
#include "CoreMinimal.h"
#include "DiscordLobbySpeakingEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDiscordLobbySpeakingEvent, const int64, LobbyId, const int64, UserId, const bool, bSpeaking);

