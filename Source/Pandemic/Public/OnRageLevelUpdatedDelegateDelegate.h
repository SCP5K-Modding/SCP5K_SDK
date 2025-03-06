#pragma once
#include "CoreMinimal.h"
#include "RageLevel.h"
#include "OnRageLevelUpdatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRageLevelUpdatedDelegate, const FRageLevel&, CurrentRageLevel);

