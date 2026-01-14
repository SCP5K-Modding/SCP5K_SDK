#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AnimInteraction.h"
#include "AnimInteractionRepl.h"
#include "AnimInteractionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ANIMATIONINTERACTIONS_API UAnimInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FAnimInteraction> Interactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedInteractions, meta=(AllowPrivateAccess=true))
    TArray<FAnimInteractionRepl> ReplicatedInteractions;
    
public:
    UAnimInteractionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetInteractions(const TMap<FGameplayTag, FAnimInteraction>& InInteractions);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedInteractions();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInteraction(FGameplayTag AnimationTag, FAnimInteraction& OutInteraction) const;
    
};

