#pragma once
#include "CoreMinimal.h"
#include "BallisticHitData.h"
#include "BallisticProjectileData.generated.h"

USTRUCT(BlueprintType)
struct FBallisticProjectileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBallisticHitData> Hits;
    
    FPSCONTROLLER_API FBallisticProjectileData();
};

