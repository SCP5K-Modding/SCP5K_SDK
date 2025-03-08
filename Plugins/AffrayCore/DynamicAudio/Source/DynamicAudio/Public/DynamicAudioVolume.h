#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "DynamicAudioVolume.generated.h"

class APawn;

UCLASS(Blueprintable)
class DYNAMICAUDIO_API ADynamicAudioVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
    ADynamicAudioVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerLeftTrigger(APawn* Pawn, bool bIsLocalPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerEnteredTrigger(APawn* Pawn, bool bIsLocalPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OtherLeftTrigger(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OtherEnteredTrigger(APawn* Pawn);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerUnpossessed(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerPossessed(APawn* Pawn);
    
};

