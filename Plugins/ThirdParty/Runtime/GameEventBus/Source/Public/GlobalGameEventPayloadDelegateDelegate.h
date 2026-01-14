#pragma once
#include "CoreMinimal.h"
#include "GlobalGameEventPayloadDelegateDelegate.generated.h"

class UGenericGameEvent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FGlobalGameEventPayloadDelegate, const UGenericGameEvent*, Event);

