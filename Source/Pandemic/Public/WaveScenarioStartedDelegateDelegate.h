#pragma once
#include "CoreMinimal.h"
#include "WaveScenarioStartedDelegateDelegate.generated.h"

class AWaveScenarioManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWaveScenarioStartedDelegate, AWaveScenarioManager*, ScenarioManager, int32, TotalWavesCount);

