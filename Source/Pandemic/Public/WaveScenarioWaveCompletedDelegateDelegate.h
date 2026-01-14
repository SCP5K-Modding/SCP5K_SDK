#pragma once
#include "CoreMinimal.h"
#include "WaveScenarioWaveCompletedDelegateDelegate.generated.h"

class AWaveScenarioManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWaveScenarioWaveCompletedDelegate, AWaveScenarioManager*, ScenarioManager, int32, Wave);

