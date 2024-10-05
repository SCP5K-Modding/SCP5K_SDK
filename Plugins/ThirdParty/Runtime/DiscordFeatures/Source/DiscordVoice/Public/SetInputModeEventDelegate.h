#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "SetInputModeEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSetInputModeEvent, EDiscordResult, Result);

