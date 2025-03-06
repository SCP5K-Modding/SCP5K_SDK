#pragma once
#include "CoreMinimal.h"
#include "OnRevealAnimationFinishedMCDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRevealAnimationFinishedMCDelegate, bool, bInterrupted);

