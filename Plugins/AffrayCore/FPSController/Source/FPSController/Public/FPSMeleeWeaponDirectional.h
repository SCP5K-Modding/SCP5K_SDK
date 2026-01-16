#pragma once
#include "CoreMinimal.h"
#include "EMeleeAttackDirection.h"
#include "FPSMeleeWeapon.h"
#include "FPSMeleeWeaponDirectional.generated.h"

UCLASS(Abstract, Blueprintable)
class FPSCONTROLLER_API AFPSMeleeWeaponDirectional : public AFPSMeleeWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMeleeAttackDirection> DesiredReadyDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMeleeAttackDirection> ReadyDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMeleeAttackDirection> LastAttackDirection;
    
public:
    AFPSMeleeWeaponDirectional(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateReady();
    
    UFUNCTION(BlueprintCallable)
    void TryStartReady(TEnumAsByte<EMeleeAttackDirection> Direction);
    
    UFUNCTION(BlueprintCallable)
    void TryStartAttack(TEnumAsByte<EMeleeAttackDirection> Direction);
    
    UFUNCTION(BlueprintCallable)
    void StartAttack(TEnumAsByte<EMeleeAttackDirection> Direction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUpdateReady(EMeleeAttackDirection Direction, bool bReady);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerStartAttack(EMeleeAttackDirection Direction);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerCancelAttack(EMeleeAttackDirection Direction);

    static void ServerCancelAttack_Implementation(EMeleeAttackDirection Direction);
    UFUNCTION(BlueprintCallable)
    void Ready(TEnumAsByte<EMeleeAttackDirection> Direction);
    
    UFUNCTION(BlueprintCallable)
    void FlipAttackDirection(TEnumAsByte<EMeleeAttackDirection> CurrentDirection);
    
    UFUNCTION(BlueprintCallable)
    void CosmeticStartAttack(TEnumAsByte<EMeleeAttackDirection> Direction);
    
    UFUNCTION(BlueprintCallable)
    void CosmeticCancelAttack(TEnumAsByte<EMeleeAttackDirection> Direction);
    
};

