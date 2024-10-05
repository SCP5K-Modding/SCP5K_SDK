#pragma once
#include "CoreMinimal.h"
#include "FPSAttachment.h"
#include "FPSFlashlight.generated.h"

UCLASS(Blueprintable)
class FPSCONTROLLER_API AFPSFlashlight : public AFPSAttachment {
    GENERATED_BODY()
public:
    AFPSFlashlight(const FObjectInitializer& ObjectInitializer);

};

