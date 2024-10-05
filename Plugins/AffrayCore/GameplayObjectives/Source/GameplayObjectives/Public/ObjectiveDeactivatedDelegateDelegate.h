#pragma once
#include "CoreMinimal.h"
#include "ObjectiveDeactivatedDelegateDelegate.generated.h"

class UObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveDeactivatedDelegate, UObjective*, Objective);

