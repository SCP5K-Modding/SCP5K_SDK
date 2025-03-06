#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=FPSLoadout -FallbackName=FPSLoadout
#include "CheckpointSave.generated.h"

USTRUCT(BlueprintType)
struct FCheckpointSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFPSLoadout> Loadouts;
    
    PANDEMIC_API FCheckpointSave();
};

