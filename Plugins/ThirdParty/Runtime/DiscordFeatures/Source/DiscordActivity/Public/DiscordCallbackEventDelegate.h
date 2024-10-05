#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "DiscordCallbackEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordCallbackEvent, EDiscordResult, Result);

