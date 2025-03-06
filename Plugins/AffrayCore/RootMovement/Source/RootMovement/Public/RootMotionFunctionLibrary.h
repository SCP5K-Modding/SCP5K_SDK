#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "RootMotionFunctionLibrary.generated.h"

class UAnimMontage;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ROOTMOVEMENT_API URootMotionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URootMotionFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static FTransform GetDesiredStartLocation(UAnimMontage* Montage, USkeletalMeshComponent* Component, FTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetDesiredFinalLocation(UAnimMontage* Montage, USkeletalMeshComponent* Component, FTransform Transform);
    
};

