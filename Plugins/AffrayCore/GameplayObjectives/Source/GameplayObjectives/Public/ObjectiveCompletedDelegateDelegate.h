#pragma once
#include "CoreMinimal.h"
#include "ObjectiveCompletedDelegateDelegate.generated.h"

class UObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FObjectiveCompletedDelegate, UObjective*, Objective, bool, bSucceeded);

