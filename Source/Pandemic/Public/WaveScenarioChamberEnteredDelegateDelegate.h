#pragma once
#include "CoreMinimal.h"
#include "WaveScenarioChamberEnteredDelegateDelegate.generated.h"

class AWaveScenarioManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaveScenarioChamberEnteredDelegate, AWaveScenarioManager*, ScenarioManager);

