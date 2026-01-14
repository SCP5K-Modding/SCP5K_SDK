#pragma once
#include "CoreMinimal.h"
#include "VoteKickStartedDelegateDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FVoteKickStartedDelegate, const APlayerState*, InitiatingPlayer, const APlayerState*, PlayerToKick, const FString&, VoteKickReason);

