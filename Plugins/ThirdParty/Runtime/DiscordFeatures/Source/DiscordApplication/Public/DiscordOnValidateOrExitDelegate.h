#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "DiscordOnValidateOrExitDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordOnValidateOrExit, EDiscordResult, Result);

