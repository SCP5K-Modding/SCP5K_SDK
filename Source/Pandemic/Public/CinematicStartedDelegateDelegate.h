#pragma once
#include "CoreMinimal.h"
#include "CinematicState.h"
#include "CinematicStartedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCinematicStartedDelegate, FCinematicState, State);

