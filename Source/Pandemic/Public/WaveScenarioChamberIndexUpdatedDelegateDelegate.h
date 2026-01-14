#pragma once
#include "CoreMinimal.h"
#include "WaveScenarioChamberIndexUpdatedDelegateDelegate.generated.h"

class AWaveScenarioManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWaveScenarioChamberIndexUpdatedDelegate, AWaveScenarioManager*, ScenarioManager, int32, Index);

