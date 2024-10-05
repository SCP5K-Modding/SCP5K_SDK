#pragma once
#include "CoreMinimal.h"
#include "QuickLoadAnimation.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FQuickLoadAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmmoCount;
    
    FPSCONTROLLER_API FQuickLoadAnimation();
};

