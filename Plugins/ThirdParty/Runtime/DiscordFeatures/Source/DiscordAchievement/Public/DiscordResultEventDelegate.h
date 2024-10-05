#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "DiscordResultEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordResultEvent, EDiscordResult, Result);

