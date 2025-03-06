#pragma once
#include "CoreMinimal.h"
#include "FPSAttachmentData.h"
#include "FPSGripData.generated.h"

class UAnimSequence;
class UFPSItemData;

UCLASS(Blueprintable)
class FPSCONTROLLER_API UFPSGripData : public UFPSAttachmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* GripPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UFPSItemData>, UAnimSequence*> CustomPoseOverrides;
    
    UFPSGripData();

};

