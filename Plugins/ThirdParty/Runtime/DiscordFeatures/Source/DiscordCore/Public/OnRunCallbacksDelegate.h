#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "OnRunCallbacksDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRunCallbacks, EDiscordResult, Error);

