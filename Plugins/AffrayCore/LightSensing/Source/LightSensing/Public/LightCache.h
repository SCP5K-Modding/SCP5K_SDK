#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LightCache.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FLightCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Light;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialTime;
    
    LIGHTSENSING_API FLightCache();
};

