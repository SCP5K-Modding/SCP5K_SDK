#pragma once
#include "CoreMinimal.h"
#include "WaveTimerData.h"
#include "WaveScenarioTimerUpdatedDelegateDelegate.generated.h"

class AWaveScenarioManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWaveScenarioTimerUpdatedDelegate, AWaveScenarioManager*, ScenarioManager, const FWaveTimerData&, ChangedTimerData);

