#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SimpleHitData.h"
#include "DamageReactionInfo.h"
#include "HitAnimCriteria.h"
#include "HitReactionData.h"
#include "Templates/SubclassOf.h"
#include "HitReactionComponent.generated.h"

class ACharacter;
class UAnimMontage;
class UDamageType;
class UHealthComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UHitReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStaggered);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHitReactionUpdated, FHitReactionData, ReactionData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitReactionUpdated OnHitReactionUpdatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStaggered OnStaggeredDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacter* OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LastHitReactionData, meta=(AllowPrivateAccess=true))
    FHitReactionData LastHitReactionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontQuadrantMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontQuadrantMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftQuadrantMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftQuadrantMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackQuadrantMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackQuadrantMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightQuadrantMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightQuadrantMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UDamageType>, FDamageReactionInfo> PossibleDamageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UAnimMontage*, FHitAnimCriteria> AnimationsToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> NonStaggerableMontages;
    
public:
    UHitReactionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool TryUpdateHitReactionData(const FSimpleHitData& HitData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopStagger();
    
    UFUNCTION(BlueprintCallable)
    void StopHitReaction();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetOwningSkeletalComponent(USkeletalMeshComponent* SkeletalComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetOwningCharacter(ACharacter* Owner);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetLastHitReactionData(FHitReactionData NewData);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayStagger(FHitReactionData ReactionData);
    
    UFUNCTION(BlueprintCallable)
    void PlayHitReaction(FHitReactionData ReactionData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_LastHitReactionData();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHit(UHealthComponent* HealthComponent, FSimpleHitData HitData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetOwningSkeletalComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetOwningCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHitReactionData GetLastHitReactionData() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearDamageAccumulation(TSubclassOf<UDamageType> DamageType);
    
};

