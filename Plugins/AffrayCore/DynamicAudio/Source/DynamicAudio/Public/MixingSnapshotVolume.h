#pragma once
#include "CoreMinimal.h"
#include "DynamicAudioVolume.h"
#include "MixingSnapshotVolume.generated.h"

class UFMODSnapshotReverb;

UCLASS(Blueprintable)
class DYNAMICAUDIO_API AMixingSnapshotVolume : public ADynamicAudioVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODSnapshotReverb* Snapshot;
    
public:
    AMixingSnapshotVolume(const FObjectInitializer& ObjectInitializer);

};

