#pragma once
#include "CoreMinimal.h"
#include "EStaggerDirection.h"
#include "ReanimationData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct PANDEMIC_API FReanimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimationToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStaggerDirection DesiredRagdollRotationDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RequirementsMetScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RagdollRotationRequirementWeight;
    
    FReanimationData();
};

