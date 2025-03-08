#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MotionWarpingTarget.generated.h"

USTRUCT(BlueprintType)
struct FMotionWarpingTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReferenceBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ReferenceTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReferenceFrame;
    
    ROOTMOVEMENT_API FMotionWarpingTarget();
};

