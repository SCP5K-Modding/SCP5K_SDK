#pragma once
#include "CoreMinimal.h"
#include "CheckpointUpdatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCheckpointUpdatedDelegate, FName, CheckpointID);

