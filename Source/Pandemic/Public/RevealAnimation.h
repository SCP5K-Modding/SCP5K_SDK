#pragma once
#include "CoreMinimal.h"
#include "RevealAnimation.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FRevealAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFirstFrameOfRevealAsLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* RevealSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* PreRevealLoopSequence;
    
    PANDEMIC_API FRevealAnimation();
};

