#pragma once
#include "CoreMinimal.h"
#include "Sound/AudioVolume.h"
#include "AmbientAudioVolume.generated.h"

class UFMODEvent;

UCLASS(Blueprintable)
class DYNAMICAUDIO_API AAmbientAudioVolume : public AAudioVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VolumeIndex;
    
public:
    AAmbientAudioVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetEvent();
    
};

