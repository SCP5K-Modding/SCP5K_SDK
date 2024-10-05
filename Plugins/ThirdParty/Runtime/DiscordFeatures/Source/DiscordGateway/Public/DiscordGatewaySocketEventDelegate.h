#pragma once
#include "CoreMinimal.h"
#include "DiscordGatewaySocketEventDelegate.generated.h"

class UDiscordGatewaySocket;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FDiscordGatewaySocketEvent, UDiscordGatewaySocket*, Socket, const int32, OpCode, const FString&, Data, const int32, Sequence, const FString&, EventName);

