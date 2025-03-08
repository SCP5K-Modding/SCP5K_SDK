#pragma once
#include "CoreMinimal.h"
#include "FPSLoadout.h"
#include "CheckpointSave.generated.h"

USTRUCT(BlueprintType)
struct FCheckpointSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFPSLoadout> Loadouts;
    
    PANDEMIC_API FCheckpointSave();
};

