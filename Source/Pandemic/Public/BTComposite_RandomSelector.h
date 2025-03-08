#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "BTComposite_RandomSelector.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UBTComposite_RandomSelector : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UBTComposite_RandomSelector();

};

