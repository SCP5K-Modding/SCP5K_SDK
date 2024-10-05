#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SquadMemberInfo.h"
#include "SAISquadInfo.generated.h"

class USAISquadComponent;

USTRUCT(BlueprintType)
struct FSAISquadInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeaderConfirmedDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SquadLeaderLastKnownPosition;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<USAISquadComponent>, FSquadMemberInfo> SquadInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastUpdateTime;
    
    AISENTIENCE_API FSAISquadInfo();
};

