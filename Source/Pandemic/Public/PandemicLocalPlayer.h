#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayer -FallbackName=LocalPlayer
#include "PandemicLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class PANDEMIC_API UPandemicLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UPandemicLocalPlayer();

};

