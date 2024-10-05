#pragma once
#include "CoreMinimal.h"
#include "TeamDataUpdatedDelegate.h"
#include "TeamData.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FTeamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Score;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeamDataUpdated OnScoreUpdated;
    
    PANDEMIC_API FTeamData();
};

