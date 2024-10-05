#pragma once
#include "CoreMinimal.h"
#include "SAIController.h"
#include "ApparitionController.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API AApparitionController : public ASAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartingLocationKey;
    
    AApparitionController(const FObjectInitializer& ObjectInitializer);

};

