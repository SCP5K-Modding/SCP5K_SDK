#pragma once
#include "CoreMinimal.h"
#include "EVideoSetting.generated.h"

UENUM(BlueprintType)
enum class EVideoSetting : uint8 {
    ReflexMode,
    UpscalerMode,
    UpscalerQuality,
    EnableDepthOfField,
    EnableMotionBlur,
    EnablePaniniProjection,
    PaniniProjectionAmount,
    Brightness,
    FieldOfView,
    ScalabilitySettings,
    ResolutionScale,
    EnableSSGI,
    EnableUpscalerAutoExposure,
};

