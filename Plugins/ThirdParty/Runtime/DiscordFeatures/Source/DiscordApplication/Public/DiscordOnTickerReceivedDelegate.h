#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "DiscordOnTickerReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordOnTickerReceived, EDiscordResult, Result, const FString&, Ticket);

