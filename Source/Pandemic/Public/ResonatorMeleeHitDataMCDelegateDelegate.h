#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=MeleeHitData -FallbackName=MeleeHitData
#include "ResonatorMeleeHitDataMCDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResonatorMeleeHitDataMCDelegate, FMeleeHitData, HitData);

