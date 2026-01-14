#pragma once
#include "CoreMinimal.h"
#include "SpawnAreaSpawningCompletedDelegateDelegate.generated.h"

class AAISpawnArea;
class APawn;
class AWaveScenarioManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSpawnAreaSpawningCompletedDelegate, AWaveScenarioManager*, ScenarioManager, const TArray<APawn*>&, SpawnedActors, const AAISpawnArea*, SpawnArea);

