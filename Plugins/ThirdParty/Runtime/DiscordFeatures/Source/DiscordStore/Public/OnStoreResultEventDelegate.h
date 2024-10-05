#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "OnStoreResultEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStoreResultEvent, EDiscordResult, Result);

