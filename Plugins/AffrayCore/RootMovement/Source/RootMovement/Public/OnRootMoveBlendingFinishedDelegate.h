#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnRootMoveBlendingFinishedDelegate.generated.h"

class UAnimMontage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnRootMoveBlendingFinished, UAnimMontage*, Montage, const FTransform&, Transform, bool, bShouldSweep);

