#pragma once
#include "CoreMinimal.h"
#include "KillCounterAsyncOutputPinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FKillCounterAsyncOutputPin, int32, RemainingEnemies, FName, CounterName);

