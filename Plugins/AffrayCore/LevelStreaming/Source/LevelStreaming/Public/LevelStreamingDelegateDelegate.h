#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelStreamingDelegate, FName, LevelName);

