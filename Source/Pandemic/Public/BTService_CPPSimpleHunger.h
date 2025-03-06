#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService -FallbackName=BTService
#include "BTService_CPPSimpleHunger.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UBTService_CPPSimpleHunger : public UBTService {
    GENERATED_BODY()
public:
    UBTService_CPPSimpleHunger();

};

