#pragma once
#include "CoreMinimal.h"
#include "TeamDataPlayersUpdatedDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTeamDataPlayersUpdated, int32, TeamIndex, APlayerState*, Player);

