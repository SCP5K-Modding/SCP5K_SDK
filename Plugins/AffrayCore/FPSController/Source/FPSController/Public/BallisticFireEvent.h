#pragma once
#include "CoreMinimal.h"
#include "BallisticProjectileData.h"
#include "BallisticFireEvent.generated.h"

USTRUCT(BlueprintType)
struct FBallisticFireEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerFireTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBallisticProjectileData> Projectiles;
    
    FPSCONTROLLER_API FBallisticFireEvent();
};

