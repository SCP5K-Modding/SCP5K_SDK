#pragma once
#include "CoreMinimal.h"
#include "OnAssetsLoadedDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAssetsLoadedDelegate, const TArray<TSoftObjectPtr<UObject>>&, Classes);

