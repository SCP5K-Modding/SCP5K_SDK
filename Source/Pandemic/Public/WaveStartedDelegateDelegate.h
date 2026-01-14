#pragma once
#include "CoreMinimal.h"
#include "WaveScenarioWave.h"
#include "WaveStartedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWaveStartedDelegate, const FWaveScenarioWave&, CurrentWave, int32, WaveNumber);

