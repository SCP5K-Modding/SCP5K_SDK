#pragma once
#include "CoreMinimal.h"
#include "PlayerUpdatedDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerUpdated, int32, PlayerID, APlayerState*, PlayerState);

