#pragma once
#include "CoreMinimal.h"
#include "LightHandleUpdatedDelegateDelegate.h"
#include "LightCacheHandle.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FLightCacheHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Subject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeleteOnZeroUsers;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightHandleUpdatedDelegate OnLightHandleUpdated;
    
    LIGHTSENSING_API FLightCacheHandle();
};

