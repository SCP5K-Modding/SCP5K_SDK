#pragma once
#include "CoreMinimal.h"
#include "WaveScenarioAllWavesCompletedDelegateDelegate.generated.h"

class AWaveScenarioManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaveScenarioAllWavesCompletedDelegate, AWaveScenarioManager*, ScenarioManager);

