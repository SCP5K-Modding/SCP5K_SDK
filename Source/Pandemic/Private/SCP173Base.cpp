#include "SCP173Base.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIPerceptionStimuliSourceComponent -FallbackName=AIPerceptionStimuliSourceComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODAudioComponent -FallbackName=FMODAudioComponent
#include "DeferredDespawnComponent.h"
#include "SCP173MovementComponent.h"

ASCP173Base::ASCP173Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USCP173MovementComponent>(TEXT("CharMoveComp"))) {
    this->ObservationRadius = 5000.00f;
    this->PseudoCapsuleRadius = -1.00f;
    this->PseudoCapsuleHalfHeight = -1.00f;
    this->VisibilityTraceSubdivisions = 5;
    this->RandomIntervalSound = NULL;
    this->RandomSoundInterval = 30.00f;
    this->RandomSoundIntervalDeviation = 10.00f;
    this->StimuliSourceComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("StimuliSource"));
    this->DeferredDespawnComponent = CreateDefaultSubobject<UDeferredDespawnComponent>(TEXT("DeferredDespawn"));
    this->OneshotAudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("OneshotAudio"));
    this->MovementAudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("MovementAudio"));
    this->MovementSound = NULL;
    this->TeleportSound = NULL;
    this->KillSound = NULL;
    this->OneshotAudioComponent->SetupAttachment(RootComponent);
    this->MovementAudioComponent->SetupAttachment(RootComponent);
}

bool ASCP173Base::WouldBeVisibleToQuerier(const FVector& TargetLocation, const FVector& QueryLocation, const FVector& QueryDirection, float QueryFOV, bool bSingleTrace, FColor DebugColor) const {
    return false;
}

bool ASCP173Base::WouldBeVisibleToObserver(const FVector& TargetLocation, const USCP173ObserverComponent* QueryObserver, FColor DebugColor) const {
    return false;
}

bool ASCP173Base::WouldBeVisibleToActor(const FVector& TargetLocation, const AActor* QueryActor, FColor DebugColor) const {
    return false;
}

bool ASCP173Base::WouldBeVisible(const FVector& TargetLocation, FColor DebugColor) const {
    return false;
}

bool ASCP173Base::WouldBeInQuerierFOV(const FVector& TargetLocation, const FVector& QueryLocation, const FVector& QueryDirection, float QueryFOV) const {
    return false;
}

TArray<FVector> ASCP173Base::TransformPoints(const FTransform& TargetTransform, FColor DebugColor) const {
    return TArray<FVector>();
}

void ASCP173Base::SetSoundParameter_Implementation(FName ParameterName, float Value) {
}

void ASCP173Base::PlayRandomStingerSound() {
}

void ASCP173Base::PlayOneshotSound_Implementation(UFMODEvent* Sound) {
}

void ASCP173Base::PlayKillSound_Implementation(AActor* KillTarget) {
}

void ASCP173Base::OnDespawn() {
}

bool ASCP173Base::IsObserved() const {
    return false;
}

TArray<USCP173ObserverComponent*> ASCP173Base::GetPotentialObserversOfTargetLocation(const FVector& TargetLocation) const {
    return TArray<USCP173ObserverComponent*>();
}

TArray<USCP173ObserverComponent*> ASCP173Base::GetObserversOfTargetLocation(const FVector& TargetLocation, FColor DebugColor) const {
    return TArray<USCP173ObserverComponent*>();
}

TArray<USCP173ObserverComponent*> ASCP173Base::GetCurrentObservers(FColor DebugColor) const {
    return TArray<USCP173ObserverComponent*>();
}


