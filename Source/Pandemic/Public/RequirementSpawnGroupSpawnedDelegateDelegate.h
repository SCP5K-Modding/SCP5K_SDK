#pragma once
#include "CoreMinimal.h"
#include "RequirementSpawnGroupSpawnedDelegateDelegate.generated.h"

class AAISpawnArea;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRequirementSpawnGroupSpawnedDelegate, const AAISpawnArea*, SpawnArea, int32, TotalSpawnGroupEnemies, int32, MostRecentSpawnedEnemyCount);

