#pragma once
#include "CoreMinimal.h"
#include "EnemyCounterUpdatedSingleDelegateDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FEnemyCounterUpdatedSingleDelegate, APawn*, Enemy, int32, EnemyCount, FName, CounterName);

