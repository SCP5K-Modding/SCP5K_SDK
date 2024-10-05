#pragma once
#include "CoreMinimal.h"
#include "ObjectiveChildAddedDelegateDelegate.generated.h"

class UObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FObjectiveChildAddedDelegate, UObjective*, Objective, UObjective*, Child);

