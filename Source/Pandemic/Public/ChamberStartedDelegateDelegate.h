#pragma once
#include "CoreMinimal.h"
#include "ChamberStartedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChamberStartedDelegate, int32, TotalWavesCount);

