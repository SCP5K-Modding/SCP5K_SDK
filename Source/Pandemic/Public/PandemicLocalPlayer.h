#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "PandemicLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class PANDEMIC_API UPandemicLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UPandemicLocalPlayer();

};

