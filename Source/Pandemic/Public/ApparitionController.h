#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AISentience -ObjectName=SAIController -FallbackName=SAIController
#include "ApparitionController.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API AApparitionController : public ASAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartingLocationKey;
    
    AApparitionController(const FObjectInitializer& ObjectInitializer);

};

