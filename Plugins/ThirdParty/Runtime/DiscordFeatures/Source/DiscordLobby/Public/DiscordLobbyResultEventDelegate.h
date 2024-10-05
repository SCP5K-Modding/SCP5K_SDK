#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "DiscordLobbyResultEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordLobbyResultEvent, EDiscordResult, Result);

