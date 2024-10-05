#pragma once
#include "CoreMinimal.h"
#include "ObjectiveActivatedDelegateDelegate.generated.h"

class UObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveActivatedDelegate, UObjective*, Objective);

