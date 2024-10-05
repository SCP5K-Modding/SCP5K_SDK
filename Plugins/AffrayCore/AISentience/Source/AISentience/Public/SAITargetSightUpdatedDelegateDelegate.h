#pragma once
#include "CoreMinimal.h"
#include "SAITarget.h"
#include "SAITargetSightUpdatedDelegateDelegate.generated.h"

class ASAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSAITargetSightUpdatedDelegate, ASAIController*, Controller, const FSAITarget&, Target, bool, bIsSeen, bool, bWasSeenBefore);

