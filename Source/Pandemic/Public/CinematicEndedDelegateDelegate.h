#pragma once
#include "CoreMinimal.h"
#include "CinematicState.h"
#include "CinematicEndedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCinematicEndedDelegate, FCinematicState, State, bool, bWasSkipped);

