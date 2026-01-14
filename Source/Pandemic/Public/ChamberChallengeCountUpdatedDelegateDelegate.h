#pragma once
#include "CoreMinimal.h"
#include "ChamberChallengeCounters.h"
#include "ChamberChallengeCountUpdatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChamberChallengeCountUpdatedDelegate, const FChamberChallengeCounters&, ChallengeCounters);

