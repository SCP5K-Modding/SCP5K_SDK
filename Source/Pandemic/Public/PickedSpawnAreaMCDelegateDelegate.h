#pragma once
#include "CoreMinimal.h"
#include "PickedSpawnAreaMCDelegateDelegate.generated.h"

class AAISpawnArea;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPickedSpawnAreaMCDelegate, AAISpawnArea*, SpawnArea);

