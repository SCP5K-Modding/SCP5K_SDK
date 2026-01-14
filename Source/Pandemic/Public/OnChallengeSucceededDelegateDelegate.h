#pragma once
#include "CoreMinimal.h"
#include "OnChallengeSucceededDelegateDelegate.generated.h"

class APlayerChallenge;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChallengeSucceededDelegate, const APlayerChallenge*, Challenge);

