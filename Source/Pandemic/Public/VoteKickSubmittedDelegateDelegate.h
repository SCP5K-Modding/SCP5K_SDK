#pragma once
#include "CoreMinimal.h"
#include "VoteKickSubmittedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVoteKickSubmittedDelegate, bool, bIsVoteKickSuccessful, const FString&, KickedPlayerName);

