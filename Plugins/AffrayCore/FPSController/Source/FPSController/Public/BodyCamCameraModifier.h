#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "Engine/Scene.h"
#include "BodyCamCameraModifier.generated.h"

UCLASS(Blueprintable)
class FPSCONTROLLER_API UBodyCamCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings CameraPostProcessSettings;
    
    UBodyCamCameraModifier();

};

