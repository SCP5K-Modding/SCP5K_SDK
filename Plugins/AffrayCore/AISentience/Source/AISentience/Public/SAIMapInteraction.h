#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AIInteractionAnimations.h"
#include "SAIMapInteraction.generated.h"

class UBoxComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AISENTIENCE_API ASAIMapInteraction : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MapInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* InteractionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIInteractionAnimations InteractionAnims;
    
public:
    ASAIMapInteraction(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAIInteractionAnimations GetInteractionAnims() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChanceToInteract() const;
    
};

