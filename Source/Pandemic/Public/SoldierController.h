#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AISentience -ObjectName=SAIController -FallbackName=SAIController
#include "SoldierController.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API ASoldierController : public ASAIController {
    GENERATED_BODY()
public:
    ASoldierController(const FObjectInitializer& ObjectInitializer);

};

