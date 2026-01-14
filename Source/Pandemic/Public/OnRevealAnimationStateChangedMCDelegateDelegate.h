#pragma once
#include "CoreMinimal.h"
#include "ERevealState.h"
#include "OnRevealAnimationStateChangedMCDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRevealAnimationStateChangedMCDelegate, ERevealState, NewState, ERevealState, PreviousState);

