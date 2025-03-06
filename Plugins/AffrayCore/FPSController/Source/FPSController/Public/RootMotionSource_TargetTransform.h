#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RootMotionSource_MoveToForce -FallbackName=RootMotionSource_MoveToForce
#include "RootMotionSource_TargetTransform.generated.h"

USTRUCT(BlueprintType)
struct FPSCONTROLLER_API FRootMotionSource_TargetTransform : public FRootMotionSource_MoveToForce {
    GENERATED_BODY()
public:
    FRootMotionSource_TargetTransform();
};

