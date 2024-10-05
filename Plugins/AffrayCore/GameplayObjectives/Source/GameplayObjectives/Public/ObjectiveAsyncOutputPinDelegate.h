#pragma once
#include "CoreMinimal.h"
#include "ObjectiveAsyncOutputPinDelegate.generated.h"

class UObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveAsyncOutputPin, UObjective*, Objective);

