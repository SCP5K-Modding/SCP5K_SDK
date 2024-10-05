#pragma once
#include "CoreMinimal.h"
#include "ObjectiveCompletedBPDelegateDelegate.generated.h"

class UObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FObjectiveCompletedBPDelegate, UObjective*, Objective, bool, bSucceeded);

