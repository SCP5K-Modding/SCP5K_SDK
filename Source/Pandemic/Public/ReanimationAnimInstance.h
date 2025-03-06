#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseSnapshot -FallbackName=PoseSnapshot
#include "ReanimationAnimInstance.generated.h"

UINTERFACE(Blueprintable)
class UReanimationAnimInstance : public UInterface {
    GENERATED_BODY()
};

class IReanimationAnimInstance : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRagdollSnapshot(const FPoseSnapshot& Snapshot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsReanimating(bool bNewIsReanimating);
    
};

