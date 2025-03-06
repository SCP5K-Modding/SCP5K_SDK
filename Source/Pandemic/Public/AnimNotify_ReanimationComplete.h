#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_ReanimationComplete.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class PANDEMIC_API UAnimNotify_ReanimationComplete : public UAnimNotify {
    GENERATED_BODY()
public:
    UAnimNotify_ReanimationComplete();

};

