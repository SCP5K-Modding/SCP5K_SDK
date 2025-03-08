#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
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
    EMeleeAttackDirection GetAttackDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cancel();
    
};

