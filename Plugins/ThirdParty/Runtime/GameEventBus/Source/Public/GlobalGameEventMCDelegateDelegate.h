#pragma once
#include "CoreMinimal.h"
#include "GlobalGameEventMCDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGlobalGameEventMCDelegate, const UObject*, Instigator, const UObject*, Subject);

