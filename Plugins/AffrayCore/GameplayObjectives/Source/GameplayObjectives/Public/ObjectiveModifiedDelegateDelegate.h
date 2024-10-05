#pragma once
#include "CoreMinimal.h"
#include "ObjectiveModifiedDelegateDelegate.generated.h"

class UObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveModifiedDelegate, UObjective*, Objective);

