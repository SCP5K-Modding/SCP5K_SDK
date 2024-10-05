#pragma once
#include "CoreMinimal.h"
#include "ObjectiveManagerUpdatedDelegateDelegate.generated.h"

class AObjectiveManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveManagerUpdatedDelegate, AObjectiveManager*, ObjectiveManager);

