#pragma once
#include "CoreMinimal.h"
#include "SAIController.h"
#include "SoldierController.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API ASoldierController : public ASAIController {
    GENERATED_BODY()
public:
    ASoldierController(const FObjectInitializer& ObjectInitializer);

};

