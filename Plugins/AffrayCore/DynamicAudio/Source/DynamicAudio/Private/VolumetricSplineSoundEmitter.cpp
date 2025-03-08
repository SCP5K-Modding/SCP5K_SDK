#include "VolumetricSplineSoundEmitter.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "FMODAudioComponent.h"

AVolumetricSplineSoundEmitter::AVolumetricSplineSoundEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ActorRoot = (USceneComponent*)RootComponent;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->VolumetricEmitter = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("VolumetricEmitter"));
    this->VolumetricEvent = NULL;
    this->bRotateEmitterWithPlayer = true;
    this->bAllowEnvelopment = true;
    this->ScatterGridDensity = 150.00f;
    this->ElevationConstraint = 0.00f;
    this->bInvertContainmentTest = false;
    this->bAutoPostVolumetric = true;
    this->bAutoPostScatter = true;
    this->bSetLazyUpdateDistanceAutomatically = true;
    this->LazyUpdateDistance = 5000.00f;
    this->LazyUpdateRate = 0.80f;
    this->Spline->SetupAttachment(RootComponent);
    this->VolumetricEmitter->SetupAttachment(RootComponent);
}

void AVolumetricSplineSoundEmitter::UpdateTickState() {
}

void AVolumetricSplineSoundEmitter::TrySpawnScatteredSound() {
}

void AVolumetricSplineSoundEmitter::StopVolumetricSound() {
}

void AVolumetricSplineSoundEmitter::StopScatteredSounds() {
}

void AVolumetricSplineSoundEmitter::StartVolumetricSound() {
}

void AVolumetricSplineSoundEmitter::StartScatteredSounds() {
}

UFMODAudioComponent* AVolumetricSplineSoundEmitter::GetVolumetricEmitter() const {
    return NULL;
}

USplineComponent* AVolumetricSplineSoundEmitter::GetSpline() const {
    return NULL;
}

TArray<UFMODAudioComponent*> AVolumetricSplineSoundEmitter::GetScatterEmitters() const {
    return TArray<UFMODAudioComponent*>();
}

void AVolumetricSplineSoundEmitter::GenerateSourcePointGrid() {
}

void AVolumetricSplineSoundEmitter::BreakScatteredSounds() {
}


