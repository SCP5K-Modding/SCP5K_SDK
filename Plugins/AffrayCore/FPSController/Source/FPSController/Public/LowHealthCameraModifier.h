#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "LowHealthCameraModifier.generated.h"

UCLASS(Blueprintable)
class FPSCONTROLLER_API ULowHealthCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    ULowHealthCameraModifier();

};

