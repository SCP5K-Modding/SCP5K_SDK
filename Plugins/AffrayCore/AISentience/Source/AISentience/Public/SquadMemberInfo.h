#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SquadMemberInfo.generated.h"

USTRUCT(BlueprintType)
struct FSquadMemberInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConfirmedDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastKnownPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastUpdateTime;
    
    AISENTIENCE_API FSquadMemberInfo();
};

