#pragma once
#include "CoreMinimal.h"
#include "BallisticProjectileData.h"
#include "GenericGameEvent.h"
#include "GameEventWeaponFire.generated.h"

class UGameEventWeaponFire;
class UObject;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class PANDEMIC_API UGameEventWeaponFire : public UGenericGameEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBallisticProjectileData> ProjectileData;
    
    UGameEventWeaponFire();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGameEventWeaponFire* MakeGameEventWeaponFire(UObject* InInstigator, UObject* InSubject, const FGameplayTagContainer& InID, const TArray<FBallisticProjectileData>& InProjectileData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakGameEventWeaponFire(FGameplayTagContainer& OutID, UObject*& OutInstigator, TArray<FBallisticProjectileData>& OutProjectileData) const;
    
};

