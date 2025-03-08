#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SimpleHitData.h"
#include "SignificanceUser.h"
#include "SCP621Flower.generated.h"

class UFMODAudioComponent;
class UFMODEvent;
class UHealthComponent;
class USignificanceComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ASCP621Flower : public AActor, public ISignificanceUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsOpen, meta=(AllowPrivateAccess=true))
    bool bIsOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AudioFlowerOpenEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AudioFlowerCloseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AudioFlowerHitEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AudioFlowerPainEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AudioFlowerLoopingOpenEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSignificanceForAnimation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* LoopingAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignificanceComponent* SignificanceComponent;
    
public:
    ASCP621Flower(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Open();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsOpen();
    
public:
    UFUNCTION(BlueprintCallable)
    void HealthComponentDied(UHealthComponent* InHealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void HealthComponentDamaged(UHealthComponent* InHealthComponent, FSimpleHitData HitData);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void CosmeticOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void CosmeticClose();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Close();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void ApplySignificance(USignificanceComponent* Component, float NewSignificance, float OldSignificance) override PURE_VIRTUAL(ApplySignificance,);
    
};

