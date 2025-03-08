#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "Engine/Scene.h"
#include "GenericCameraModifier.generated.h"

UCLASS(Blueprintable)
class FPSCONTROLLER_API UGenericCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings CameraPostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOVOffset;
    
    UGenericCameraModifier();

};

