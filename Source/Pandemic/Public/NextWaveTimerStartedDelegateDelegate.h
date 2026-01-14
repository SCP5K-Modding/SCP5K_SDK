#pragma once
#include "CoreMinimal.h"
#include "NextWaveTimerStartedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNextWaveTimerStartedDelegate, float, TimeUntilNextWave, float, OriginalTimerDuration);

