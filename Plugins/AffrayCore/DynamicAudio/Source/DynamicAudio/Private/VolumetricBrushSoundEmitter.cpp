#include "VolumetricBrushSoundEmitter.h"
#include "FMODAudioComponent.h"

AVolumetricBrushSoundEmitter::AVolumetricBrushSoundEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VolumetricEmitter = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("VolumetricEmitter"));
    this->VolumetricEvent = NULL;
    this->bRotateEmitterWithPlayer = true;
    this->ScatterGridDensity = 150.00f;
    this->bAutoPostVolumetric = true;
    this->bAutoPostScatter = true;
    this->bSetLazyUpdateDistanceAutomatically = true;
    this->LazyUpdateDistance = 5000.00f;
    this->LazyUpdateRate = 0.80f;
    this->VolumetricEmitter->SetupAttachment(RootComponent);
}

void AVolumetricBrushSoundEmitter::UpdateTickState() {
}

void AVolumetricBrushSoundEmitter::TrySpawnScatteredSound() {
}

void AVolumetricBrushSoundEmitter::StopVolumetricSound() {
}

void AVolumetricBrushSoundEmitter::StopScatteredSounds() {
}

void AVolumetricBrushSoundEmitter::StartVolumetricSound() {
}

void AVolumetricBrushSoundEmitter::StartScatteredSounds() {
}

UFMODAudioComponent* AVolumetricBrushSoundEmitter::GetVolumetricEmitter() const {
    return NULL;
}

TArray<UFMODAudioComponent*> AVolumetricBrushSoundEmitter::GetScatterEmitters() const {
    return TArray<UFMODAudioComponent*>();
}

void AVolumetricBrushSoundEmitter::GenerateSourcePointGrid() {
}

void AVolumetricBrushSoundEmitter::BreakScatteredSounds() {
}


