#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DynamicAudioVolume.h"
#include "AmbientSoundTriggerVolume.generated.h"

class AFMODAmbientSound;
class UBillboardComponent;

UCLASS(Blueprintable)
class DYNAMICAUDIO_API AAmbientSoundTriggerVolume : public ADynamicAudioVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AFMODAmbientSound*, bool> AmbientSounds;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentReference> AudioComponents;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* SpriteComponent;
    
public:
    AAmbientSoundTriggerVolume(const FObjectInitializer& ObjectInitializer);

};

