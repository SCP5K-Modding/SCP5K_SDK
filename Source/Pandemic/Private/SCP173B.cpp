#include "SCP173B.h"
#include "Net/UnrealNetwork.h"
#include "SCP173HallucinogenComponent.h"

ASCP173B::ASCP173B(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HallucinogenComponent = CreateDefaultSubobject<USCP173HallucinogenComponent>(TEXT("HallucinogenComponent"));
    this->DamageType = NULL;
    this->GraceCurve = NULL;
    this->MinMovementSoundDistance = 200.00f;
    this->bIsAttemptingKill = false;
}

void ASCP173B::PlaySound(ESCP173BSound SoundType, const FVector& TargetLocation) {
}

void ASCP173B::OnRep_SoundsToPlay() {
}

void ASCP173B::KillTarget(AActor* TargetActor) {
}

bool ASCP173B::IsAttemptingKill() const {
    return false;
}

AActor* ASCP173B::GetCurrentKillTarget() const {
    return NULL;
}

void ASCP173B::CancelKill() {
}

void ASCP173B::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASCP173B, bIsAttemptingKill);
    DOREPLIFETIME(ASCP173B, SoundsToPlay);
}


