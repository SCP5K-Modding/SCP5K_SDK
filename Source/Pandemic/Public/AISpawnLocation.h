#pragma once
#include "CoreMinimal.h"
#include "AISpawnLocationComponent.h"
#include "AnimInteraction.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "AISpawnLocation.generated.h"

class APawn;

UCLASS(Blueprintable)
class PANDEMIC_API AAISpawnLocation : public AActor {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideActivationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationRadius;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneUse;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAISpawnLocationComponent* SpawnLocationComponent;
    
public:
    AAISpawnLocation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void CopyPropertiesToComponent();
    
};

