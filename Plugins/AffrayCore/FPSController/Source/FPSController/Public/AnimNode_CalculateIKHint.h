#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "AnimNode_CalculateIKHint.generated.h"

USTRUCT(BlueprintType)
struct FPSCONTROLLER_API FAnimNode_CalculateIKHint : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HintDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference BoneToModify;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference TopBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference MiddleBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference EndBone;
    
    FAnimNode_CalculateIKHint();
};

