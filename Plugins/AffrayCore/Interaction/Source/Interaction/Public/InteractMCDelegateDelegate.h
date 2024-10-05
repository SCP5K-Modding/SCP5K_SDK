#pragma once
#include "CoreMinimal.h"
#include "InteractMCDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractMCDelegate, AActor*, EventInstigator);

