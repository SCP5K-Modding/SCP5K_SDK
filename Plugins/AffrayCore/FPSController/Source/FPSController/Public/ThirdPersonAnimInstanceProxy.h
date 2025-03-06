#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstanceProxy -FallbackName=AnimInstanceProxy
#include "ThirdPersonAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FThirdPersonAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FPSCONTROLLER_API FThirdPersonAnimInstanceProxy();
};

