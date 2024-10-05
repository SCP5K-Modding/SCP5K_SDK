#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "OnWriteAsyncEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWriteAsyncEvent, const EDiscordResult, Result);

