#pragma once
#include "CoreMinimal.h"
#include "EStreamingState.h"
#include "LevelStreamingInfo.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct LEVELSTREAMING_API FLevelStreamingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStreamingState StreamingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockOnLoad;
    
    FLevelStreamingInfo();
};

