#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EMeleeAttackDirection.h"
#include "MeleeUser.generated.h"

UINTERFACE(Blueprintable)
class UMeleeUser : public UInterface {
    GENERATED_BODY()
};

class IMeleeUser : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsBlocking(const TEnumAsByte<EMeleeAttackDirection>& Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetAttackVector(const TEnumAsByte<EMeleeAttackDirection>& Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TEnumAsByte<EMeleeAttackDirection> GetAttackDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cancel();
    
};

