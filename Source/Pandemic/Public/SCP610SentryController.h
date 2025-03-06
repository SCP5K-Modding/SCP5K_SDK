#pragma once
#include "CoreMinimal.h"
#include "SCP610Controller.h"
#include "SCP610SentryController.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API ASCP610SentryController : public ASCP610Controller {
    GENERATED_BODY()
public:
    ASCP610SentryController(const FObjectInitializer& ObjectInitializer);

};

