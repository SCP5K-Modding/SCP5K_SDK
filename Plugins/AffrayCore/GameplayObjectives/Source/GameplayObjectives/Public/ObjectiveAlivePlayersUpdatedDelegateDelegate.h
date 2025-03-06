#pragma once
#include "CoreMinimal.h"
#include "ObjectiveAlivePlayersUpdatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveAlivePlayersUpdatedDelegate, int32, AlivePlayers);

