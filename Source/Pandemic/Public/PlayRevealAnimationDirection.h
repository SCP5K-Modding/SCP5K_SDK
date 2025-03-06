#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AISentience -ObjectName=SAIDirection -FallbackName=SAIDirection
#include "PlayRevealAnimationDirection.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PANDEMIC_API UPlayRevealAnimationDirection : public USAIDirection {
    GENERATED_BODY()
public:
    UPlayRevealAnimationDirection();

};

