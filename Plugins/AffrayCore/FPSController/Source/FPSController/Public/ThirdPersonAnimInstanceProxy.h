#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "ThirdPersonAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FThirdPersonAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FPSCONTROLLER_API FThirdPersonAnimInstanceProxy();
};

