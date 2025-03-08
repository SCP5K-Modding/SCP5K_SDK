#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EClimbableExitType.h"
#include "ClimbableExit.generated.h"

USTRUCT(BlueprintType)
struct FClimbableExit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClimbableExitType ExitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOptional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ExitPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    FPSCONTROLLER_API FClimbableExit();
};

