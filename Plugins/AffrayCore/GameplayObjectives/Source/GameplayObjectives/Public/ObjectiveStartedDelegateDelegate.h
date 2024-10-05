#pragma once
#include "CoreMinimal.h"
#include "ObjectiveStartedDelegateDelegate.generated.h"

class UObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FObjectiveStartedDelegate, UObjective*, Objective, bool, bWasStarted);

