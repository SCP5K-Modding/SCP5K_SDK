#pragma once
#include "CoreMinimal.h"
#include "SCP610Controller.h"
#include "SCP610GolemController.generated.h"

class ASCP610GolemCharacter;

UCLASS(Blueprintable)
class PANDEMIC_API ASCP610GolemController : public ASCP610Controller {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SiegeRageLimitKeyName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASCP610GolemCharacter* GolemCharacter;
    
public:
    ASCP610GolemController(const FObjectInitializer& ObjectInitializer);

};

