#pragma once
#include "CoreMinimal.h"
#include "FMODAudioComponent.h"
#include "DoorSoundData.generated.h"

class UFMODEvent;

USTRUCT(BlueprintType)
struct PANDEMIC_API FDoorSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* SoundToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldStopWhenAttachedDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFMODOcclusionDetails FollowOcclusionDetails;
    
    FDoorSoundData();
};

