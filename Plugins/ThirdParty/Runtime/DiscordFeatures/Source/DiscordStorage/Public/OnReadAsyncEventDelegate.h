#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "OnReadAsyncEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReadAsyncEvent, const EDiscordResult, Result, const TArray<uint8>&, Data);

