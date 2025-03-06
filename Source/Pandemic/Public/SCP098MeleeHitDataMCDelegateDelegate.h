#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=MeleeHitData -FallbackName=MeleeHitData
#include "SCP098MeleeHitDataMCDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSCP098MeleeHitDataMCDelegate, FMeleeHitData, HitData);

