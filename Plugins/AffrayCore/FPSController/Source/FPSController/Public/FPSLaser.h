#pragma once
#include "CoreMinimal.h"
#include "FPSAttachment.h"
#include "FPSLaser.generated.h"

UCLASS(Blueprintable)
class FPSCONTROLLER_API AFPSLaser : public AFPSAttachment {
    GENERATED_BODY()
public:
    AFPSLaser(const FObjectInitializer& ObjectInitializer);

};

