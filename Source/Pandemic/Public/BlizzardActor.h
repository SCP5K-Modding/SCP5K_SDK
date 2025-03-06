#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=FPSSlowVolumeConfig -FallbackName=FPSSlowVolumeConfig
#include "Templates/SubclassOf.h"
#include "BlizzardActor.generated.h"

class AFPSPhysicsVolume;
class UActorComponent;
class UDamageType;
class UWeatherExclusionComponent;

UCLASS(Blueprintable)
class ABlizzardActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplySlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SetApplySlow, meta=(AllowPrivateAccess=true))
    bool bActivelySlowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFPSSlowVolumeConfig SlowConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MildPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntensePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageFrequency;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFPSPhysicsVolume* PhysicsVolume;
    
public:
    ABlizzardActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StopBlizzard();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StartBlizzard();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetApplySlow(bool bInApplySlow);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopBlizzardFX();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopBlizzard();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartBlizzardFX();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartBlizzard();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SetApplySlow();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnExcludedActorRemoved(UWeatherExclusionComponent* Component, AActor* OldActor);
    
    UFUNCTION(BlueprintCallable)
    void OnExcludedActorAdded(UWeatherExclusionComponent* Component, AActor* NewActor);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentAddedToComponentRegistry(UActorComponent* NewComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnActorSpawned(AActor* SpawnedActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_StopBlizzardFX();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_StopBlizzard();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_StartBlizzardFX();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_StartBlizzard();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DamageActors();
    
};

