#pragma once
#include "CoreMinimal.h"
#include "InterruptMCDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInterruptMCDelegate, AActor*, EventInstigator);

