#pragma once
#include "CoreMinimal.h"
#include "GameFramework/RootMotionSource.h"
#include "RootMotionSource_TargetTransform.generated.h"

USTRUCT(BlueprintType)
struct FPSCONTROLLER_API FRootMotionSource_TargetTransform : public FRootMotionSource_MoveToForce {
    GENERATED_BODY()
public:
    FRootMotionSource_TargetTransform();
};

