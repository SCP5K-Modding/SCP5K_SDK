#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Damageable.h"
#include "MeleeUser.h"
#include "Suppressable.h"
#include "HungerInterface.h"
#include "InterruptibleAnimator.h"
#include "RevealAnimator.h"
#include "SCP098MeleeHitDataMCDelegateDelegate.h"
#include "SCP098.generated.h"

class AActor;
class AController;
class ASCP098AIController;
class UAnimMontage;
class UAnimSequence;
class UDamageType;
class UFMODAudioComponent;
class UFMODEvent;
class UInterruptibleAnimComponent;
class USAIMeleeComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ASCP098 : public ACharacter, public ISuppressable, public IDamageable, public IMeleeUser, public IInterruptibleAnimator, public IRevealAnimator, public IHungerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCP098MeleeHitDataMCDelegate SCP098AttackRequestedMCDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCP098MeleeHitDataMCDelegate SCP098AttackMCDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASCP098AIController* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USAIMeleeComponent* MeleeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInterruptibleAnimComponent* InterruptibleAnimComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> RevealAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsDead, meta=(AllowPrivateAccess=true))
    bool bIsDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsAlert, meta=(AllowPrivateAccess=true))
    bool bIsAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentHealth, meta=(AllowPrivateAccess=true))
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Eating, meta=(AllowPrivateAccess=true))
    bool bEating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InCorner, meta=(AllowPrivateAccess=true))
    bool bInCorner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AlertSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* IdleSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> DamageMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageDelay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bInitializedRevealAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* IdleAudioComponent;
    
public:
    ASCP098(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetInCorner(bool bNewInCorner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetEating(bool bNewEating);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAlert(bool bNewAlert);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_IsDead();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_IsAlert();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_InCorner();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Eating();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CurrentHealth();
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StopRevealAnimation();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_SetRevealAnimation(UAnimSequence* RevealAnimation);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void Die(AActor* Causer, AController* InstigatedBy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticDie();
    

    // Fix for true pure virtual functions not being implemented
};

