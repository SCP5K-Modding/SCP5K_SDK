#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=ETeamAttitude -FallbackName=ETeamAttitude
#include "ESAITeam.h"
#include "TeamAttitude.generated.h"

USTRUCT(BlueprintType)
struct FTeamAttitude {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETeamAttitude::Type> DefaultRelationship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESAITeam, TEnumAsByte<ETeamAttitude::Type>> Attitudes;
    
    AISENTIENCE_API FTeamAttitude();
};

