#pragma once
#include "CoreMinimal.h"
#include "SAITarget.h"
#include "SAITargetUpdatedDelegateDelegate.generated.h"

class ASAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSAITargetUpdatedDelegate, ASAIController*, Controller, const FSAITarget&, Target);

