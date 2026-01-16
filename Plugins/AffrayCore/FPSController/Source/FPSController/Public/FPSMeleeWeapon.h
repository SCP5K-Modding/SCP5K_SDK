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

UCLASS(Blueprintable)
class FPSCONTROLLER_API AFPSMeleeWeapon : public AFPSWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TraceStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TraceEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFPSMeleeWeaponData* MeleeWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MeleeHitData, meta=(AllowPrivateAccess=true))
    FMeleeHitData MeleeHitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HitActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumHits;
    
public:
    AFPSMeleeWeapon(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerProcessHit(FMeleeHitData Hit);
    
    UFUNCTION(BlueprintCallable)
    bool RunWeaponTrace(FHitResult& Hit);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MeleeHitData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageForHit(FMeleeHitData Hit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAttackVector(const FMeleeHitData& Hit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticHit(EMeleeAttackDirection Direction, FMeleeHitData HitData);
    
};

