#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "VolumetricSoundEmitter.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UVolumetricSoundEmitter : public UInterface {
    GENERATED_BODY()
};

class IVolumetricSoundEmitter : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION()
    virtual void UpdateTickState() PURE_VIRTUAL(UpdateTickState,);
    
    UFUNCTION()
    virtual void TrySpawnScatteredSound() PURE_VIRTUAL(TrySpawnScatteredSound,);
    
public:
    UFUNCTION(BlueprintCallable)
    virtual void StopVolumetricSound() PURE_VIRTUAL(StopVolumetricSound,);
    
    UFUNCTION(BlueprintCallable)
    virtual void StopScatteredSounds() PURE_VIRTUAL(StopScatteredSounds,);
    
    UFUNCTION(BlueprintCallable)
    virtual void StartVolumetricSound() PURE_VIRTUAL(StartVolumetricSound,);
    
    UFUNCTION(BlueprintCallable)
    virtual void StartScatteredSounds() PURE_VIRTUAL(StartScatteredSounds,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BreakScatteredSounds() PURE_VIRTUAL(BreakScatteredSounds,);
    
};

