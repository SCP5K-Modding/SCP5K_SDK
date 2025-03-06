#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AttackRequirements.h"
#include "Templates/SubclassOf.h"
#include "SAIAttack.generated.h"

class AActor;
class UAnimMontage;
class UDamageType;
class USAIAttackComponent;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew, HideDropdown)
class AISENTIENCE_API USAIAttack : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USAIAttackComponent* OwningComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceAttackStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastFinishedAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttackLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackRegionStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackRegionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInAttackRegion;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDamageFriendlies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackRequirements AttackRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelOnMontageInterrupt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelOnReceiveDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisablePathfindingDuringAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCalculateAttackLocationPerRegion;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartInAttackRegion;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFinishAttackTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinishAttackTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeadAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeadTime;
    
    USAIAttack();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldTick(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ServerTickAttack(USAIAttackComponent* Component, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ServerStartAttack(USAIAttackComponent* Component, const AActor* Target, const FVector& TargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ServerInitAttack(USAIAttackComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ServerFinishAttack(USAIAttackComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ServerEndAttackRegion();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ServerCancelAttack(USAIAttackComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ServerBeginAttackRegion(float TotalDuration);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAuthority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetSourceLocation(const USAIAttackComponent* Component, const AActor* TargetActor, int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USAIAttackComponent* GetOwningComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetAttackScore(USAIAttackComponent* Component, AActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAttackRequirements GetAttackRequirements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttackRegionTimeElapsed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttackRegionFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DrawAttackDebug(USAIAttackComponent* Component, AActor* TargetActor, float DrawTime, bool bPersistent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClientTickAttack(USAIAttackComponent* Component, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClientStartAttack(const USAIAttackComponent* Component, const AActor* Target, const FVector& TargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClientInitAttack(USAIAttackComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClientFinishAttack(USAIAttackComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClientEndAttackRegion();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClientCancelAttack(USAIAttackComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClientBeginAttackRegion(float TotalDuration);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUseAttackTargetingLocation(USAIAttackComponent* Component, const FVector& TargetLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUseAttackIfStopped(const USAIAttackComponent* Component, const AActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUseAttack(const USAIAttackComponent* Component, const AActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanDamage(AActor* Target) const;
    
};

