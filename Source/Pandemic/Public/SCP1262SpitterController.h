#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AISentience -ObjectName=SAIController -FallbackName=SAIController
#include "SCP1262SpitterController.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API ASCP1262SpitterController : public ASAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAheadFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAheadProjectileVelocity;
    
    ASCP1262SpitterController(const FObjectInitializer& ObjectInitializer);

};

