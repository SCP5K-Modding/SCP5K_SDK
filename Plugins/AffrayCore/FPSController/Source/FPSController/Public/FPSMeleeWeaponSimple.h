#pragma once
#include "CoreMinimal.h"
#include "ESimpleMeleeWeaponAttackType.h"
#include "FPSMeleeWeapon.h"
#include "FPSMeleeWeaponSimple.generated.h"

class UAnimNotifyState_MeleeTiming;

UCLASS(Blueprintable)
class FPSCONTROLLER_API AFPSMeleeWeaponSimple : public AFPSMeleeWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUseNextAttackEarly;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentAttackIndex;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextAttackIndex;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESimpleMeleeWeaponAttackType CurrentAttackType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyDamage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<UAnimNotifyState_MeleeTiming>> ActiveEarlyAttackRegions;
    
public:
    AFPSMeleeWeaponSimple(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerTryStartAttack(ESimpleMeleeWeaponAttackType AttackType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStartAttack(ESimpleMeleeWeaponAttackType AttackType, int32 AttackIndex, bool bEarlyStart);
    
};

