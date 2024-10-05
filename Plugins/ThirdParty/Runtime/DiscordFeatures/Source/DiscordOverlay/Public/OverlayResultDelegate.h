#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "OverlayResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOverlayResult, const EDiscordResult, Result);

