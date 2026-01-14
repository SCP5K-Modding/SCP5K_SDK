#pragma once
#include "CoreMinimal.h"
#include "WaveScenarioRemainingEnemiesUpdatedDelegateDelegate.generated.h"

class AWaveScenarioManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FWaveScenarioRemainingEnemiesUpdatedDelegate, AWaveScenarioManager*, ScenarioManager, int32, NumRemainingActors, int32, PrevNumRemainingActors);

