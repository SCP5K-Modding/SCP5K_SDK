#pragma once
#include "CoreMinimal.h"
#include "WaveScenarioChamberExitedDelegateDelegate.generated.h"

class AWaveScenarioManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaveScenarioChamberExitedDelegate, AWaveScenarioManager*, ScenarioManager);

