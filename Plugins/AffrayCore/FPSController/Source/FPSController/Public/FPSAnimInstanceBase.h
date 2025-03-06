#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "FPSAnimationInstance.h"
#include "FPSAnimInstanceBase.generated.h"

class AFPSCharacterBase;
class AFPSItem;
class AFPSRangedWeapon;
class UFPSItemData;
class UFPSMeleeWeaponData;
class UFPSRangedWeaponData;
class UFPSThrowableData;
class UFPSUtilityItemData;
class UFPSWeaponData;

UCLASS(Blueprintable, NonTransient)
class FPSCONTROLLER_API UFPSAnimInstanceBase : public UAnimInstance, public IFPSAnimationInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFPSCharacterBase* FPSCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFPSItemData* ItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFPSWeaponData* WeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFPSThrowableData* ThrowableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFPSMeleeWeaponData* MeleeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFPSUtilityItemData* UtilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFPSRangedWeaponData* RangedWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasEquippedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFPSItem* CurrentItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFPSRangedWeapon* CurrentRangedWeapon;
    
public:
    UFPSAnimInstanceBase();


    // Fix for true pure virtual functions not being implemented
};

