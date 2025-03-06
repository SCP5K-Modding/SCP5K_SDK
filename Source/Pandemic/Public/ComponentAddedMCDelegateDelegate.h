#pragma once
#include "CoreMinimal.h"
#include "ComponentAddedMCDelegateDelegate.generated.h"

class UActorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComponentAddedMCDelegate, UActorComponent*, AddedComponent);

