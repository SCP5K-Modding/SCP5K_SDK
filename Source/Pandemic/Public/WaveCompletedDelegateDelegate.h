#pragma once
#include "CoreMinimal.h"
#include "WaveScenarioWave.h"
#include "WaveCompletedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWaveCompletedDelegate, const FWaveScenarioWave&, CurrentWave, int32, WaveNumber);

