#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "DiscordLobby.h"
#include "LobbyEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLobbyEvent, EDiscordResult, Result, const FDiscordLobby&, Lobby);

