#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "GameplayTagContainer.h"
#include "StoryletActivationAction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STORYLETS_API UStoryletActivationAction : public UGameAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ToDeactivate;
    
public:
    UStoryletActivationAction();

};

