#pragma once
#include "CoreMinimal.h"
#include "OnReplicatedLevelListLoadDelegateDelegate.generated.h"

class UReplicatedLevelLoaderComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReplicatedLevelListLoadDelegate, UReplicatedLevelLoaderComponent*, Component);

