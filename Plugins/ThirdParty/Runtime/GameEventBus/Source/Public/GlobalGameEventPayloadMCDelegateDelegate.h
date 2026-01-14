#pragma once
#include "CoreMinimal.h"
#include "GlobalGameEventPayloadMCDelegateDelegate.generated.h"

class UGenericGameEvent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGlobalGameEventPayloadMCDelegate, const UGenericGameEvent*, Event);

