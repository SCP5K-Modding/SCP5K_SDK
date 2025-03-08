#pragma once
#include "CoreMinimal.h"
#include "MeleeHitData.h"
#include "ResonatorMeleeHitDataMCDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResonatorMeleeHitDataMCDelegate, FMeleeHitData, HitData);

