#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PandemicWorldSetting.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PANDEMIC_API UPandemicWorldSetting : public UObject {
    GENERATED_BODY()
public:
    UPandemicWorldSetting();

};

