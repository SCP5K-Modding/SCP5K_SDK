#pragma once
#include "CoreMinimal.h"
#include "OnChallengeFailedDelegateDelegate.generated.h"

class APlayerChallenge;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChallengeFailedDelegate, const APlayerChallenge*, Challenge);

