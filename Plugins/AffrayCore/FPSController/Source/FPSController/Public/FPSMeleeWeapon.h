#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "EMeleeAttackDirection.h"
#include "FPSWeapon.h"
#include "MeleeHitData.h"
#include "FPSMeleeWeapon.generated.h"

class AActor;
class UFMODAudioComponent;
class UFPSMeleeWeaponData;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class FPSCONTROLLER_API AFPSMeleeWeapon : public AFPSWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* AudioComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFPSMeleeWeaponData* MeleeWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TraceStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TraceEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MeleeHitData, meta=(AllowPrivateAccess=true))
    FMeleeHitData MeleeHitData;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HitActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumHits;
    
    AFPSMeleeWeapon(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateReady();
    
    UFUNCTION(BlueprintCallable)
    void TryStartReady(TEnumAsByte<EMeleeAttackDirection> Direction);
    
    UFUNCTION(BlueprintCallable)
    void TryStartAttack(TEnumAsByte<EMeleeAttackDirection> Direction);
    
    UFUNCTION(BlueprintCallable)
    void StartAttack(TEnumAsByte<EMeleeAttackDirection> Direction);
    
    UFUNCTION(BlueprintCallable)
    void SetReadyDirection(TEnumAsByte<EMeleeAttackDirection> Direction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUpdateReady(TEnumAsByte<EMeleeAttackDirection> Direction, bool bReady);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerStartAttack(TEnumAsByte<EMeleeAttackDirection> Direction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerProcessHit(FMeleeHitData Hit);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerCancelAttack(TEnumAsByte<EMeleeAttackDirection> Direction);
    
    UFUNCTION(BlueprintCallable)
    bool RunWeaponTrace(FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void Ready(TEnumAsByte<EMeleeAttackDirection> Direction);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MeleeHitData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAttackVector(TEnumAsByte<EMeleeAttackDirection> Direction) const;
    
    UFUNCTION(BlueprintCallable)
    void FlipAttackDirection(TEnumAsByte<EMeleeAttackDirection> CurrentDirection);
    
    UFUNCTION(BlueprintCallable)
    void CosmeticStartAttack(TEnumAsByte<EMeleeAttackDirection> Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticHit(TEnumAsByte<EMeleeAttackDirection> Direction, FMeleeHitData HitData);
    
    UFUNCTION(BlueprintCallable)
    void CosmeticCancelAttack(TEnumAsByte<EMeleeAttackDirection> Direction);
    
    UFUNCTION(BlueprintCallable)
    bool CancelAttack(TEnumAsByte<EMeleeAttackDirection> Direction);
    
};

