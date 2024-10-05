#pragma once
#include "CoreMinimal.h"
#include "ObjectiveUpdatedDelegateDelegate.generated.h"

class UObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveUpdatedDelegate, UObjective*, Objective);

