#pragma once
#include "CoreMinimal.h"
#include "AnimInteraction.generated.h"

class AActor;
class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FAnimInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* TargetAnim;
    
    ANIMATIONINTERACTIONS_API FAnimInteraction();
};

