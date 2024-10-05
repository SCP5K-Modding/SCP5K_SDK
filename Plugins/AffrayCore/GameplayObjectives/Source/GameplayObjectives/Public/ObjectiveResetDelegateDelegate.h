#pragma once
#include "CoreMinimal.h"
#include "ObjectiveResetDelegateDelegate.generated.h"

class UObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveResetDelegate, UObjective*, Objective);

