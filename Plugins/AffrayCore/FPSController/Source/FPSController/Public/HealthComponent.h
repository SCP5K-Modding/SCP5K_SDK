#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "SimpleHitData.h"
#include "HealthComponent.generated.h"

class AActor;
class AController;
class UDamageType;
class UHealthComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FPSCONTROLLER_API UHealthComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthComponentRevivedDelegate, UHealthComponent*, HealthComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthComponentHealthChangedDelegate, UHealthComponent*, HealthComponent, float, Health);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthComponentDiedDelegate, UHealthComponent*, HealthComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthComponentDamagedDelegate, UHealthComponent*, HealthComponent, FSimpleHitData, HitData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealthComponentDamagedDelegate OnDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealthComponentDiedDelegate OnDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealthComponentRevivedDelegate OnRevived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealthComponentHealthChangedDelegate OnHealthChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentHealth, meta=(AllowPrivateAccess=true))
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealthPlayerMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsDead, meta=(AllowPrivateAccess=true))
    bool bIsDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LastHit, meta=(AllowPrivateAccess=true))
    FSimpleHitData LastHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> BoneDamageMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDamageMultiplier;
    
public:
    UHealthComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHealth(float NewHealth, AController* InstigatedBy, AActor* DamageCauser, bool bCheckDeath);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Revive();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Reset();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_LastHit();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentHealth();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsDead();
    
    UFUNCTION(BlueprintCallable)
    void OnRadialDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, FVector Origin, FHitResult HitInfo, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnPointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(AActor* DamagedActor, float Damage, const UDamageType* RecievingDamageType, AController* InstigatedBy, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FSimpleHitData GetLastHit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHealth() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Die(AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool CheckDeath(AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddHealth(float HealthDelta, AController* InstigatedBy, AActor* DamageCauser, bool bCheckDeath);
    
};

