#pragma once
#include "CoreMinimal.h"
#include "MeleeHitData.h"
#include "SCP098MeleeHitDataMCDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSCP098MeleeHitDataMCDelegate, FMeleeHitData, HitData);

