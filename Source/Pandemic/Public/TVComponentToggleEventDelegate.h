#pragma once
#include "CoreMinimal.h"
#include "TVComponentToggleEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTVComponentToggleEvent, bool, bIsOn);

