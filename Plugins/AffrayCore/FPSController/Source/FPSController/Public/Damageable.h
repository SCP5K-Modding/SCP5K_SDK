#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "Templates/SubclassOf.h"
#include "Damageable.generated.h"

class APawn;
class UDamageType;

UINTERFACE(Blueprintable, MinimalAPI)
class UDamageable : public UInterface {
    GENERATED_BODY()
};

class IDamageable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsPermenantlyDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyCosmeticDamage(float Amount, APawn* InstigatorPawn, TSubclassOf<UDamageType> DamageClass);
    
};

