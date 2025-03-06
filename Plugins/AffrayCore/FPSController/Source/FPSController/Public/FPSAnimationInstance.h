#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EFireMode.h"
#include "EMeleeAttackDirection.h"
#include "Templates/SubclassOf.h"
#include "FPSAnimationInstance.generated.h"

class AFPSRangedWeapon;
class UAnimMontage;
class UDamageType;
class UFPSGripData;
class UFPSItemData;

UINTERFACE(Blueprintable)
class UFPSAnimationInstance : public UInterface {
    GENERATED_BODY()
};

class IFPSAnimationInstance : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateGrip(UFPSGripData* Data, TSubclassOf<AFPSRangedWeapon> WeaponClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupData(UFPSItemData* Data);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayVaultAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayUtilityUseAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayThrowAnimation(bool bUnderhand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayStopReloadingAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayStartReloadingAnimation(bool bEmpty);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayReloadingAnimation(bool bEmpty);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayPreFireAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayJiggleAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayInspectAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayHitAnimation(TSubclassOf<UDamageType> DamageType, FVector HitVector, FVector HitLocation, FName InBoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayGestureAnimation(UAnimMontage* Montage, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayFiringAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayFiremodeAnimation(bool bUp, EFireMode FireMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayEquipAnimation(bool bIsFirstEquip);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayEndADSAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayDryFireAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayDequipAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayDamageAnimation(FName Bone);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayCockAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayCheckAmmoAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayCancelAnimation(TEnumAsByte<EMeleeAttackDirection> Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayBreachAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayBeginADSAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayBashAnimation(bool bHit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayAttackAnimation(TEnumAsByte<EMeleeAttackDirection> Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayActionAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelReloadingAnimation();
    
};

