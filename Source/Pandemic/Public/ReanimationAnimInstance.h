#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Animation/PoseSnapshot.h"
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

