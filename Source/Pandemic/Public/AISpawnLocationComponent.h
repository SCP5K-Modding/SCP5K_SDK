#pragma once
#include "CoreMinimal.h"
#include "AnimInteraction.h"
#include "Components/SceneComponent.h"
#include "GameplayTagContainer.h"
#include "RevealConditions.h"
#include "AISpawnLocationComponent.generated.h"

class APawn;
class URevealAnimationComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UAISpawnLocationComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RevealAnimationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FAnimInteraction> AnimationInteractions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<APawn>> AllowedClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSubclasses;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideActivationRadius;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideRevealCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRevealConditions RevealCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneUse;
    
    UAISpawnLocationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsClass(const TSoftClassPtr<APawn>& Class) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnLocationUsed(APawn* Pawn, URevealAnimationComponent* RevealAnimation);
    
    UFUNCTION(BlueprintCallable)
    void RevealAnimationFinished(bool bInterrupted);
    
};

