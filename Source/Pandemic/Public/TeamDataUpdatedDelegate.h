#pragma once
#include "CoreMinimal.h"
#include "TeamDataUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTeamDataUpdated, int32, TeamIndex, int32, Stat);

