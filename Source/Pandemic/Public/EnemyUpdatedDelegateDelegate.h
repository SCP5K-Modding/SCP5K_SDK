#pragma once
#include "CoreMinimal.h"
#include "EnemyUpdatedDelegateDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEnemyUpdatedDelegate, APawn*, Enemy, int32, EnemyCount);

