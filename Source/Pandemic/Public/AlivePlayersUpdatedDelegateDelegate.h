#pragma once
#include "CoreMinimal.h"
#include "AlivePlayersUpdatedDelegateDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAlivePlayersUpdatedDelegate, const TArray<APlayerState*>&, OutAlivePlayers);

