#pragma once
#include "CoreMinimal.h"
#include "OnMissionItemUpdatedDelegateDelegate.generated.h"

class UMissionItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionItemUpdatedDelegate, UMissionItem*, Item);

