#pragma once
#include "CoreMinimal.h"
#include "EDiscordLogLevel.h"
#include "DiscordLogEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDiscordLogEvent, EDiscordLogLevel, DiscordLogLevel, const FString&, Message);

