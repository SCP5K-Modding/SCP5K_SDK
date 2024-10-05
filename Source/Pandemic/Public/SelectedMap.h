#pragma once
#include "CoreMinimal.h"
#include "SelectedMap.generated.h"

class AGameModeBase;

USTRUCT(BlueprintType)
struct FSelectedMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGameModeBase> OverrideGameMode;
    
    PANDEMIC_API FSelectedMap();
};

