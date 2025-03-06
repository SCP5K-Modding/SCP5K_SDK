#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraModifier -FallbackName=CameraModifier
#include "SettingsCameraModifier.generated.h"

UCLASS(Blueprintable)
class GAMEUTILITIES_API USettingsCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    USettingsCameraModifier();

};

