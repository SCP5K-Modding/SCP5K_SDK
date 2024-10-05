#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
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
    void ServerUpdateReady(EMeleeAttackDirection Direction, bool bReady);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerStartAttack(EMeleeAttackDirection Direction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerProcessHit(FMeleeHitData Hit);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerCancelAttack(EMeleeAttackDirection Direction);
    
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
    void CosmeticHit(EMeleeAttackDirection Direction, FMeleeHitData HitData);
    
    UFUNCTION(BlueprintCallable)
    void CosmeticCancelAttack(TEnumAsByte<EMeleeAttackDirection> Direction);
    
    UFUNCTION(BlueprintCallable)
    bool CancelAttack(TEnumAsByte<EMeleeAttackDirection> Direction);
    
};

