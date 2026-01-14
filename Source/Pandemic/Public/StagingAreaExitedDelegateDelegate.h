#pragma once
#include "CoreMinimal.h"
#include "StagingAreaExitedDelegateDelegate.generated.h"

class AWaveStagingArea;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStagingAreaExitedDelegate, AWaveStagingArea*, StagingArea);

