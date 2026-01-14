#pragma once
#include "CoreMinimal.h"
#include "GlobalGameEventDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGlobalGameEventDelegate, const UObject*, Instigator, const UObject*, Subject);

