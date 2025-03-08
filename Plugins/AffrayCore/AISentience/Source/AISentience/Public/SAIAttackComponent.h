#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "OnAttackEventMulticastDelegateDelegate.h"
#include "SAIAttackComponent.generated.h"

class AActor;
class ACharacter;
class APawn;
class UAnimSequenceBase;
class USAIAttack;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AISENTIENCE_API USAIAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USAIAttack*> Attacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<uint8> ActiveAttacks;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackEventMulticastDelegate OnAttackStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackEventMulticastDelegate OnAttackFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackEventMulticastDelegate OnAttackCanceled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> PawnOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ACharacter> CharacterOwner;
    
public:
    USAIAttackComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartAttack(uint8 AttackIndex, const AActor* Target, const FVector& TargetLocation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerFinishAttack(uint8 AttackIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCancelAttack(uint8 AttackIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCancelAllAttacks();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStartAttack(uint8 AttackIndex, const AActor* Target, const FVector& TargetLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastFinishAttack(uint8 AttackIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCancelAttack(uint8 AttackIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidAttackIndex(uint8 AttackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<uint8> GetUsableAttacks(AActor* TargetActor, bool bIncludeManualAttacks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetPawnOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetCharacterOwner() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishAttackWithAnimation(UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable)
    void FinishAttack(USAIAttack* Attack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 FindBestAttack(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 FindAttackIndex(const FGameplayTag& DesiredAttack);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EndAttackRegion(UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseAnyAttacksIfStopped(AActor* TargetActor, bool bIncludeManualAttacks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseAnyAttacks(AActor* TargetActor, bool bIncludeManualAttacks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAttack() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BeginAttackRegion(float TotalDuration, UAnimSequenceBase* Animation);
    
};

