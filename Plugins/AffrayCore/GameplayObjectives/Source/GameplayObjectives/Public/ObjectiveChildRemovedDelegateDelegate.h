#pragma once
#include "CoreMinimal.h"
#include "ObjectiveChildRemovedDelegateDelegate.generated.h"

class UObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FObjectiveChildRemovedDelegate, UObjective*, Objective, UObjective*, Child);

