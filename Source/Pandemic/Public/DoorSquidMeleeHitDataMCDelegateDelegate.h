#pragma once
#include "CoreMinimal.h"
#include "DoorSquidMeleeHitDataMCDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDoorSquidMeleeHitDataMCDelegate, AActor*, TargetActor);

