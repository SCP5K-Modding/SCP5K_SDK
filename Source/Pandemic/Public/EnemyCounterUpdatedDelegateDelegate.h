#pragma once
#include "CoreMinimal.h"
#include "EnemyCounterUpdatedDelegateDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEnemyCounterUpdatedDelegate, APawn*, Enemy, int32, EnemyCount, FName, CounterName);

