#pragma once
#include "CoreMinimal.h"
#include "ChamberChallengeCounters.generated.h"

USTRUCT(BlueprintType)
struct FChamberChallengeCounters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveChallengesCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompletedChallengesCount;
    
    PANDEMIC_API FChamberChallengeCounters();
};

