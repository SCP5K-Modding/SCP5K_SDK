#pragma once
#include "CoreMinimal.h"
#include "SAIDirection.h"
#include "GameplayTagContainer.h"
#include "SetRevealAnimationDirection.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PANDEMIC_API USetRevealAnimationDirection : public USAIDirection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnimationTag;
    
    USetRevealAnimationDirection();

};

