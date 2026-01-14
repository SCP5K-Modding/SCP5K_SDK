#pragma once
#include "CoreMinimal.h"
#include "WaveScenarioWaveStartedDelegateDelegate.generated.h"

class AWaveScenarioManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWaveScenarioWaveStartedDelegate, AWaveScenarioManager*, ScenarioManager, int32, Wave);

