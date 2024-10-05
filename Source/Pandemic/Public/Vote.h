#pragma once
#include "CoreMinimal.h"
#include "EVoteType.h"
#include "UniqueVote.h"
#include "Vote.generated.h"

USTRUCT(BlueprintType)
struct FVote {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoteType VoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUniqueVote> Votes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Participants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndWhenAllVoted;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 StartTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 EndTime;
    
    PANDEMIC_API FVote();
};

