#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "BTDecorator_Distance.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UBTDecorator_Distance : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UBTDecorator_Distance();

};

