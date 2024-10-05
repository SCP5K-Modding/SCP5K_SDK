#pragma once
#include "CoreMinimal.h"
#include "SpawnClass.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct FSpawnClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APawn> Class;
    
    PANDEMIC_API FSpawnClass();
};

