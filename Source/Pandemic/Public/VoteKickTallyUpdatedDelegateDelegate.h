#pragma once
#include "CoreMinimal.h"
#include "VoteKickTallyUpdatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVoteKickTallyUpdatedDelegate, int32, NoVoteTally, int32, YesVoteTally);

