#pragma once
#include "CoreMinimal.h"
#include "WaveNumRemainingEnemiesUpdatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWaveNumRemainingEnemiesUpdatedDelegate, int32, EnemyCount, int32, PrevEnemyCount);

