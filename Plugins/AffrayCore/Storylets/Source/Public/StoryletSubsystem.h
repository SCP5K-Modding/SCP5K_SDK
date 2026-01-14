#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "StoryletLevelDefinition.h"
#include "StoryletSubsystem.generated.h"

class UObjective;

UCLASS(Blueprintable)
class STORYLETS_API UStoryletSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UStoryletSubsystem();

    UFUNCTION(BlueprintCallable)
    void ObjectiveCompleted(UObjective* Objective, bool bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    void LoadDefinition(const FStoryletLevelDefinition& Definition);
    
};

