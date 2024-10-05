#pragma once
#include "CoreMinimal.h"
#include "PlayerHealthUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerHealthUpdated, int32, PlayerID, float, Health);

