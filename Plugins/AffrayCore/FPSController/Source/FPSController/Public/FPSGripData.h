#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FPSAttachmentData.h"
#include "FPSGripData.generated.h"

class AFPSItem;
class UAnimSequence;

UCLASS(Blueprintable)
class FPSCONTROLLER_API UFPSGripData : public UFPSAttachmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RecoilMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ADSTimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* GripPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AFPSItem>, UAnimSequence*> CustomPoseOverrides;
    
    UFPSGripData();

};

